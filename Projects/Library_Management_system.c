// --> Devloped By Patel Akshit..! (BCA - FY(SEM-1));

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Structures
struct Books
{
    int bid;
    char bName[30];
    char authorName[30];
    char date[10];
} book;

struct Students
{
    int bid;
    char sName[30];
    char sClass[30];
    int rollNo;
    char bName[30];
    char date[10];
} student;

// file pointer
FILE *fp; // for store book
FILE *ft; // temp file
FILE *fi; // for isuue book

// function prototypes
void print_menu();
void get_current_date();
void check_file_opening();
void add_book();
void view_book_list();
void remove_book();
void issue_book();
void view_issued_book_list();

int main()
{
    int choice;

    while (1)
    {
        system("cls"); // clear terminal
        print_menu();

        // To ensure that choice was integer
        while (1)
        {
            printf("\nEnter Your Choice(ONLY INTEGER) : ");
            if (scanf("%d", &choice) == 1)
            {
                break;
            }
            else
            {
                printf("\nInvalid input! please enter integer input.\n");
                fflush(stdin);
            }
        }

        switch (choice)
        {
        case 0:
            printf("\nExiting from program...\n\n");
            exit(0);

        case 1:
            add_book();
            break;

        case 2:
            view_book_list();
            break;

        case 3:
            remove_book();
            break;

        case 4:
            issue_book();
            break;

        case 5:
            view_issued_book_list();
            break;

        default:
            printf("\nInvalid choice! Please enter valid choice.\n");
            break;
        }
        printf("\nPress any key to continue...");
        getch();
    }
    return 0;
}

void print_menu()
{
    printf("================================================\n");
    printf("  <== Welcome To Library Management System ==>\n");
    printf("================================================\n\n");
    printf("1. Add Book\n");
    printf("2. View Book List\n");
    printf("3. Remove Book\n");
    printf("4. Issue Book\n");
    printf("5. View Issued Book List\n");
    printf("0. Exit\n");
    printf("------------------------------------------------\n");
}

void get_current_date(char *date)
{
    time_t stime = time(NULL);         // take time from system
    struct tm tm = *localtime(&stime); // convert system time into human readable form
    sprintf(date, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900); //store time in date variable
}

void check_file_opening(FILE *file)
{
    if (file == NULL)
    {
        printf("ERROR: file could not open\n");
        return;
    }
}

void add_book()
{
    char MyDate[10];
    get_current_date(MyDate);  // store system time in MyDate Array
    strcpy(book.date, MyDate); // Mydate date was copied in book.date

    system("cls");
    printf("================================================\n");
    printf("\t\t<== Add Book ==>\n");
    printf("================================================\n\n");

    // to ensure that book id was only integer
    while (1)
    {
        printf("Enter Book id(ONLY INTEGER) : ");
        if (scanf("%d", &book.bid) == 1)
        {
            break;
        }
        else
        {
            printf("\nInvalid input! Please enter integer value.\n\n");
            fflush(stdin);
        }
    }

    int idExist = 0;

    fp = fopen("book.txt", "rb"); // file open in read binary mode
    if (fp != NULL)
    {
        struct Books tempbook;
        while (fread(&tempbook, sizeof(tempbook), 1, fp) == 1)
        {
            if (tempbook.bid == book.bid)
            {
                idExist = 1;
                break;
            }
        }
        fclose(fp);
    }

    if (idExist)
    { // It means idExist = 1
        printf("\nSorry! %d id book was already exist, Please try again...\n", book.bid);
        return;
    }

    printf("Enter Book Name : ");
    fflush(stdin); // for remove buffer
    gets(book.bName);

    printf("Enter Author Name : ");
    fflush(stdin);
    gets(book.authorName);

    printf("\nBook Added successfully...\n");

    printf("------------------------------------------------\n");

    fp = fopen("book.txt", "ab"); // file open in append binary mode
    check_file_opening(fp);
    fwrite(&book, sizeof(book), 1, fp);
    fclose(fp);
}

void view_book_list()
{
    system("cls");
    printf("================================================================\n");
    printf("\t\t\t<== Book List ==>\n");
    printf("================================================================\n\n");
    printf("%-10s %-20s %-20s %s\n", "Book ID", "Book Name", "Author Name", "Date"); // print columns 
    printf("----------------------------------------------------------------\n\n");

    fp = fopen("book.txt", "rb"); // file open in read binary mode
    check_file_opening(fp);

    int found = 0;

    while (fread(&book, sizeof(book), 1, fp) == 1)
    {
        found = 1;
        printf("%-10d %-20s %-20s %s\n", book.bid, book.bName, book.authorName, book.date); // print recods
    }
    printf("----------------------------------------------------------------\n");
    fclose(fp);

    if (found == 0)
    {
        printf("No book found in the system.\n");
    }
}

void remove_book()
{
    system("cls");
    printf("======================================================\n");
    printf("\t\t<== Remove Book ==>\n");
    printf("======================================================\n\n");

    int id, found = 0;

    while (1)
    {
        printf("Enter Book id for remove book(ONLY INTEGER) : ");
        if (scanf("%d", &id) == 1)
        {
            break;
        }
        else
        {
            printf("\nInvalid input! Please enter integer value.\n\n");
            fflush(stdin);
        }
    }

    fp = fopen("book.txt", "rb");
    check_file_opening(fp);

    ft = fopen("temp.txt", "wb"); // file open in write binary mode
    check_file_opening(ft);

    while (fread(&book, sizeof(book), 1, fp) == 1)
    {
        if (id == book.bid)
        {
            found = 1;
        }
        else
        {
            fwrite(&book, sizeof(book), 1, ft);
        }
    }

    if (found == 1)
    {
        printf("\nBook Remove successfully.\n");
    }
    else
    {
        printf("\n%d id book was not exists.\n", id);
    }

    fclose(fp);
    fclose(ft);

    remove("book.txt");
    // ensure that file successfully remove or not.
    if (remove("book.txt"))
    {
        printf("file remove successfully.\n");
        printf("------------------------------------------------------\n");
    }
    rename("temp.txt", "book.txt");
}

void issue_book()
{
    char MyDate[10];
    get_current_date(MyDate);
    strcpy(student.date, MyDate);

    int found = 0;
    system("cls");
    printf("======================================================\n");
    printf("\t\t<== Issue Book ==>\n");
    printf("======================================================\n\n");

    // for take only integer input
    while (1)
    {
        printf("Enter book id for issue book(ONLY INTEGER) : ");
        if (scanf("%d", &student.bid) == 1)
        {
            break;
        }
        else
        {
            printf("\nInvalid input! Please enter integer value.\n\n");
            fflush(stdin);
        }
    }

    fp = fopen("book.txt", "rb");
    check_file_opening(fp);

    ft = fopen("temp.txt", "wb");
    check_file_opening(ft);

    while (fread(&book, sizeof(book), 1, fp) == 1) // read all recods of book structure 
    {
        if (student.bid == book.bid)
        {
            strcpy(student.bName, book.bName); // copy book name from book struct to student struct
            found = 1;
        }
        else
        {
            fwrite(&book, sizeof(book), 1, ft);
        }
    }

    fclose(fp);
    fclose(ft);

    if (found == 0)
    {
        printf("\nSorry! we don't have %d book id.\n", student.bid);
        printf("Plase try again...\n");
        printf("------------------------------------------------------\n");
        remove("temp.txt");
        return;
    }

    printf("Enter Student Name : ");
    fflush(stdin);
    gets(student.sName);

    printf("Enter Studen Class : ");
    fflush(stdin);
    gets(student.sClass);

    while (1)
    {
        printf("Enter Student roll number(ONLY INTEGER) : ");
        if (scanf("%d", &student.rollNo) == 1)
        {
            break;
        }
        else
        {
            printf("\nInvalid input! Please enter integer value.\n\n");
            fflush(stdin);
        }
    }

    fi = fopen("issue_book.txt", "ab");
    check_file_opening(fi);
    fwrite(&student, sizeof(student), 1, fi);
    fclose(fi);

    printf("\nBook issue successfully.\n");

    remove("book.txt");
    if (remove("book.txt"))
    {
        printf("file remove successfully.\n");
        printf("------------------------------------------------------\n");
    }
    rename("temp.txt", "book.txt");
}

void view_issued_book_list()
{
    system("cls");
    printf("==========================================================================================================\n");
    printf("\t\t\t\t\t<== Issued Book List ==>\n");
    printf("==========================================================================================================\n\n\n");
    printf("%-10s %-20s %-20s %-20s %-20s %s\n", "Book ID", "Student Name", "Student Class", "Roll Number", "Book Name", "Date");
    printf("----------------------------------------------------------------------------------------------------------\n\n");

    fi = fopen("issue_book.txt", "rb");
    check_file_opening(fi);

    int found = 0;
    while (fread(&student, sizeof(student), 1, fi) == 1)
    {
        found = 1;
        printf("%-10d %-20s %-20s %-20d %-20s %s\n", student.bid, student.sName, student.sClass, student.rollNo, student.bName, student.date);
    }
    printf("----------------------------------------------------------------------------------------------------------\n\n");
    fclose(fi);

    if (found == 0)
    {
        printf("No Book Issued Yet !!!\n");
    }
}
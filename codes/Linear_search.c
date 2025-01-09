#include <stdio.h>

int main()
{
    int array[100], search, c, n; // c is counter variable.
    printf("Enter number of elements in array : \n"); // laegth of array
    scanf("%d", &n);

    printf("Enter %d integer \n", n); // elements of array

    for (c = 0; c < n; c++) // c is a position of array element.
    {
        scanf("%d", &array[c]);
    }
    printf("Enter a number to search \n");
    scanf("%d", &search);

    for (c = 0; c < n; c++) // linear search.
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d.\n", search, c + 1);
            break; // if we don't use break then it will also print below if statement.
        }                                         
    }

    if (c == n) // c(counter) reachs at n(number of element) Here, n means last element of array.
    {
        printf("%d isn't present in the array.\n", search);
    }
    return 0;
}
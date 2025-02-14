/* 2. Create Structure called vehicle with field v_id, v_number, city, read details of 10 vehicles and display 
The vehicles the vehicles of “vadodra” city. */

#include <stdio.h>
#include <string.h>

#define SIZE 10

struct Vehicle
{
    int v_id;
    char v_number[20];
    char city[30];
};

int main()
{
    struct Vehicle v_info[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\n<== Enter Details of No.%d Vehicle ==>\n\n", i + 1);
        printf("Enter Vehicle ID : ");
        scanf("%d", &v_info[i].v_id);

        printf("Enter Vehicle Number : ");
        scanf("%s", &v_info[i].v_number);

        printf("Enter City of Vehicle : ");
        scanf("%s", &v_info[i].city);
    }

    int found = 0;
    printf("\n\n<== List Of Vehicles From Vadodra ==>\n\n");

    for (i = 0; i < SIZE; i++)
    {

        if (strcasecmp(v_info[i].city, "Vadodra") == 0)
        {
            printf("Vehicle ID = %d\nVehicle_Number = %s\nCity = %s\n\n", v_info[i].v_id, v_info[i].v_number, v_info[i].city);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nNo Vehicles found from vadodra!");
    }
    return 0;
}
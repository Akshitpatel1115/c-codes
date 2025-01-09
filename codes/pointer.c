#include <stdio.h>

int main(){
    int num = 42; // declare an integer
    int * ptr = &num; // declare a pointer

    // print the value of num and its address.

    printf("Value of num : %d\n",num); // value 
    printf("Address of num : %p\n",&num); // address

    // print the value stored in the pointer and the address it pointer too 

    printf("Value in pointer (ptr) : %p\n",&ptr); // address 
    printf("Value pointed to by ptr : %d\n",*ptr); // value 

    // Modify the value of num using the pointer 

    *ptr = 100;

    // print the modify value 

    printf("modify value of num : %d\n",num);
    printf("Modify pointer address : %p\n",num);
    return 0;
}
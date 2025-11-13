/*Create a union containing 6 strings: 
name, home_address, hostel_address, city, state and zip. 
Write a C program to display your present address. */

#include<stdio.h>
union address{
    char name[20];
    char home_add[20];
    char hostel_add[20];
    char city[10];
    char state[10];
    char zip[10];
};
int main(){
    int n;
    printf("enter number of records: ");
    scanf("%d", &n);
    union address details[n];
    for(int i=0; i<n; i++){
        printf("enter name: ");
        scanf(" %s", details[i].name);
        printf("enter home address: ");
        scanf(" %s", details[i].home_add);
        printf("enter hostel address: ");
        scanf(" %s", details[i].hostel_add);
        printf("enter city: ");
        scanf("%s", details[i].city);
        printf("enter state: ");
        scanf("%s", details[i].state);
        printf("enter zipcode: ");
        scanf("%s", details[i].zip);
    }
    printf("\n\nPRESENT ADDRESS\n");
    for(int i=0; i<n; i++){
        printf("NAME : %s\n", details[i].name);
        printf("HOME ADDRESS : %s\n", details[i].home_add);
        printf("HOSTEL ADDRESS : %s\n", details[i].hostel_add);
        printf("CITY : %s\n", details[i].city);
        printf("STATE : %s\n", details[i].state);
        printf("ZIP: %s\n\n", details[i].zip);
    }
    return 0;
}
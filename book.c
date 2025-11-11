/* Create a Book structure containing book_id, title, author name and price. 
Write a C program to pass a structure as a function argument and print the book details. */

#include<stdio.h>
struct author{
        char first_name[10];
        char middle_name[10];
        char surname[10];
};
struct book{
    int sno;
    char title[30];
    struct author aname[5];
    int pyear;
};
int main(){
    int n;
    printf("enter number of records: ");
    scanf("%d",&n);
    struct book details[n];
    for(int i=0; i<n; i++){
        printf("enter serial num: ");
        scanf("%d", &details[i].sno);
        printf("enter title: ");
        scanf(" %[^\n]", details[i].title);
        printf("enter publishing year: ");
        scanf("%d", &details[i].pyear);
        printf("enter author first name: ");
        scanf("%s", details[i].aname[i].first_name);
        printf("enter middle name: ");
        scanf("%s", details[i].aname[i].middle_name);
        printf("enter your surname: ");
        scanf("%s", details[i].aname[i].surname);
        }
    printf("\n\n\n**DETAILS ARE:**\n");
    for(int i=0; i<n; i++){
        printf("serial no : %d\n", details[i].sno);
        printf("book title : %s\n", details[i].title);
        printf("publishing year : %d\n",details[i].pyear);
        printf("author name: %s %s %s\n", details[i].aname[i].first_name, details[i].aname[i].middle_name, details[i].aname[i].surname); 
    }
}
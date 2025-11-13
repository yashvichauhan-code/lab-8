//Write a C program to compute the monthly pay of 100 employees using each employee‗s name, basic pay. 
//The DA is computed as 52% of the basic pay. 
#include<stdio.h>

struct employee {
    char ename[20];
    int basic_pay;
};

int main() {
    int n;
    printf("enter how many details you want to input: ");
    scanf("%d", &n);
    struct employee details[n];
    for(int i = 0; i < n; i++) {
        printf("enter employee name: ");
        scanf(" %[^\n]", details[i].ename);   

        printf("enter basic pay: ");
        scanf(" %d", &details[i].basic_pay);
    }
    printf("\n\n\n----Employee Details----\n");
    for(int i = 0; i < n; i++) {
        int da = details[i].basic_pay * 52 / 100;
        printf("\nName: %s", details[i].ename);
        printf("\nBasic Pay: %d", details[i].basic_pay);
        printf("\nDA: %d", da);
        printf("\nMonthly Pay: %d\n", details[i].basic_pay + da);
    }

    return 0;
}
/*1.	Write a C program that uses functions to perform the following operations: 
a.	Reading a complex number. 
b.	Writing a complex number. 
c.	Addition and subtraction of two complex numbers 
*/

#include <stdio.h>

struct complex {
    int real;
    int imaginary;
};

void read();
void write();
void addsub();

void read(){
    struct complex c;
    printf("enter real part: ");
    scanf("%d", &c.real);
    printf("enter imaginary part: ");
    scanf("%d", &c.imaginary);
}
void write() {
    struct complex c1;
    printf("complex number: %d + %di\n", c1.real, c1.imaginary);
}

void addsub() {
    struct complex c1, c2, sum, diff;
    printf("enter first complex number\n");
    printf("enter real part: ");
    scanf("%d", &c1.real);
    printf("enter imaginary part: ");
    scanf("%d", &c1.imaginary);
    printf("enter second complex number\n");
    printf("enter real part: ");
    scanf("%d", &c2.real);
    printf("enter imaginary part: ");
    scanf("%d", &c2.imaginary);
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    diff.real = c1.real - c2.real;
    diff.imaginary = c1.imaginary - c2.imaginary;

    printf("\nsum = %d + %di", sum.real, sum.imaginary);
    printf("\ndifference = %d + %di\n", diff.real, diff.imaginary);
}

int main() {
    int choice;
    struct complex c, c1, c2;
    printf("enter choice:\n1. read a complex number\n2. display a complex number\n3. add and subtract two complex numbers\n");
    printf("enter: ");
    scanf("%d", &choice);

    if (choice == 1) {
        read();
        printf("complex number stored successfully\n");
    }
    else if (choice == 2) {
        printf("enter complex number\n");
        read();
        write();
    }
    else if (choice == 3) {
        addsub();
    }
    else {
        printf("invalid choice");
    }

    return 0;
}

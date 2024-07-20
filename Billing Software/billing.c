#include<stdio.h>
#include<time.h>
#include<conio.h>

struct bill {
    char name[100];
    int qty;
    int rate;
    int Itotal;
};

void main() {
    time_t t;
    time(&t);
    struct bill b[100];
    int i, n, total=0;
    int srno=1;
    char another='y';
    system("cls");

    printf("\t\t\t******KHOMANE'S MISAL******\n");
    printf("Date/Time: %s\n", ctime(&t));

    printf("Enter the no. of items purchased: ");
    scanf("%d", &n);

    //enter items, their qty and rate
    for(i=0; i<n; i++) {
        printf("Enter item's name: ");
        fflush(stdin);
        gets(b[i].name);
        printf("Enter quantity: ");
        scanf("%d", &b[i].qty);
        printf("Enter rate: ");
        scanf("%d", &b[i].rate);

        b[i].Itotal = b[i].qty * b[i].rate;

        total = total + b[i].Itotal;
    }

    system("cls");

    printf("\t\t\t******KHOMANE'S MISAL******\n");
    printf("Date/Time: %s\n", ctime(&t));

    //bill generation
    printf("-------------------------------------------------------------------------\n");
    printf("Sr.No.\t"); printf("\tName\t"); printf("\tQuantity   \t"); printf("Rate\t");  printf("Total price \n");
    printf("-------------------------------------------------------------------------\n");
    for(i=0; i<n; i++) {
        printf("    %d    \t", srno++);
        printf("    %s    \t", b[i].name);
        printf("    %d    \t", b[i].qty);
        printf("    %d    \t", b[i].rate);
        printf("    %d    \n", b[i].Itotal);
    }

    printf("-------------------------------------------------------------------------\n");

    printf("Total = %d", total);

     


    getch();

}
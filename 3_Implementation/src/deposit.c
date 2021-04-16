#include "bank.h"

void deposit(customerlist customer_list[] , int count,int account_no, int amt){

   printf("*************DEPOSITE AMOUNT***************\n");
    int i = search(customer_list,count,account_no );
    if (i ==  - 1)
    {
        printf("Record not found\n");
    }
    else
    {
        customer_list[i].balance += amt;
        printf("Amount credited sucessfully\n");

         printf("\n***************************************************\n\n");
    
    }



}

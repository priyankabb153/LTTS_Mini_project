#include "bank.h"
int create_account(customerlist customer_list[])
{
    int ch,i;
    printf("*************CREATE ACCOUNT***************\n");
    printf("Enter details to create account\n");
    lable: printf("Enter account number:");
    scanf("%d", &ch);
    
    if(count!=0)
    {
        i=search(customer_list,count,ch);

        if(i!=-1)
        {
            printf("Account no already exists enter unique account number!!!!!!!!!!\n \n");
            goto lable;
        }
        else
        {
            customer_list[count].acc_no=ch;
        }
    }
    else
    {
        customer_list[count].acc_no=ch;
    }

    fflush(stdin);
    printf("Enter name : ");
    gets(customer_list[count].name);
    printf("Enter the age:");
    scanf("%d",&customer_list[count].age);
    fflush(stdin);
    printf("Enter the address:");
    gets(customer_list[count].address);
    printf("Enter the phone number: ");
    scanf("%lld",&customer_list[count].phone_no);
    customer_list[count].balance = 0;
    printf("Account created sucessfully!!!!!!!!!!!!!!!!!!!!!\n");
    count++;
    printf("\n***************************************************\n\n");
    return count;
}
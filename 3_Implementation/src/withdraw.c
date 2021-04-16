#include "bank.h"
void withdraw(customerlist customer_list[],int count, int account_no, int amt)
{
    int i = search(customer_list,count, account_no);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    }
    else if (customer_list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        customer_list[i].balance -= amt;

          printf("Amount debited \n");
          printf("current balance after withdraw is %d\n",customer_list[i].balance);

         printf("\n***************************************************\n\n");
    
    }
}
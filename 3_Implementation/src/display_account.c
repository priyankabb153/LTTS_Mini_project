#include "bank.h"

void display_account(customerlist customer_list[],int count){
 
   printf("*******************All account holders details are as follows**********************\n");
   int i;
    printf("Account No\tName\tAge\tPhone No\tBalance\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t%s\t%lld\t%d\n", customer_list[i].acc_no, customer_list[i].name,customer_list[i].age,customer_list[i].address,customer_list[i].phone_no,customer_list[i].balance);
    }
   
    printf("\n***************************************************\n\n");
    

}
#include "bank.h"

int get_account_balance(node *head,int account_no)
{
    printf("*************Get account balance***************\n");
    node* cur;
    node* next;

    if(head==NULL)
    {
      // printf("NO ACCOUNTS EXITS!!!!!!!!!!\n");
       return -1;
    }

    for(cur=head;cur!=NULL && cur->acc_no!=account_no;cur=cur->next);

    if(cur==NULL)
    {
       // printf("Account doesnt exist!!!!!!\n");
        return -1;
    }
    
    if(cur->acc_no==account_no)
    {
        return cur->balance;
    }
    return -1;
      
}


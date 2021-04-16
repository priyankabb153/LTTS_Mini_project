#include "bank.h"

node* create_account(node* head)
{
    node *cur , *new;
    printf("*************CREATE ACCOUNT***************\n");
    int number, acc_no, amount;
    printf("Enter account details to create account\n");
    new=(node*) malloc(sizeof(node));
    
    new->acc_no=account_number;
    printf("Enter name : ");
    scanf("%s",new->name);
    fflush(stdin);
    printf("Enter the age:");
    scanf("%d",&new->age);
    fflush(stdin);
    printf("Enter the address:");
    gets(new->address);
    printf("Enter the phone number: ");
    scanf("%lld",&new->phone_no);
    new->balance = 0;
    new->next=NULL;

    if(head==NULL)
    {
        head=new;
    }
    else
    {
        for(cur=head;cur->next!=NULL;cur=cur->next);
        cur->next=new;
    }

   printf("***************************************************\n");
   account_number++;
   return head;
    
}
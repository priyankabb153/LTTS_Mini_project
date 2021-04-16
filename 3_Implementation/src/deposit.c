#include "bank.h"

void deposit(node * head,int account_no, int amt){

   printf("*************DEPOSIT AMOUNT***************\n");
   node* cur;
   node* next;

   if(head==NULL)
   {
       printf("NO ACCOUNTS EXITS!!!!!!!!!!\n");
       return;
   }

   if(account_no<=0 || amt<=0)
   {
       printf("PLEASE ENTER VALID INPUT!!!!!!!!!!\n");
       return;
   }

   for(cur=head; cur!=NULL && cur->acc_no!=account_no;cur=cur->next);

   if(cur==NULL)
   {
       printf("Account number entered does not exist!!!!!!!!!\n");
       return;
   }

   cur->balance=cur->balance+amt;
   return;
  
}
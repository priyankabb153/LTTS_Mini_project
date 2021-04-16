#include "bank.h"

void withdraw(node*head,int account_no, int amt)
{
    printf("*************Withdraw AMOUNT***************\n");
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

   if(amt<=cur->balance)
   {
       cur->balance=cur->balance-amt;
       printf("Withdraw of %d amount from account %d successful!!!!!\n\n",amt,cur->acc_no);
       printf("Remaining balance is %d!!!!!!!!!!!\n",cur->balance);
   }
   else{
       printf("Insuffient funds cancelling transcation!!!!!!!!!!!!\n");
       printf("*********************************************************\n");
   }
   return;
}

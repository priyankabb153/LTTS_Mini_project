#include "bank.h"

int main()
{
    node *head = NULL;
   account_number=1;
    int choice;
    node* cur;
    node* next;
    int number, account_no, amount, index,account_balance=0;
   
    do
    {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1.Create ACCOUNT\n2.VIEW ALL ACCOUNTS\n3.Deposit\n4.WITHDRAW\n5.GET ACCOUNT BALANCE\n6.EXIT\n\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                  head=create_account(head);
                  break;

            case 2:
                display_account(head);
                break;
           
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(head,account_no, amount);
                break;
                
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(head,account_no, amount);
                break;
            case 5:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                account_balance=get_account_balance(head,account_no);
                if(account_balance==-1){
                    printf("Account number doesnt exist!!!!\n");
                    break;
                }
                printf("Account balance is %d!!!!!!\n",account_balance);
                break;
                
        }
    }
    while (choice != 6);
    
    printf("Releasing the dynamic memory allocated\n");
    for(cur=head;cur!=NULL;)
    {
        next=cur->next;
        free(cur);
        cur=next;
    }
    
   return 0;
}

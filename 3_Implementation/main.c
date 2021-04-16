#include "bank.h"

int main()
{
    int choice;
    customerlist accounts[20];
    int account_no, amount, index;
    printf("********************* Bank management system ***********************\n");
    printf("\n\n");
    printf("********************* Welcome to the bank ***********************\n");

        //printf("Total number of customer records you ant to enter ?:");
        //scanf("%d", &number);
        //create_account(data, number);
       // count=number;
        // system("cls");
        int number=0;
        do{
       
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1.CREATE ACCOUNT\n2.VIEW ALL ACCOUNTS\n3.SEARCH\n4.Deposit\n5.WITHDRAW\n6.EXIT\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        scanf("%d",&choice);
        switch(choice){
           case 1:number=create_account(accounts);
                 // count++;

                  break;
           case 2:
                display_account(accounts,number);
                break;
            case 3:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(accounts,number, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : \n");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nAge: %d\nAddress: %s\nPhone number: %lld\nBalance: %d\n",
                        accounts[index].acc_no, accounts[index].name,accounts[index].age,accounts[index].address,accounts[index].phone_no,
                        accounts[index].balance);
                }
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(accounts,number,account_no, amount);
                break;
            case 5:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(accounts,number,account_no, amount);
                break;
            case 6:break;


        }
    }
    while (choice != 6);


    
   return 0;
}




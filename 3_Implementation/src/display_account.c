#include "bank.h"


void display_account(node* head){

    node *cur ;

    printf("*******************All account holders details are as follows**********************\n");
    printf("Acc No\tName\t\tAge\tAddress\tPhone No\tBalance\n");
    for(cur=head;cur!=NULL;cur=cur->next)
    {
        printf("%d\t%s\t%d\t%s\t%lld\t%d\n", cur->acc_no, cur->name,cur->age,cur->address,cur->phone_no,cur->balance);
    }
     printf("*********************************************************\n");
}
#include "bank.h"

void write_to_file(node* head){

    node *cur ;
    FILE *fp = fopen("bank_record", "w");
    if(head==NULL){
        printf("Nothing to write to file\n");
    }

    for(cur=head;cur!=NULL;cur=cur->next)
    {
        fprintf(fp,"%d\t%s\t%d\t%s\t%lld\t%d\n", cur->acc_no, cur->name,cur->age,cur->address,cur->phone_no,cur->balance);
    }
  
    fclose(fp);
}
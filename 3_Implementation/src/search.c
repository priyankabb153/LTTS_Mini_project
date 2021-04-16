#include "bank.h"

int search(customerlist customer_list[],int count, int account_no)
{
    

    for (int i = 0; i < count; i++)
    {
        if (customer_list[i].acc_no == account_no )
        {
            return i;
        }
    }
    return  - 1;
}
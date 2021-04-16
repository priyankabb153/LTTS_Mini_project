
#ifndef __BANK_H__
#define __BANK_H__

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_ADDRESS 50

/**
 * @brief declaring a struct customer with account number,name,age, adress phone number and balance
 * 
 */
/*typedef struct customer {
  int acc_no;
  char name[MAX_NAME];
  int age;
  char address[MAX_ADDRESS];
  long long int phone_no;
  int balance;

}customer;*/

typedef struct node{
    int acc_no;
    char name[MAX_NAME];
    int age;
    char address[MAX_ADDRESS];
    long long int phone_no;
    int balance;
    struct node *next;
}node;

//node *head = NULL;
int account_number;
 
node* search(int key);

node* create_account(node *head);

void display_account(node *head);

void deposit(node *head, int account_no, int amt);

void withdraw(node *head,int account_no, int amt);

int get_account_balance(node *head,int account_no);

#endif

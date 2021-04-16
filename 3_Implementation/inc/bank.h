
#ifndef __BANK_H__
#define __BANK_H__

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_ADDRESS 50

/**
 * @brief declaring a struct node  with account number,name,age, adress phone number and balance and struct next node
 * 
 */

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
/**
 * @brief account number to assign account account numbers to the customers
 * 
 */
int account_number;
 

//node* search(int key);


/**
 * @brief Create a account function to create customer accounts
 * 
 * @param head the head pointer is sent as parameter
 * @return node* 
 */

node* create_account(node *head);

/**
 * @brief display account function to display all account holders details
 * 
 * @param head the head pointer is sent as parameter
 */

void display_account(node *head);

/**
 * @brief deposit function to deposit amount into a specefied account 
 * 
 * @param head the head pointer is sent as parameter
 * @param account_no the account number to which the amount has to be deposited
 * @param amt the amount which has to be deposited into the account
 */

void deposit(node *head, int account_no, int amt);

/**
 * @brief withdraw function to withdraw specified amount from a specific account
 * 
 * @param head the head pointer is sent as parameter
 * @param account_no the account number from which amount has to be withdrawn
 * @param amt the amount which has to be withdrawn from the account
 */

void withdraw(node *head,int account_no, int amt);

/**
 * @brief Get the account balance object to get the account balance of a account holder
 * 
 * @param head the head pointer is sent as parameter
 * @param account_no the account number of the account holder whoes account balance has to be fetched
 * @return int returns the balance present in the account
 */

int get_account_balance(node *head,int account_no);

#endif

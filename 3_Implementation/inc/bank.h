/**
 * @file bank.h
 * @author Priyanka
 * @brief Bank management program implementation
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __BANK_H__
#define __BANK_H__

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/*
typedef enum error_t{
    //ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    FALIURE=-1
    //START_EXISTS=1,
    //NO_HEAD_EXIST=2,
    //DATE_INCORRECT=3,
    //INVALID_NAME=4,
    //ID_EXISTS=5
}error_t;
*/


#define MAX_NAME 50
#define MAX_ADDRESS 50

/**
 * @brief declaring a struct customer with account number,name,age, adress phone number and balance
 * 
 */
typedef struct customer {
  int acc_no;
  char name[MAX_NAME];
  int age;
  char address[MAX_ADDRESS];
  long long int phone_no;
  int balance;

}customerlist;
/**
 * @brief count to keep track of records of account
 * 
 */
static int count=0;

/**
 * @brief function to Create a account which takes customer list as input
 * 
 * @return int int returns the count of records
 */
int create_account(customerlist[]);


/**
 * @brief function to display all the details of the account holders which takes input list to hold customer details
 * 
 * @param count the count of accounts present
 */
void display_account(customerlist[],int count);


/**
 * @brief function to search an account of the customer based on the account number which returns the index upon finding the account or else returns -1 
 * 
 * @param count  the count of accounts created
 * @param account_no the account number to search the account in the list of customers
 * @return int if the account is found then the index of account is returned or else -1 is returned
 */
int search(customerlist[],int count, int account_no);

/**
 * @brief function to deposit specified amount into an account
 * 
 * @param count the count of accounts created
 * @param account_no the account number to search the account in the list of customers to deposit amount
 * @param amt the amount which has to be deposited
 */
void deposit(customerlist[],int count, int account_no, int amt);





/**
 * @brief  function to withdraw amount from specified account
 * 
 * @param count the number of accounts created
 * @param account_no the account number to search the account in the list of customers to withdraw amount
 * @param amt the amount which has to be withdrawed
 */
void withdraw(customerlist[], int count ,int account_no, int amt);


//error_t search_id(struct customer list[], int number, int account_no);

//void find_id(struct customer list[], int number, int account_no);

#endif
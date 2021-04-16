# Requirements
## Introduction
 * The main aim of this project is to develop software for bank  management system. This project has been developed to carry out the process easily and quickly , which seems tedious with  manual systems .The system provides the access to the customer to create an account , display list of all account holders, deposit cash to his/her account,withdraw cash from his/her account also to check account balance .


## Research
### Bank Management System Features and Benefits
Over the last several decades, the personnel function has evolved from a relatively obscure record-keeping function to a central and top-level management function. Many factors such as technological developments, professionalism, and the general recognition of people as the most important resources have influenced this transformation.
A computer based management system is designed  to introduce more user friendliness in the various activities such as account creation , depositing amount , withdrawing amount , display all details and fetching bank balance.

The main goal of our project is to provide various types of customer facilities, and to provide good  customer service. 

* It should fulfill almost all the process requirements of any Bank.	
* It should increase the productivity of bank by utilizing the working  hours more and more, with minimum manpower.

### Benefits

Bank management system provides wide range of benefit they are as follows:

### Provides flexibility

### For better performance

### Reducing man power

### For doing work more accurately

### Faster performance

<!--
## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 10
-->
## Defining Our System
<!--### Certain assumptions:
* Few systems already exists with which our system will interact
    * Hospital Management Application
    * Analytics System
    * Emergency Services-->
![Description](https://github.com/priyankabb153/LTTS_Mini_project/blob/main/1_Requirements/system.png)
### Explanation:
  Features of Bank Management system are:
    * Creating new accounts
    * Display all account holders details
    * Deposit amount
    * Withdraw amount
    * Get account balance
   

## SWOT ANALYSIS
![SWOT Analysis](https://github.com/priyankabb153/LTTS_Mini_project/blob/main/1_Requirements/swot.png)

# 4W&#39;s and 1&#39;H

## Who:
* Banks

## What:
* As transactions of banks are increasing day by day the manual management of such system becomes tedious

## When:
* When we want to carry out the tasks quickly and this reduces lots of paper-works and manual work

## Where:
* This issue can be seen in all parts of world where there is lots of transcations happening all the time.

## How:
* The wronge entiries made manually by the person may cause wrong transactions.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to create accounts | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to view all accounts | Techincal | IMPLEMENTED |
| HR03 | User shall be able to deposit specified amount to an account| Techincal | IMPLEMENTED |
| HR04 | User shall be able to withdraw specified amount from an account  | Techincal | IMPLEMENTED |
| HR05 | User shall be able to fetch account balance | Techincal | IMPLEMENTED |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | User need to create account by providing all the required informations | HR01 | IMPLEMENTED |
| LR02 | Displaying all the account holders details by printing all the records available| HR02 | IMPLEMENTED |
| LR03 | If user specifies account id for depositing amount before creating any account ""NO ACCOUNTS EXIT" message should be displayed | HR03 | IMPLEMENTED |
| LR04 | If user specifies account id which is not available for depositing amount  "Account number entered does not exist" message should be displayed | HR03 | IMPLEMENTED |
| LR05 | If user specifies negative account id  or negative amount for depositing amount into the account "PLEASE ENTER VALID INPUT " message should be displayed | HR03 | IMPLEMENTED |
| LR06 | If user specifies account id for withdrawing amount before creating any account "NO ACCOUNTS EXIT" message should be displayed | HR04 | IMPLEMENTED |
| LR07 | If user specifies account id which is not available for withdrawing amount  "Account number entered does not exist" message should be displayed | HR04 | IMPLEMENTED |
| LR08 | If user specifies negative account id  or negative amount for withdrawing amount from the account "PLEASE ENTER VALID INPUT " message should be displayed | HR04 | IMPLEMENTED |
| LR09 | If user wants to withdraw amount which is greater than the balance then "Insuffient funds cancelling transcation " message has to be displayed | HR04 | IMPLEMENTED |
| LR10 | If user specifies invalid or unavailable account id to fetch the account balance "Account number doesnt exist" message has to be displayed | HR05 | IMPLEMENTED |




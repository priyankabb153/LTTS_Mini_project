# test plan and test ouput



## Table no: Test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_01| Provide required details for creating account| user details| SUCCESS | SUCCESS | PASS |
|  L_02    |H_02|Display all account holders details|  Enter choice | Display list | Display list | PASS |
|  L_03       |H_03| Inputting account id to deposite amount before creating any account | account no :100, amount=100 | NO ACCOUNTS EXITS | NO ACCOUNTS EXITS | PASS |
|  L_04       |H_03| Inputting account id to deposite amount which does not exists   |account no :300, amount=100 | Account number entered does not exist | Account number entered does not exist | PASS |
|  L_05       |H_03| If user specifies negative account id  or negative amount for depositing amount | account no :-100, amount=100  or accoount no :100, amount=-100 | PLEASE ENTER VALID INPUT | PLEASE ENTER VALID INPUT  | PASS |
|  L_06       |H_03| If user specifies correct account number and amount for depositing amount | account no :1, amount=100   |  SUCCESSFUL |  SUCCESSFUL  | PASS |
|  L_07       |H_04| Inputting account id for withdrawing amount before creating any account | account no :100, amount=100 | NO ACCOUNTS EXITS | NO ACCOUNTS EXITS | PASS |
|  L_08       |H_04| Inputting account id for withdrawing amount which does not exists   |account no :300, amount=100 | Account number entered does not exist | Account number entered does not exist | PASS |
|  L_09       |H_04| If user specifies negative account id  or negative amount for depositing amount | account no :-100, amount=100  or account no :100, amount=-100 | PLEASE ENTER VALID INPUT | PLEASE ENTER VALID INPUT  | PASS |
|  L_10       |H_04| If user wants to withdraw amount which is greater than the balance | account no :1, amount=10000  | Insuffient funds cancelling transcation | Insuffient funds cancelling transcation | PASS |
|  L_11       |H_04| If user specifies correct account number and amount for withdrawing amount | account no :1, amount=100   |  SUCCESSFUL |  SUCCESSFUL  | PASS |
|  L_12       |H_05| If user specifies invalid or unavailable account id to fetch the account balance | account no :-100   |  Account number doesnt exist |  Account number doesnt exist  | PASS |
|  L_13       |H_05| If user specifies correct account id to fetch the account balance | account no :100   |  SUCCESSFUL |  SUCCESSFUL  | PASS |













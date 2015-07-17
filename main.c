// A program that mimics a bank ATM, deposit, withdraw, balance, and so on..

// Function prototypes
float getDeposit(float balance, float deposit);
float getWithdraw(float balance, float withdraw);
float displayBalance(float balance);
char menu(void);

#include <stdio.h>

float balance;
float deposit;
float withdraw;
char action;


    int main()
{

float balance = 100;

    do {
        menu();
            switch (action)
           {
            case 'D':
                balance = getDeposit(balance,deposit);
                break;
            case 'W':
                balance = getWithdraw(balance,withdraw);
                break;
            case 'B':
                balance = displayBalance(balance);
                break;
            case 'Q':
                printf("\nThank You!\n");
                break;
            default:
                break;

          }
    }while (action != 'Q');
    return 0;
}
// Function to make a deposit
    float getDeposit(float balance, float deposit)
{
    printf("\n\n\tYour current balance is %.2f\n ",balance);
    printf("\n\t\tHow much would you like to deposit? ");
    scanf("%f",&deposit);
    balance = balance + deposit;
    printf("\n\n\tYour current balance is %.2f\n",balance);
    return balance;
}
// Function to make a withdraw
    float getWithdraw(float balance, float withdraw)
{
    printf("\n\n\tYour current balance is %.2f\n ",balance);
    printf("\nHow much would you like to withdraw? ");
    scanf("%f", &withdraw);
    balance = balance - withdraw;
    printf("\n\n\tYour current balance is %.2f\n",balance);
    return balance;
}
// Function to display the current balance
    float displayBalance(float balance)
{
    balance = balance;
    printf("\n\n\tYour current balance is %.2f\n ",balance);
    return balance;
}
// Function for displaying the menu
    char menu()
{
    printf("\n\n\t\tWelcome to the HFC Federal Credit Union!\n\n\t\tPlease select from the following menu:\n");
    printf("\n\n\tD: \tMake a deposit. \n\n\tW: \tMake a withdrawal.\n\n\tB: \tCheck your account balance. \n\n\tQ: \tTo quit ");
    scanf("\n%c", &action);
    return action;
}





















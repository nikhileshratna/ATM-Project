#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <math.h>

void mm() {

printf("**************Hello! Dear Customer***************\n");

printf("*******Welcome to NK.NR BANK ATM*******\n\n");

printf("****Please choose one of the options below****\n\n");

printf("< 1 > Check Balance\n");

printf("< 2 > Deposit\n");

printf("< 3 > Withdraw\n");

printf("< 4 > Exit\n\n");

}

void cb(float balance) {

printf("You Choose to See your Balance\n");

printf("\n\n****Your Available Balance is: $%.2f\n\n", balance);

}

float md(float balance) {

float deposit;

printf("You choose to Deposit a money\n");

printf("$$$$Your Balance is: $%.2f\n\n", balance);

printf("****Enter your amount to Deposit\n");

scanf("%f", &deposit);

balance += deposit;

printf("\n****Your New Balance is: $%.2f\n\n",
balance);

return balance;

}

float mw(float balance) {

float withdraw;

bool back = true;

printf("You choose to Withdraw a money\n");

printf("$$$$Your Balance is: $%.2f\n\n", balance);

while (back) {

printf("Enter your amount to withdraw:\n");

scanf("%f", &withdraw);

if (withdraw < balance) {

back = false;

balance -= withdraw;

printf("\n$$$$Your withdrawing money is: $%.2f\n", withdraw);

printf("****Your New Balance is: $%.2f\n\n", balance);

}

else {

printf("+++You don't have enough money+++\n");

printf("Please contact to your Bank Customer Services\n");

printf("****Your Balance is: $%.2f\n\n", balance);

break;

}

}

return balance;}

void menuExit() {

printf("--------------Take your receipt!!!------------------\n");

printf("-----Thank you for using ATM Banking Machine!!!-----\n");

}

void errorMessage() {;

printf("+++!!!You selected invalid number!!!+++\n");

}

float account(){

int acn;

int a[5]={1101,1202,1303,1404,1505};

printf("enter your Account number: ");

scanf("%d", &acn);

if(acn==a[0]){

float balance=15000.00;}

else if(acn==a[1]){

float balance=20000.00;}

else if(acn==a[2]){

float balance=2000.00;}

else if(acn==a[3]){

float balance=12000.00;}

else if(acn==a[4]){

float balance=6000.00;

return balance;

}

else{

printf("OOPS! you dont have account with us.\n If you have account with us and are not able to log in \n contact bank");

exit(0);

}

}

int main() {

printf("**************Hello! Dear Customer***************\n");

printf("*******Welcome to NK.NR BANK ATM*******\n\n");

printf("\n\n\n");

float balance;

balance =account();

int choose;

int option;

bool again = true;

while (again) {

mm();

printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

printf("Your Selection:\t");

scanf("%d", &option);

switch (option) {

case 1:

cb(balance);

break;

case 2:

balance = md(balance);

break;

case 3:

balance = mw(balance);

break;

case 4:

menuExit();

return 0;

default:

errorMessage();

printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

printf("Would you like to do another transaction:\n");

printf("< 1 > Yes\n");

printf("< 2 > No\n");

scanf("%d", &choose);

if (choose == 2) {

again = false;

menuExit();

}

}

return 0;

}
}

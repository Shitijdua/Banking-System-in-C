//
//  main.c
//  Banking System
//
//  Created by Shitij Dua on 07/03/21.
//
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX_LIMIT 20
int choice,i;
int accountNo;
int count = 0;
char temp;
float deposits;

typedef struct customer {
    char customerName[100];
    double phnNo;
    double accountBalance;
    double loan;
    int accountNumber;
    float deposit;
}cust;

 cust people[100];

float firstDeposit()
{
    
    printf("\nEnter an amount you want to deposit\n");
    scanf("%f",&deposits);
    
    return deposits;

}

void openAnAccount() {
    printf("\nEnter your name\n");
    scanf("%c",&temp);
    scanf("%[^\n]" ,people[count].customerName);
    
    printf("\nEnter your Phone Number\n");
    scanf("%lf", &people[count].phnNo);
    
    printf("\nDeposit an amount\n");
    people[count].accountBalance = firstDeposit();
    
    printf("\nYour Account Balance is: %lf\n", people[count].accountBalance);
    
     int psedoAccountNo = rand();
   people[count].accountNumber = round(psedoAccountNo);
    
   
   /* for (i =0; i<=count;i++)
       {
           
       } */
       //printf("\nAccount Number is:%d\n", people[i].accountNumber);
    printf("\nAccount created successfully \n");
    printf("\nYour Account Details are: \n");
    printf("\nName : %s \n",people[count].customerName);
    printf("\nPhone Number: %lf \n",(double)people[count].phnNo);
    printf("\nAccount Balance : %lf \n",people[count].accountBalance);
    printf("\nAccount Number : %d \n",people[count].accountNumber);

  //  count++;
}


void makeADeposit()
{
    double depositAmount;
    printf("\nEnter the amount you want to deposit : \n");
    scanf("%lf", &depositAmount);
    people[count].accountBalance = people[count].accountBalance + depositAmount;
    
    printf("\nAccount Balance : %lf \n",people[count].accountBalance);

}

void makeAWithdrawal()
{
    double withdrawalAmount;
    printf("\nEnter the amount you want to withdraw : \n");
    scanf("%lf", &withdrawalAmount);
    people[count].accountBalance = people[count].accountBalance - withdrawalAmount;
    printf("\nAccount Balance : %lf \n",people[count].accountBalance);

}

void loan()
{
    char reasonForLoan[60];
    double loanAmount;
    double phoneNumber;
    
    printf("\nWhy do you want a loan \n");
    scanf("%c",&temp);
    scanf("%s", reasonForLoan);
    
    printf("\n How much loan do you need? \n");
    scanf("%lf", &loanAmount);
    
    printf("\nLeave your phone no. we will contact you soon...\n");
    scanf("%lf", &phoneNumber);
}

void applyForCreditCard()
{
    char occupation[50];
   char email[50];
    
    printf("\nProcessing Credit Card\n");

    printf("\n Welcome to Shitij's Bank\n");
    printf("\nEnter your name\n");
    scanf("%c",&temp);
    scanf("%[^\n]" ,people[count].customerName);
    
    printf("\nEnter your Phone Number\n");
    scanf("%lf", &people[count].phnNo);
    
    printf("\nEnter your Occupation\n");
    scanf("%s", occupation);
    
    printf("\nEnter your E-Mail ID\n");
    scanf("%s", email);
   
    printf("\nThank You for your time, we will contact you soon...\n");

    
    
    
}

void applyForDebitCard()
{
    char occupation[50];
   char email[50];
    
    printf("\nProcessing Debit Card\n");

    printf("\n Welcome to Shitij's Bank\n");
    printf("\nEnter your name\n");
    scanf("%c",&temp);
    scanf("%[^\n]" ,people[count].customerName);
    
    printf("\nEnter your Phone Number\n");
    scanf("%lf", &people[count].phnNo);
    
    printf("\nEnter your Occupation\n");
    scanf("%s", occupation);
    
    printf("\nEnter your E-Mail ID\n");
    scanf("%s", email);
   
    printf("\nThank You for your time, we will contact you soon...\n");
}


int main(int argc, const char * argv[]) {
do
    {
    printf("\nWelcome to Shitij Bank of India (SBI)\n");
    printf("\nHow can we help you?\n");
    printf("\n1. Open an account\n");
    printf("\n2. Make a deposit\n");
    printf("\n3. Make a Withdrawal\n");
    printf("\n4. Take out a loan\n");
    printf("\n5. Apply for credit card\n");
    printf("\n6. Apply for debit card\n");
    printf("\n7. Exit System\n");



    printf("\nEnter your choice\n");
    scanf("%d", &choice);
    
    switch (choice) {
            
        case 1:openAnAccount();
            break;
  
        case 2: makeADeposit();
            break;
            
        case 3: makeAWithdrawal();
            break;
 
        case 4: loan();
            break;
    
        case 5: applyForCreditCard();
            break;
            
        case 6: applyForDebitCard();
            break;

        case 7: exit(-1);
            break;
      
            
        default: printf("\nWrong choice\n");
        
    }
  }while(choice!= 7);
    return 0;
}

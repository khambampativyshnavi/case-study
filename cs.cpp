#include<stdio.h>
int main()
{
   int choice;
   float balance,withdrawal,deposit;
   printf("enter your current account balance:");
   scanf("%f",&balance)	;
   printf("enter(1 for balance inquiry,2 for cash withdrawal,3 for cash deposit):");
   scanf("%d",&choice);
   if(choice == 1)
   {
   	printf("Current balance: %.2f",balance);
   }
   else if(choice == 2)
   {
   	printf("Withdrawal amount:");
   	scanf("%f",&withdrawal);
   	if(withdrawal<=balance)
   	{
   		balance -= withdrawal;
   		printf("Transaction successful\n");
   		printf("Remaining balance: %.2f\n",balance);
	   }
	   else
	   {
	   	printf("Insufficient balance\n");
	   }
   }
   else if(choice == 3)
   {
   	printf("Deposit amount:");
   	scanf("%f",&deposit);
   	balance += deposit;
   	printf("Deposit successful\n");
   	printf("Updated balance: %.2f\n",balance);
}
else
{
	printf("Invalid option\n");
}
}





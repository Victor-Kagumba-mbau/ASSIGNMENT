/*
//program to test if a customer qualifies for a loan
Author: Victor Kagumba
Reg no:CT101/G/23670/24
Date:01/10/2024
*/
#include <stdio.h>
int main(){
	int Age;
	float Annual_income;
    //prompt the user to enter Age
    printf("Enter your Age: ");
    scanf("%d", &Age);
    //prompt the user to enter Annual_income
    printf("Enter your Annual_income: ");
    scanf("%f", &Annual_income);
    if(Age>=21&&Annual_income >= 21000)
	printf("Congratulations you qualify for a loan");
	else
	{
	printf("Unfortunately we are unable to offer you a loan at this time");	
	}	 
	
	return 0;
}
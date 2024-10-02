/*
//Program to calculate compound interest
Author:
Reg no:
Date:
*/
#include<stdio.h>
#include <math.h>
int main(){
	float Amount,Principle,Rate,Time,N;
	//prompt the user to enter Amount
	printf("Enter the Amount:");
	scanf("%f",&Amount);
	//prompt the user to enter principle
	printf("Enter The Principle:");
	scanf("%f",&Principle);
	//prompt the user to enter rate
	printf("Enter The Rate:");
	scanf("%f",&Rate);
	//prompt the user to enter time
	printf("Enter the Time:");
	scanf("%f",&Time);
	//prompt the user to enter N
	printf("Enter N:");
	scanf("%f",&N);
	//calculate the compound interest
	float compound_interest=Principle*pow((1+(Rate/(100*N))),N*Time)-Principle;
	printf("The Compound_interest is:%f", compound_interest);
	return 0;
}
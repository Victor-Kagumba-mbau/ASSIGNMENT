/*
//program to calculate simple interest
Author: Victor Kagumba
Reg no: CT101/G/23670/24
date: 01/10/2024
*/
#include <stdio.h>
#include<math.h>
int main(){
	float Principle,Time,Rate,Interest;
	//prompt the user to enter principle
	printf("Enter The Principle:");
	scanf("%f",&Principle);
	//prompt the user to enter time
	printf("Enter The Time:");
	scanf("%f",&Time);
	//prompt the user to enter rate
	printf("Enter The Rate:");
	scanf("%f",&Rate);
	//calculate the interest
   Interest=Principle*Time*Rate/100;
	printf("The interest is:%f",Interest);
	
	return 0;
}
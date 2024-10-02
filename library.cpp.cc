/*
//program to calculate library the fine for overdue library books
Author: Victor Kagumba
Reg no: CT101/G/23670/24
date: 01/10/2024
*/
#include <stdio.h>
#include <math.h>
int main(){
	int BookID,DueDate,ReturnDate,DaysOverdue,fineRate,FineAmount;
	//prompt the user to enter BookID
	printf("Enter the BookID: ");
	scanf("%d", &BookID);
	//prompt the user to enter DueDate
	printf("Enter the DueDate: ");
	scanf("%d", &DueDate);
	//prompt the user to enter ReturnDate
	printf("Enter the ReturnDate: ");
	scanf("%d", &ReturnDate);
	//calculate the DaysOverdue
    DaysOverdue = ReturnDate - DueDate;
    printf("The DaysOverdue is %d: \n", DaysOverdue);
    if (DaysOverdue <=7) fineRate=20; else if(DaysOverdue <15) fineRate=50; else fineRate=100 ;
    printf(" The fineRate is %d : \n", fineRate);
    //calculate the FineAmount
    FineAmount=DaysOverdue*fineRate;
    printf("\nThe BookID is %d: \n", BookID);
    printf("The DueDate is %d: \n", DueDate);
    printf("The ReturnDate is %d \n: ", ReturnDate);
    printf("The DaysOverdue is %d \n: ", DaysOverdue );
	printf("The fineRate is %d: \n", fineRate );
	printf("The FineAmount is %d: \n", FineAmount);
	
	return 0;
}
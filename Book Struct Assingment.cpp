/*
// Program to define a structure named book
Author: Victor Kagumba
Reg NO: CT101/G/23670/24
Date: 23/10/24
*/
#include <stdio.h>
#include <string.h>
struct book{
	char title[31];
	char author[31];
	int publication_year;
	char isbn[14];
	float price;
}Book;
int main(){
	strcpy(Book.title, "Introduction To C Programming");
	strcpy(Book.author,"John Smith");
    Book.publication_year=2022;
    strcpy(Book.isbn, "9780131103627");
    Book.price=49.99;
    
	printf("Title: %s \n", Book.title);
	printf("Author: %s \n", Book.author);
	printf("Publication Year: %d \n", Book.publication_year);
	printf("ISBN: %s \n", Book.isbn);
	printf("Price: %2f \n", Book.price);
	
	return 0;
}
/*
Write a menu driven program that depicts the working of a library. The menu
options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit
Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag nicating whether the book is issued or not.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LIMIT	20

int n;

struct library {
	int accession_number;
	char title[MAX_LIMIT];
	char author[MAX_LIMIT];
	int price;
	int flag;
};

void add_book_info();
void display_book_info();
void list_author_books();
void list_title();
void list_count_books();
void list_books_order();

struct library **l = NULL;

int main()
{
	int choice, status=0;

	while(status != 1)
	{
		printf("\nEnter your choice\n");
		printf("1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n");
		printf("5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Add Book information\n");
				add_book_info();
				break;
			case 2:
				display_book_info();
				break;
			case 3:
				list_author_books();
				break;
			case 4:
				list_title();
				break;
			case 5:
				list_count_books();
				break;
			case 6:
				list_books_order();
				break;
			case 7:
				status=1;
				printf("Thank you Visit again!\n");
				break;
			default:
				printf("Input in not valid!\n");
		}
	}

	return 0;
}

void add_book_info()
{
	l = (struct library **)realloc(l, (n+1) * sizeof(struct library *));
	
	if(l == NULL)
	{
		printf("Overflow\n");
	}

	l[n] = (struct library *)malloc(sizeof(struct library));


	printf("Enter Accession Number: ");
	scanf("%d",&l[n]->accession_number);

	char temp=getchar();
	printf("Enter book title: ");
	fgets(l[n]->title, MAX_LIMIT, stdin);

	printf("Enter the author: ");
	fgets(l[n]->author, MAX_LIMIT, stdin);

	printf("Enter the price of the book: ");
	scanf("%d",&l[n]->price);

	printf("Enter 1 for book issued, 0 for book not issued: ");
	scanf("%d",&l[n]->flag);

	n=n+1;
	printf("No of books in library is: %d\n",n); 
}

void display_book_info()
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Book %d\n",i+1);
		printf("Accession Number: %d\n",l[i]->accession_number);
		printf("Title of book: %s",l[i]->title);
		printf("Author of the book: %s",l[i]->author);
		printf("Price of book is: %d\n",l[i]->price);
		printf("Status of book issued(1)/not issued(0): %d\n",l[i]->flag);
		printf("\n");
	}
}

void list_author_books()
{
	char user_in[MAX_LIMIT];
	int i;

	char temp=getchar();
	printf("Enter the author name to list: ");
	fgets(user_in, MAX_LIMIT, stdin);

	for(i=0; i<n; i++)
	{
		if(strstr(user_in, l[i]->author))
		{
			printf("%s",l[i]->title);
		}
	}
}

void list_title()
{
	int num, i;

	printf("Enter the accession number to get book title: \n");
	scanf("%d",&num);

	for(i=0; i<n; i++)
	{
		if(num == l[i]->accession_number)
		{
			printf("%s",l[i]->title);
		}
	}
}

void list_count_books()
{
	printf("Total number of books in library are: %d\n",n);
}

void list_books_order()
{
	int i,j, acc,temp=0;
	char str[MAX_LIMIT];

	for(j=0;j<n;j++)
	{

		for(i=j; i<n; i++)
		{
			

			if(l[j]->accession_number > l[i]->accession_number)
				{
				temp = l[j]->accession_number;
				l[j]->accession_number = l[i]->accession_number;
				l[i]->accession_number = temp;

				strcpy(str, l[j]->title);
				strcpy(l[j]->title, l[i]->title);
				strcpy(l[i]->title, str);

				memset(str , 0, MAX_LIMIT);

				strcpy(str, l[j]->author);
				strcpy(l[j]->author, l[i]->author);
				strcpy(l[i]->author, str);

				temp=0;
				temp = l[j]->price;
				l[j]->price = l[i]->price;
				l[i]->price = temp;

				temp=0;
				temp = l[j]->flag;
				l[j]->flag = l[i]->flag;
				l[i]->flag = temp;
			}
		}
	}


	for(i=0; i<n; i++)
	{
		printf("Book %d\n",i+1);
		printf("Accession Number: %d\n",l[i]->accession_number);
		printf("Title of book: %s",l[i]->title);
		printf("Author of the book: %s",l[i]->author);
		printf("Price of book is: %d\n",l[i]->price);
		printf("Status of book issued(1)/not issued(0): %d\n",l[i]->flag);
		printf("\n");
	}

}

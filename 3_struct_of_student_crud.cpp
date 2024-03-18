/*
wap to create struct name as 'Library' this structure have four variable id, bookName, authName, price
Note: 1) perform all operation on structure
	  2) perform array of references concept with structure.


  1] Add 5 book informations
  2] Display all books information
  3] update book information
	 1.id wise
	 2.name wise
	 3.price wise
	 4.author wise
 4] Delete book information
	 1.id wise
	 2.name wise
	 3.price wise
	 4.author wise
 5] count all books
 6]sort book details.

*/

#include<stdio.h>
#include<string.h>

void inputBooks();
void disRecord();
void updateBookInfo();
void deletebooKInfo();

struct library
{
	int id, price;
	char authName[15], bookName[15];
};

int id, price;
char bookName[15], authName[15];
int i, j, count;
struct library l[3];

void main() {
	int z,choice;
	
	do {
		printf("\nEnter 1.add book 2.display 3.update");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:inputBooks();
			break;
		case 2:
			disRecord();
			break;

		case 3:
			updateBookInfo();
			break;

		default:
			printf("\nInvalid choice.");
		}
		printf("\nDo you want to continue.\tpress 1 : ");
		scanf("%d", &z);


	} while (z == 1);

}

void inputBooks() {


	for (i = 0; i < 2; i++)
	{
		printf("\nEnter the book id ,name, price ,author");
		scanf("%d%s%d%s", &l[i].id, l[i].bookName, &l[i].price, l[i].authName);
	}

}

void disRecord() 
{
	printf("\nRecords are: ");
	for (i = 0; i < 2; i++) {
		printf("\n%d   %s        %d      %s", l[i].id, l[i].bookName, l[i].price, l[i].authName);
	}
}

void updateBookInfo() 
{
	int input;
	int id, price;
	char bookName[15], authName[15];
	int sBookId,sBookPrice;
	int nid, nprice;
	char nauthName[15], nbookName[15],sBookName[15],sAuthName[15];
	printf("\nEnter the 1 for update records through book id\nEnter the 2 for update records through book name");
	printf("\nEnter the 3 for update records through author name\nEnter the 4 for update records through book price \n");
	scanf("%d", &input);
	
	switch (input)
	{
	 case 1:
		printf("\nEnter the searchBook id : ");
		scanf("%d", &sBookId);
		count = 0;
		for (i = 0; i < 2; i++)
		{
			if (l[i].id == sBookId)
			{
				printf("\nEnter the new id,bookName, authorName and price  ");
				scanf("%d%s%s%d", &nid, &nbookName, &nauthName, &nprice);

				l[i].id = nid;
				strcpy(l[i].bookName, nbookName);
				strcpy(l[i].authName, nauthName);
				l[i].price = nprice;
				count++;
				printf("\nUpdated ");
			//	printf("\nDisplay after update");
				//disRecord();
			}
		  }
		if (count == 0)
			printf("\nInvalid book id or book id not founf");
		break;

	case 2:
		printf("\nEnter the Book Name : ");
		scanf("%s", &sBookName);
		int count = 0;
		for (i = 0; i < 2; i++)
		{
			if (strcmp(l[i].bookName ,sBookName)==0)
			{
				printf("\nEnter the new id,bookName, authorName and price  ");
				scanf("%d%s%s%d", &nid, nbookName, nauthName, &nprice);

				l[i].id = nid;
				strcpy(l[i].authName, nauthName);
				strcpy(l[i].bookName,nbookName);
				l[i].price = nprice;
				printf("\nUpdated ");
				printf("\nDisplay after update");
				disRecord();
				count++;
			}
		}
		    if (count == 0)
			printf("\nbook name not fount! ");
		    break;

		case 3:
		printf("\nEnter the author  Name : ");
		scanf("%s", sAuthName);
		count = 0;
		for (i = 0; i < 2; i++)
		{
			if (strcmp(l[i].authName ,sAuthName)==0)
			{
				printf("\nEnter the new id,bookName, authorName and price  ");
				scanf("%d%s%s%d", &nid, nbookName, nauthName, &nprice);

				l[i].id = nid;
				strcpy(l[i].authName, nauthName);
				strcpy(l[i].bookName,nbookName);
				l[i].price = nprice;
				printf("\nUpdated ");
				printf("\nDisplay after update");
				disRecord();//
				count++;

			}
		}
		if (count == 0)
			printf("\nbook auhor name not fount! ");
		break;

	default:
		printf("\nPlease enter correct choice");
		break;
	}

}

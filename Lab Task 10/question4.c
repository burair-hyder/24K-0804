# include <stdio.h>
# include <string.h>

struct book{
	char title[20];
	char author[20];
	int publication_year;
	float price;
}books[5];
void display(struct book books[],int size);
void searchbook(struct book books[],int size,char name[]);
void searchauthor(struct book books[],int size,char authorname[]);
int main(void){
	int size=5;
	char name[20];
	char authorname[20];
	for ( int i=0;i<size;i++){
		printf("Enter Book Title:");
		scanf("%s",books[i].title);
		
		printf("Enter Author Name:");
		scanf("%s",books[i].author);
		
		printf("Enter Publication Year:");
		scanf("%d",&books[i].publication_year);
		
		printf("Enter Book Price:");
		scanf("%f",&books[i].price);
	}
	
	printf("Enter Book to be Searched :");
	scanf("%s",name);
	
	printf("Enter Author to be Searched:");
	scanf("%s",authorname);
	
	display(books,size);
	searchbook(books,size,name);
	searchauthor(books,size,authorname);
}

void display( struct book books[],int size){
	for ( int i=0;i<size;i++){
		printf("Book Number: %d ",i+1);
		printf(" Book Name: %s ",books[i].title);
		printf(" Book Author: %s ",books[i].author);
		printf(" Publication Year :%d ",books[i].publication_year);
		printf(" Price : %d ",books[i].price);
		printf("\n");
	}
}

void searchbook(struct book book[],int size,char name[]){
	int check;
	for ( int i=0;i<size;i++){
		check =strcmp(book[i].title,name);
		if (check ==0){
		printf(" Book Number: %d ",i+1);
		printf(" Book Name: %s ",books[i].title);
		printf(" Book Author: %s ",books[i].author);
		printf(" Publication Year :%d ",book[i].publication_year);
		printf(" Price : %d ",books[i].price);
		printf("\n");
		}
	}
}


void searchauthor(struct book books[],int size,char authorname[]){
	int check;
		for ( int i=0;i<size;i++){
		check =strcmp(books[i].author,authorname);
		if (check ==0){
		printf(" Book Number: %d ",i+1);
		printf(" Book Name: %s ",books[i].title);
		printf(" Book Author: %s ",books[i].author);
		printf(" Publication Year :%d ",books[i].publication_year);
		printf(" Price : %d ",books[i].price);
		printf("\n");
		}
	}
}

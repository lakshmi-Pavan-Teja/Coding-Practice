#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next,*Prev;
}*S,*L,*C,*P;

void insertNode(){
	struct Node *nn;
	nn = (struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter a value : ");
	scanf("%d",&nn->Data);
	nn->Next = NULL;
	nn->Prev = NULL;
	if(S==NULL){
		S = L = nn;
	}
	else{
		nn->Next = S;
		S->Prev = nn;
		S=nn;
	}
	printf("\n Node is Inserted..");
	getch();
}
void removeNode(){
	getch();
}
void display(){
	int n;
	if(S == NULL){
		printf("\n Display linked list empty!!!");
	}
	else{
		printf("\n select display order : ");
		printf("\n 1. Fwd");
		printf("\n 2. Rev");
		printf("\n Enter your choice :");
		scanf("%d",&n);
		switch(n){
			case 1: printf("\n Values in Doubly Linked List : \n");
					for(C=S;C!=NULL;C=C->Next){
						//printf("%d %u %u\n",C->Data,C->Prev,C->Next);
						printf("%d ",C->Data);
					}
					getch();
			break;
			case 2: printf("\n Values in Doubly Linked List : \n");
					for(C=L;C!=NULL;C=C->Prev){
						printf("%d ",C->Data);
					}
					getch();
			break;
			
			
		}
	}
	getch();
}

int main(){
	int x;
	S= L = C= P = NULL;
	while(1){
		system("cls");
		printf("\n Doubly Linked List Operations : ");
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n Enter your choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: insertNode();
			break;
			case 2: removeNode();
			break;
			case 3: display();
			break;
			case 4: printf("\n Program is Terminating...");
			getch();
			break;
		}
	}
}

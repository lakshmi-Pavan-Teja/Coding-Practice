#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next;
}*S,*L,*C,*P;
// S- Start L-Last C - Current P - Previous Node

void insertNode(){
	// 1. Allocate the memory for new node
	// 2. Read the data of node
	// 3. point the nn address to Null by default
	// 4. Check the condition for Single node
	// 5. If not single node then insert at end of the single linked list
	struct Node *nn;
	nn = (struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter a value : ");
	scanf("%d",&nn->Data);
	nn->Next = NULL;
	if(S==NULL){
		S = L = nn;
	}
	else{
		if(nn->Data <= S->Data){
			nn->Next = S;
			S = nn;
		}
		else if(nn->Data >= L->Data){
			L->Next = nn;
			L = nn;
		}
		else{
			for(C=S;C->Data<nn->Data;P=C,C=C->Next);
			nn->Next = C;
			P->Next = nn;
		}
	}
	printf("\n Node is inserted...");
	getch();
}
void deleteNode(){
	printf("\n Delete Node ");
	getch();
}
void display(){
	if(S==NULL){
		printf("\n Single Linked List Empty");
	}
	else{
		printf("\n Single Linked List : \n");
		for(C=S;C!=NULL;C=C->Next){
			printf("%d ",C->Data);
			//printf("%d %u\n",C->Data,C->Next);
		}
	}
	getch();
}
int main(){
	S = L = C = P = NULL;
	int x;
	while(1){
		system("cls");//online compiler will not supports for this
		printf("Singly Linked List : ");
		printf("\n 1. Insert ");
		printf("\n 2. Delete ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter your choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: insertNode();
			break;
			case 2: deleteNode();
			break;
			case 3: display();
			break;
			case 4: printf("\n Program is Terminating...");
			getch();//online compiler will not supports for this
			return 0;
			break;
		}
	}
	return 0; 
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next;
}*S,*L,*C,*P;
// S- Start L-Last C - Current P - Previous Node

void insertItem(){
	struct Node *nn;
	nn = (struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter a value : ");
	scanf("%d",&nn->Data);
	nn->Next = NULL;
	if(S==NULL){
		S = nn;
	}
	else{
		nn->Next = S;
		S = nn;
	}
	printf("\n Value is pushed to the stack");
	getch();
}
void deleteItem(){
	if(S==NULL){
		printf("\nstack is empty\nstack is underflow");
	}
	else{
		C=S;
		S=S->Next;
		C->Next = NULL;
		C = NULL;
	}
	printf("\n Value is removed from the stack");
	getch();
}
void display(){
	if(S==NULL){
		printf("\n Stack is Empty\n stack is underflow");
	}
	else{
		for(C=S;C!=NULL;C=C->Next){
			printf("%d ",C->Data);
		}
	}
	getch();
}
int main(){
	int x;
	S = L = C = P = NULL;
	while(1){
		system("cls");//online compiler will not supports for this
		printf("Stack Operations : ");
		printf("\n 1. PUSH ");
		printf("\n 2. POP ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter your choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: insertItem();
			break;
			case 2: deleteItem();
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

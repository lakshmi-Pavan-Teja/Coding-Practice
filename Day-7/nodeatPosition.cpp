#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int Data;
	struct Node *Next;
}*S,*L,*C,*P;
// S- Start L-Last C - Current P - Previous Node
int lenLinkedList(){
	int cnt=0;
	for(C=S;C!=NULL;C=C->Next){
		cnt++;
	}
	return cnt;
}
void insertNode(){
	int pos,lenofList,i=0;
	struct Node *nn;
	nn = (struct Node *)malloc(sizeof(struct Node));
	printf("\n Enter a value : ");
	scanf("%d",&nn->Data);
	nn->Next = NULL;
	if(S==NULL){
		S = L = nn;
	}
	else{
		printf("\n Enter a Position : ");
		scanf("%d",&pos);
		lenofList = lenLinkedList();
		if(pos<=lenofList){
			if(pos == 1){
				nn->Next = S;
		        S = nn;
			}
			else{
				for(C=S;i<=pos;i++,P=C,C=C->Next);
				nn->Next = C;
				P->Next = nn;
			}
			printf("\n Node is Inserted..");
		}
		else{
			printf("\n Not Possible to Insert");
			return;
		}
	}
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

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int a[5],top = -1,x,i;
	while(1){
		system("cls");
		printf("\n Stack Operation : ");
		printf("\n 1. PUSH ");//Insert
		printf("\n 2. POP ");//Delete
		printf("\n 3. PEEK ");// TOP Value of Stack
		printf("\n 4. Display ");
		printf("\n 5. Exit ");
		scanf("%d",&x);
		switch(x){
			case 1: if(top < 4)
			{
				top++;
				printf("\n Enter the value to insert : ");
				scanf("%d",&a[top]);
				printf("\n Valu is inserted...");
				getch();
			}
			else{
				printf("\n Stack is Full\nStack is overflow");
				getch();
			}
			break;
			case 2: if(top !=-1){
				a[top] = 0;
				top--;
				printf("\n Value is removed.. ");
				getch();
			}
			else{
				printf("\nstack is empty\nstack is underflow");
				getch();
			}
			break;
			case 3: if(top!=-1){
				printf("\n PEEK Value of stack is : ");
				printf("%d",a[top]);
				getch();
			}
			else{
				printf("\nstack is empty\nstack is underflow");
				getch();
			}
			break;
			case 4:if(top!=-1){
				printf("\n Value of stack is : \n ");
				for(i=0;i<=top;i++){
					printf("%d",a[i]);
				}
				getch();
			}
			else{
				printf("\nstack is empty\nstack is underflow");
				getch();
			}
			break;
			case 5:printf("\n Program is terminating..");
			getch();
			return 0;
			break;
		}
		
	}
	return 0;
}

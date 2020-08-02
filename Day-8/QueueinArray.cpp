#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	//front - F Rear- R
	int a[5],F = -1,R = -1,x,i;
	while(1)
	{
		system("cls");
		printf("\n Queue Operations : ");
		printf("\n 1. Insert(Enqueue) ");
		printf("\n 2. Remove(Dequeue) ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter your choice : ");
		scanf("%d",&x);
		switch(x){
			case 1: if(R<4){
				R++;
				if(R == 0){
					F = 0;
				}
				printf("\n Enter a value : ");
				scanf("%d",&a[R]);
				printf("\n value is inserted..");
				getch();
			}
			else{
				printf("\n Queue is Full");
				getch();
			}
			break;
			case 2: if(F!=-1&&R!=-1){
				if(F == R){
					a[F] =-1;
					F = -1;
					R = -1;
					printf("\n value is removed");
					getch();
				}
				else{
					for(i=F+1;i<=R;i++){
						if(i==R){
							a[i-1] = a[i];
							a[i] = -1;
							R--;
						}
						else{
							a[i-1] = a[i];
						}
					}
					printf("\n Value is removed..");
					getch();
				}
			}
				else{
					printf("\n Queue is Empty");
					getch();
				}
				break;
				case 3: if(F!= -1 && R != -1){
					printf("\n Queue values is : \n");
					for(i=F;i<=R;i++){
						printf("%d",a[i]);
					}
					getch();
				}
				else{
					printf("\n Queue is empty");
					getch();
				}
				break;
				case 4:
					printf("\n Program is terminating..");
					getch();
					return 0;
					break;
					
			}
		}
		
	return 0;
}

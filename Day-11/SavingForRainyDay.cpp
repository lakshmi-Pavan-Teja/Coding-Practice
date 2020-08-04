#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float m,p,r;
 double x,b;
 int c;
 scanf("%f%f%f",&p,&m,&r);
 b=1200+r*(m-1);
 x=p*m*1200/b;
 c=(int)x;
 printf("the amount to be deposited is :%d\n",c);
 getch();
}

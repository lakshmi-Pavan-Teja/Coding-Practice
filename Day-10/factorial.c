#include<stdio.h>

int factorial(int n)
{
	int i,count = 1;
	for(i=2;i<=n;i++)
	count *= i;
	return count;
}
int cf(int n,int i)
{
	return factorial(n)/(factorial(n-i)*factorial(i));
}
int main()
{
	int n,k,i,j,res=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<=k;i+=2)
	res += cf(n,i);
	printf("%d",res);
	return 0;
}

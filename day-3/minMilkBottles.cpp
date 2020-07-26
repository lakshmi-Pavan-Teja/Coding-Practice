# Problem-3:
#include<stdio.h>
int main()
{
	int n,i,j=0,k,a[10],b[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(j<n)
	{
		while(a[j]!=0)
		{
			if(a[j]>=10)
			{
				a[j]=a[j]-10;
				b[j]++;
			}
			else if(a[j]>=7)
			{
				a[j]=a[j]-7;
				b[j]++;
			}
			else if(a[j]>=5)
			{
				a[j]=a[j]-5;
				b[j]++;
			}
			else if(a[j]>=1)
			{
				a[j]=a[j]-1;
				b[j]++;
			}
		}
		j++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
	}
}

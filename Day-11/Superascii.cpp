#include<stdio.h>
#include<string.h>
int main()
{
	int b[26],c[26],i,j,k,r=0;
	char a[100];
	for(i=1;i<27;i++)
	{
		b[i-1]=i;
		c[i-1]=0;
	}
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		k=a[i]-97;
		c[k]++;
	}
	for(i=0;i<26;i++)
	{
		if(c[i]!=0)
		{
			while(c[i]!=b[i])
			{
				if(c[i]>b[i])
				{
					c[i]--;
					r=r+3;
				}
				else if(c[i]<b[i])
				{
					c[i]++;
					r=r+2;
				}
			}
		}
	}
	printf("%d",r);
}


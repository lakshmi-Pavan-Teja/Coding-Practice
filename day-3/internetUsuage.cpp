# problem-2
#include<stdio.h>
int main()
{
	int tc,n,k,t,d,i,charge;
	scanf("%d",&tc);
	while(tc--)
	{
		charge=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&t,&d);
			if(k>t)
			{
				k=k-t;
			}
			else
			{
				charge=charge+(t-k)*d;
				k=0;
			}
		}
		printf("%d\n",charge);
	}
	return 0;
}

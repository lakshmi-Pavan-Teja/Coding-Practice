#include <stdio.h>
int main() {
 int n,m[10],t[10],d[10],q,a,i,sum=0;
 scanf("%d",&a);
 for(q=1;q<=a;q++)
 {
 scanf("%d",&n);
 for(i=0;i<n;i++)
     scanf("%d %d %d",&m[i],&t[i],&d[i]);
     for(i=0;i<n-1;i++)
     {
             if(d[i]==d[i+1])
             {
                 if(t[i]<t[i+1])
                 t[i]=0;
                 else
                 t[i+1]=0;
             }
     }
    for(i=0;i<n;i++)
    {
        sum=sum+t[i];
    }
     printf("%d",sum);
 }
 return 0;
}


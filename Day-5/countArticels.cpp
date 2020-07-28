#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000],ch[1000];int i=0,k=0,j=0,count=0;
	scanf("%[^\n]s",s);
	while(i<strlen(s)){
		if(s[i]==32){
			i +=1;		
		}
		else{
			k=i;
			j=0;
			while(s[k] != 32){
				ch[j] = s[k];
				k += 1;
				j += 1;
			}
			i = k;
			if(strcmp(ch,"a") == 0 || strcmp(ch,"an") == 0 || strcmp(ch,"the") == 0){
				count++;
			}
			memset(ch,0,strlen(ch));
		}
	}
	printf("%d",count);
	return 0;
}

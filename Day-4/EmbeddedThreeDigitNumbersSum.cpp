#include<stdio.h>
#include<string.h>
int digitCnt(int n){
	int cnt = 0;
	while(n!=0){
		cnt++;
		n/=10;
	}
	return cnt;
}
int main(){
	int i,output=0,k,number=0;
	char str[200];
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		while(1){
			if(str[i] >= 48 && str[i] <= 57){
				k = str[i] - 48;
				number = number*10 + k;
				i++;
			}
			else{
				break;
			}
		}
		if(digitCnt(number) == 3){
			output = output + number;
		}
		number = 0;  
	}
	printf("%d",output);
	return 0;
}

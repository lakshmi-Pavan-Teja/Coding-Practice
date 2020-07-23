#include<iostream>
using namespace std;
long sumofDigits(int n){
	int sum = 0;
	while(n > 0){
		int r = n%10;
		sum = sum+r;
		n = n/10;
	}
	return sum;
}
long maxNum(int a,int b){
	long x = sumofDigits(a);
	long y = sumofDigits(b);
	return x == y ? a : x > y ? a : b;
}
int main(){
	string s;
	cin>>s;
	string x;
	x=int(s[0])-1;
	for(int i = 1; i < s.length(); i++){
		x=x+"9";
	}
	long a= stol(s);
	long b= stol(x);
	cout << maxNum(a,b);
}

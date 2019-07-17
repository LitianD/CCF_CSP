#include<bits/stdc++.h>
using namespace std;
int main(){
	char n[10]={0};

	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5],&n[6],&n[7],&n[8],&n[9]);
	int sum=0;
	for(int i =1;i<=9;i++){
		int temp = n[i-1]-'0';
			sum = sum+ i*temp;
	}
	int re = sum%11;

	if((re<=9&&re==n[9])||(re==10&&n[9]=='X')){
		cout<<"Right";
	}
	else{
		if(re==10)
			cout<<n[0]<<"-"<<n[1]<<n[2]<<n[3]<<"-"<<n[4]<<n[5]<<n[6]<<n[7]<<n[8]<<"-"<<'X';
		else
			cout<<n[0]<<"-"<<n[1]<<n[2]<<n[3]<<"-"<<n[4]<<n[5]<<n[6]<<n[7]<<n[8]<<"-"<<re+'0';
	}
	
	
	return 0;
}

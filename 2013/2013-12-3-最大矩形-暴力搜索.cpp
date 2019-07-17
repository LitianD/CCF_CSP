#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i =0;i<n;i++)
		scanf("%d",&A[i]);
	int res=0;
	for(int i =0;i<n;i++){
		int minHeight = A[i];
		for(int j=i;j<n;j++){
			minHeight = min(A[j],minHeight);
			res = max(res,minHeight*(j-i+1));
		}
	}
	printf("%d",res);
	
	return 0;
} 

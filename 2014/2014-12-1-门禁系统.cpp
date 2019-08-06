# include <bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> m;
	int n;
	
	scanf("%d",&n);
	
	int num[n];
	int re[n]={0};
	int temp;
	
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		m[temp]++;
		re[i]=m[temp];
	}
	for(int i=0;i<n-1;i++){
		printf("%d ",re[i]);
	}
	 printf("%d",re[n-1]);
	
	
	return 0;
} 

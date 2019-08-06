# include<bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int num[n+1];
	for(int i =0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	int re=0;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(num[i]-num[j])==1)
			re++;
		}
	}
	
	printf("%d",re);
	
	return 0;
} 

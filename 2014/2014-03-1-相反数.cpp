#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	int count = 0;
	
	scanf("%d",&N);
	
	int s1[N];
	int s2[N]={0};
	
	for(int i=0;i<N;i++){
		scanf("%d",&s1[i]);
	} 
	
	for(int i=0;i<N;i++){
		if(s2[i]==0){
			for(int j=i+1;j<N;j++){
				if(s2[j]==0){
					if(s1[i]+s1[j]==0){
						count++;
						s2[i]=-1;
						s2[j]=-1;
						break;
					}	
				}
			}
		}
	}
	
	printf("%d",count);
	
	return 0;
} 

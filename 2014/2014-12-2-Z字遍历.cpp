#include<bits/stdc++.h>

using namespace std;

int n;

int dir[2][2]={{1.-1},{-1,1}};

bool ifIn(int x,int y){
	if(x==n-1||y==n-1)
		return true;
	return false;
}

int main(){
	int flag=0;
	int x_now=0,y_now=0;
	int step=0;
	scanf("%d",&n);
	
	int graph[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&graph[i][j]); 
	}
	while(true){
		step++;
		printf("%d",graph[x_now][y_now]);
		if(ifIn(x_now,y_now)){
			if(flag==0){
				flag=1;
				if(step<=n){
					
					y_now=y_now+1;
				}
				else{
					x_now=x_now+1;
				}
			}
			else{
				flag=0;
				if(step<=n){
					x_now=x_now+1;
					
				}
				else{
					y_now=y_now+1;
				}
			}
		}
		else{
			if(flag==0){
				x_now=x_now+1;
				y_now = y_now-1; 
			}
			else{
				x_now = x_now-1;
				y_now =y_now+1; 
			}
			
		}
		
		if(x_now==n-1&&y_now==n-1)
			break;
	}
	printf("%d",graph[n-1][n-1]);
	
	
	return 0;
}

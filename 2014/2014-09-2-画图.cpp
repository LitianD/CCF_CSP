# include<bits/stdc++.h> 

using namespace std;

int main(){
	int pic[100][100]={0} ;
	int n;
	scanf("%d",&n);
	
	int x1,y1,x2,y2;
	int re=0;
	
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		
		for(int k=x1;k<x2;k++){
			
			for(int m=y1;m<y2;m++)
			
				if(pic[k][m]!=1){
					pic[k][m]=1;
					re++;
				}
				
		}
		
		
	}
		
	printf("%d",re);
	
	return 0;
}

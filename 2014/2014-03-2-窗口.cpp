#include<bits/stdc++.h>

using namespace std;
struct win{
	int x1;
	int y1;
	int x2;
	int y2;
	int index;
}; 

bool ifIn(int x,int y,win w){
	if(w.x1<=x&&x<=w.x2&&w.y1<=y&&y<=w.y2)
		return true;
	return false;
}

int main(){
	int N,M;
	
	scanf("%d",&N);
	scanf("%d",&M);
	
	vector<win> v;
	int point[M][2];

	for(int i =0;i<N;i++){
		win w;
		
		scanf("%d%d%d%d",&w.x1,&w.y1,&w.x2,&w.y2);
		w.index = i+1;
		v.insert(v.begin(),w);
	}
	
	for(int i =0;i<M;i++){
		scanf("%d%d",&point[i][0],&point[i][1]);
	}
	
	for(int i=0;i<M;i++){
		int x,y;
		int flag=-1;
		
		x = point[i][0];
		y = point[i][1];
		
		for(int j=0;j<N;j++){
			if(ifIn(x,y,v[j])){
				flag = v[j].index;
				win w = v[j];
				
				v.erase(v.begin()+j);
				v.insert(v.begin(),w);
				
				break;
			}
		}
		if(flag == -1)
			printf("IGNORED");
		else
			printf("%d",flag);
		if(i!=M-1)
			printf("\n");
	}
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int maps[1000][1000]={0};
int ifv[1000][1000]={0};
int direc[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m,k,d;
int mins;
//1 为客户点   2 为配送点     3 为不可达点 

bool ifSearch(int x,int y){
	if(0<=x<n&&0<=y<n)
		if(ifv[x][y]!=1)
			if(maps[x][y]!=3)
				return true;
	return false;
	
}

int dfs(int x,int y,int step ){
	step++;
	ifv[x][y]=1;
	cout<<x<<" "<<y;
	if(maps[x][y]==2){
		if (mins>step)
			mins=step;
		return mins;
	}
	for(int i=0;i<4;i++){
		if(ifSearch(x+direc[i][0],y+direc[i][1])){
			dfs(x+direc[i][0],y+direc[i][1],step);
		}
	}
}
struct node{
	int x;
	int y;
	int num;
};


int main(){
	scanf("%d%d%d%d",&n,&m,&k,&d);
	int x,y,num;
	vector<node> list;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		maps[x][y]=2;
	}
	
	for(int i=0;i<k;i++){
		node n;
		scanf("%d%d%d",&n.x,&n.y,&n.num);
		maps[n.x][n.y]=1;
		list.push_back(n);
	}
	
	for(int i=0;i<d;i++){
		scanf("%d%d",&x,&y);
		maps[x][y]=3;
	}
	
	int re=0;
	
	cout<<"here!!";
	for(int i=0;i<list.size();i++){
	
		memset(ifv,0,sizeof(ifv));
		
		mins=9999999;
		cout<<"here!!";
		dfs(list[i].x,list[i].y,0);
		cout<<list[i].x<<"   "<<list[i].y<<"   "<<mins;
		re = re+ mins*list[i].num; 
	}
	
	
	return 0;
}


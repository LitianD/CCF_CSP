#include<stdio.h>
#include<map>
using namespace std;
int main() {
	int n;
	map<int,int> m,m1;
	int temp;
	map<int,int>::iterator it;
	while(scanf("%d",&n)!=EOF) {
		for(int i =0; i<n; i++) {
			scanf("%d",&temp);
			m[temp]++;
			
		}
		int res = m.begin()->first;
		for(it = m.begin(); it!=m.end(); it++) {
			if(it->second>m[res])
				res = it->first;
		}
		
		printf("%d\n",res);
	}

	return 0;
}

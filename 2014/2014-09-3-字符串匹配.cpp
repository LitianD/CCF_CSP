#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	
	int flag;
	cin>>flag;
	
	int n;
	cin>>n;
	
	vector<string> v;
	if(flag==0){
		transform(s.begin(),s.end(),s.begin(),::tolower);
	}
	for(int i=0;i<n;i++){
		string temp1,temp2;
		cin>>temp1;
		temp2 = temp1;
		if(flag==0){
			transform(temp2.begin(),temp2.end(),temp2.begin(),::tolower);
		}
		if(0<=temp2.find(s)&&temp2.find(s)<=temp2.size()-1){
			v.push_back(temp1);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	
	return 0;
}

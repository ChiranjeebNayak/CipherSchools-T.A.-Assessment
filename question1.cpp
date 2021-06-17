#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define int long long
using namespace std;
vector<int> arraysum(int n)
{	vector<int> res;
	if(n==0){
		return res;
	}
	else if(n==1){
		res.pb(0);
	}
    else if(n%2==0){
    	for(int i=0;i<n/2;i++){
    		res.pb((i+1)*-1);
		}
    	for(int i=0;i<n/2;i++){
    		res.pb(i+1);
		}
	}
	else{
		for(int i=0;i<n/2;i++){
    		res.pb((i+1)*-1);
		}
		res.pb(0);
    	for(int i=0;i<n/2;i++){
    		res.pb(i+1);
		}	
	}
    return res;
}
int32_t main(){
	int n;
	cin>>n;
	vi res;
	res=arraysum(n);
	cout<<"Unique Array = ";
	for(auto it:res){
		cout<<it<<" ";
	}
	return  0;
}


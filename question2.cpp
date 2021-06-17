#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int p){
	sort(arr,arr+n);
	int res=0;
	for(int i=0;i<n;i++){
		if(p%arr[i]==0)
		res++;
	}
	return res;
}
int main(){
	int n;
	cout<<"number of gadget = ";
	cin>>n;
	cout<<"Price of gadgets = ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"query = ";
	int q;
	cin>>q;
	while(q--){
		cout<<"Price unit = ";
		int p;
		cin>>p;
		int item;
		cout<<"Robot says items = ";
		cin>>item;
		int res= solve(arr,n,p);
		if(item == res)
		cout<<"Right\n";
		else
		cout<<"Wrong\n";	
	}
	
	return 0;
}

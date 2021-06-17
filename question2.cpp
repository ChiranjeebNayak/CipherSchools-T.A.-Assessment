#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int p){
	sort(arr,arr+n);
	int res=0;
	
	
	return res;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
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
	return 0;
}

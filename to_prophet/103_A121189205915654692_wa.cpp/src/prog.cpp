#include<iostream>
using namespace std;
int arr[100];
int main(){
	int n,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	c=arr[0];
	for(int i=1;i<n;i++)
		c+=(arr[i]-1)*(i+1)+1;
	cout<<c;
}



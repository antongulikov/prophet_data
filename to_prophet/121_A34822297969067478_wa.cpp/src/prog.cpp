#include<iostream>
#include<vector>
#include<algorithm>
#define pb push_back
using namespace std;
vector<int> v;
void make_lucky(long long s,int i){
	if(i<=10){
		v.pb(s*10+4);
		v.pb(s*10+7);
		make_lucky(s*10+4,i+1);
		make_lucky(s*10+7,i+1);
	}	
}
int main(){
	make_lucky(0,0);
	sort(v.begin(),v.end());
	int l,r;
	long long ans=0;
	cin>>l>>r;
	int w=0;
	while(v[w]<l)
		w++;
	ans+=(v[w]-l+1)*v[w];
//	cout<<ans<<endl;
	int i;
	for(i=w+1;v[i]<=r;i++){
		ans+=v[i]*(v[i]-v[i-1]);
//		cout<<i<<' '<<ans<<' '<<v[i]<<endl;
	}
//	cout<<i<<' '<<v[i]<<endl;
	ans+=v[i]*(r-v[i-1]);
	cout<<ans<<endl;
}





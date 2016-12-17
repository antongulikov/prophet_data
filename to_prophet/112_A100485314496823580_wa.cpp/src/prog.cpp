#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int ans;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i]+32;
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]=s2[i]+32;
        if(s1[i]==s2[i])
            ans=0;
        else if(s1[i]<s2[i])
        {
            ans=-1;
            break;
        }
        else
            ans=1;
    }

    cout<<ans<<endl;
    return 0;
}

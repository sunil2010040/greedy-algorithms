#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    int mn=0,mx=0;
    for(int i=0;i<n/2;i++)
    {
        mx=mx+(a[i+n/2]-a[i]);
        mn=mn+a[2*i+1]-a[2*i];
    }
    
    cout<<"minimum difference:"<<mn<<endl;
    cout<<"miximum difference:"<<mx<<endl;
}
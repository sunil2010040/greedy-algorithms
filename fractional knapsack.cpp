#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    float v1=(float)p1.first/p1.second;
    float v2=(float)p2.first/p2.second;
    
    return v1>v2;
}

int main()
{
    int n;
    cin>>n;
    
    vector<pair<int,int>>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    
    int w;
    cin>>w;
    
    sort(a.begin(),a.end(),compare);
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        if(w>=a[i].second)
        {
            ans=ans+a[i].first;
            w=w-a[i].second;
            continue;
        }
        
        float vw=(float)a[i].first/a[i].second;
        ans=ans+vw*w;
        w=0;
        break;
    }
    
    cout<<ans<<endl;
    
    
    return 0;
    
    
}
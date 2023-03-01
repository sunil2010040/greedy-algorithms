#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<pair<int,int>>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        
        int l,p;
        cin>>l>>p;
        
        for(int i=0;i<n;i++)
        {
            a[i].first=l-a[i].first;
        }
        
        sort(a.begin(),a.end());
        
        int ans=0;
        int curr=p;
        
        priority_queue<int,vector<int>>maxi;
        bool flag=0;
        
        for(int i=0;i<n;i++)
        {
            if(curr>=l)
            {
                break;
            }
            
            while(curr<a[i].first)
            {
                if(maxi.empty())
                {
                    flag=1;
                    break;
                }
                ans++;
                curr+=maxi.top();
                maxi.pop();
            }
                
            if(flag)
            {
                break;
            }
            maxi.push(a[i].second);
        }
        
        if(flag)
        {
            cout<<"-1"<<endl;
            continue;
        }
    
        while(!maxi.empty()&&curr<l)
        {
            curr+=maxi.top();
            maxi.pop();
            ans++;
        }
    
        if(curr<l)
        {
            cout<<"-1"<<endl;
            continue;
        }
    
        cout<<ans<<endl;
        return 0;
    }
}
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
    
    priority_queue<int,vector<int>,greater<int> >minheap;
    
    for(int i=0;i<n;i++)
    {
        minheap.push(a[i]);
    }
    
    int ans=0;
    
    while(minheap.size()>1)
    {
        int q1=minheap.top();
        minheap.pop();
        
        int q2=minheap.top();
        minheap.pop();
        
        ans=ans+q1+q2;
        minheap.push(q1+q2);
    }
    
    cout<<ans<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int x;
    cin>>x;
    
    for(int i=n-1;i>=0;i--)
    {                                   //this is in a way so that if the coin 
        ans=ans+x/a[i];                 //is greater than value"x" than it return zero
        x=x-(x/a[i])*a[i];              //this is done so that it subtract that value from x 
    }
    
    cout<<ans<<endl;
}
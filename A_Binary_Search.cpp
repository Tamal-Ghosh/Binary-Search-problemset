#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(long long i=a;i<b;i++)
#define Rloop(i,j,k) for(long long int i=j;i>=j;i--)
#define yeep() cout <<"YES" << endl
#define noop() cout << "NO"<< endl
bool binary_search(int* a,int n,int z){
    int l=0,r=n-1,m;
    bool flag=false;
    while(l<=r)
    {
        m=(l+r)/2;
        if(z==a[m])
        {
            flag=true;
            return flag;
        }
        else if(z>a[m])
        {
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return flag;
}
int main(){
    ll int n,k,z;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>z;
        bool flag=binary_search(a,n,z);
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        

        
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(long long i=a;i<b;i++)
#define Rloop(i,j,k) for(long long int i=j;i>=j;i--)
#define yeep() cout <<"YES" << endl
#define noop() cout << "NO"<< endl
int binary_search_l(int* a,int n,int z){
    int l=0,r=n-1,m;
    int temp1,output=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(z>a[m])
        {
            l=m+1;
            output=max(output,m+1);
        }
        else{
            r=m-1;
        }
    }
    return output;
}

int binary_search_r(int* a,int n,int z){
    int l=0,r=n-1,m;
    int temp1,output=n+1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(z>=a[m])
        {
            l=m+1;
            
        }
        else{
            r=m-1;
            output=min(output,m+1);
        }
    }
    return output;
}
int main() {
    ll n,k,l,r;
    cin >> n; 
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>l>>r;
        cout<<binary_search_r(a,n,r)-binary_search_l(a,n,l)-1<<" ";
    }

    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << endl;
    // }

    return 0;
}
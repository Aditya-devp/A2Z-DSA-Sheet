
// Returning the all the subsequences for the given problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define loop(i,n)        for(ll i=0;i<n;i++)
#define input_arr(a,n)   for(ll i=0;i<n;i++){cin>>a[i];}
#define output_arr(a,n)  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define input_vec(v)     for(auto &x: v) cin>>x;
#define output_vec(v)    for(auto &x: v) cout<<x<<" ";
#define fast_io          ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void prints(int idx,vector<int>&v,int s,int sum,int arr[],int n){
    int count=0;
    if(idx==n){
        if(s==sum){
            count++;
            for(auto x:v){
                cout<<x<<" ";

            }
             cout<<endl;

        }
        return;

    }
    v.push_back(arr[idx]);
    s+=arr[idx];
    prints(idx+1,v,s,sum,arr,n);
    s-=arr[idx];
    v.pop_back();
    prints(idx+1,v,s,sum,arr,n);
}


int main()
{
    fast_io;
    int arr[]={1,3,1,3,3,2,2,4,1,3,3,1,4};
    int n=13;
    int sum=4;
    vector<int>v;
    prints(0,v,0,sum,arr,n);

    return 0;
}

// Returning only one subsequence for the given problem 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define loop(i,n)        for(ll i=0;i<n;i++)
#define input_arr(a,n)   for(ll i=0;i<n;i++){cin>>a[i];}
#define output_arr(a,n)  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define input_vec(v)     for(auto &x: v) cin>>x;
#define output_vec(v)    for(auto &x: v) cout<<x<<" ";
#define fast_io          ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool prints(int idx,vector<int>&v,int s,int sum,int arr[],int n){
    if(idx==n){
        if(s==sum){

            for(auto x:v){
                cout<<x<<" ";

            }
             cout<<endl;
             return true;

        }
        return false;

    }
    v.push_back(arr[idx]);
    s+=arr[idx];
   if( prints(idx+1,v,s,sum,arr,n)==true)return true;
    s-=arr[idx];
    v.pop_back();
    if (prints(idx+1,v,s,sum,arr,n)==true) return true;
    return false;
}


int main()
{
    fast_io;
    int arr[]={1,3,1,3,3,2,2,4,1,3,3,1,4};
    int n=13;
    int sum=4;
    vector<int>v;
    prints(0,v,0,sum,arr,n);

    return 0;
}





// counting the number of subsequences 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define loop(i,n)        for(ll i=0;i<n;i++)
#define input_arr(a,n)   for(ll i=0;i<n;i++){cin>>a[i];}
#define output_arr(a,n)  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define input_vec(v)     for(auto &x: v) cin>>x;
#define output_vec(v)    for(auto &x: v) cout<<x<<" ";
#define fast_io          ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int prints(int idx,int s,int sum,int arr[],int n){
    int count=0;
    if(idx==n){
        if(s==sum){
           return 1;

        }
        return 0;

    }
   
    s+=arr[idx];
   int l= prints(idx+1,s,sum,arr,n);
    s-=arr[idx];

   int r= prints(idx+1,s,sum,arr,n);
   return l+r;
}


int main()
{
    fast_io;
    int arr[]={1,3,1,3,3,2,2,4,1,3,3,1,4};
    int n=13;
    int sum=4;
    vector<int>v;
   cout<< prints(0,0,sum,arr,n);

    return 0;
}








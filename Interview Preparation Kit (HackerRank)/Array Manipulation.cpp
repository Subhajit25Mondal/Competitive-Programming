#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n, t;
    cin>>n>>t;
    vector <long long int> arr(n,0);
    for(long long int i = 0; i < t; i++)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        for(long long int j = a; j <= b; j++)
        {
            arr[j]+=k;
        }
        
    }

    cout<<*max_element(arr.begin(),arr.end());
    
    return 0;
}

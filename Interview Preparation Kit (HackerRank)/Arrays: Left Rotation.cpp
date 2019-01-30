#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, r;
    cin>>n>>r;
    vector <int> a;
    for(int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        a.push_back(temp);
    }

    rotate(a.begin(),a.begin()+r,a.end());             //NEW FUNCTION 
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}

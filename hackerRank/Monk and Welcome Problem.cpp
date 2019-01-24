#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> a;
    int n; cin>>n;
    for(int i = 0; i < n; i++)
    {
        int t; cin>>t;
        a.push_back(t);
    }

    for(int i = 0; i < n; i++)
    {
        int t; cin>>t;
        a[i]+=t;
    }

    for(int i = 0; i < n; i++)
    {
        cout<<a.at(i)<<" ";
    }

    
    return 0;
}

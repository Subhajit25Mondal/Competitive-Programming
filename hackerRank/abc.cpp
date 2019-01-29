#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector <int> a;
    vector <int> b;
    for(int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        a.push_back(temp);
        b.push_back(temp);
    }
    
    int cnt=1, max = 0, max_n=0;
    sort(a.begin(),a.end());
    vector <int>:: iterator it;
    it = std::unique(a.begin(),a.end());

    a.resize(std::distance(a.begin(), it)); 
    int num = 0;

    for(int i = 0; i < a.size(); i++)
    {
        int vv = count(b.begin(),b.end(),a[i]);
        if(vv > max){
            num = a[i];
        }
    }
    

    return 0;
}

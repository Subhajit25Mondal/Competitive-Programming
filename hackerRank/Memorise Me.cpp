#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> a;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int t; cin>>t;
        a.push_back(t);
    }
    int m;
    cin>>m;
    for(int i = 0; i < m; i++)
    {
        int t;
        cin>>t;
        int tt = count(a.begin(),a.end(),t);
        if(tt!=0){
            cout<<tt<<endl;
        }
        else
        {
            cout<<"NOT PRESENT"<<endl;
        }
        
    }
    

}

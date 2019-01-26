#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n; cin>>n;
        vector <int> a;
        for(int j = 0; j < n; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }

        int mi = *min_element(a.begin(),a.end());
        if (count(a.begin(),a.end(),mi)%2!=0){
            cout<<"Lucky"<<endl;
        }
        else
        {
            cout<<"Unlucky"<<endl;
        }
        
    }
    
    return 0;
}

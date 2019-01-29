#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    vector<int>::iterator it; 
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int check = -1;
        int pr; cin>>pr;
        int p; cin>>p;
        vector <int> a;
        for(int j = 0; j < p; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }
        int q; cin>>q;
        for(int j = 0; j < q; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }

        it = std::unique(a.begin(),a.end());
        a.resize(std::distance(a.begin(), it));
        a.insert(a.begin(),-1);

        for(int j = 1; i <= pr; j++)
        {
            if(a[j]!=j){
                check = 0;
            }
        }

        if (check == 0) {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        
        
        
        
    }
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int n,b; cin>>n>>b;
        vector <int> a;
        for(int j = 0; j < n; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }

        for(int j = 0; j < b; j++)
        {
            int k = a[n-1-j];
            a.pop_back();
            a.insert(a.begin(),k);
        }
        
        
    }
    
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n,cnt=1; cin>>n;
        vector <int> a;
        for(int j = 0; j < n; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }
        for(int j = 1; j < n; j++)
        {
            if (a[j]<a[j-1]) {
                cnt++;
            }
            
        }
        
        cout<<cnt<<endl;
    }
    
    return 0;
}

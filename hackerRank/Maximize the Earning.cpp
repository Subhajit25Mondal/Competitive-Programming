#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    for(int i = 0; i < t; i++){
        int n, k; cin>>n>>k;
        vector <int> a;
        for(int j = 0; j < n; j++)
        {
            int tem; cin>>tem;
            a.push_back(tem);
        }
        int cnt = 1, max = a[0];
        for(int j=1;j<n;j++){
            if(a[j]>max){
                max=a[j];
                cnt++;
            }
        }
        cout<<cnt*k<<endl;
    }
    
    return 0;
}
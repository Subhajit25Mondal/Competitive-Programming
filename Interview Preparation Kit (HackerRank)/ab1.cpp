#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t;
    cin>>t;
    for(long long int i = 0; i < t; i++)
    {
        long long int n, cnt=0;
        cin>>n;
        vector<long long int> a;
        for(long long int j = 0; j < n; j++)
        {
            long long int temp; cin>>temp;
            for(long long int k = 0; k < a.size(); k++)
            {
                if(a[k]>temp){
                    cnt++;
                }
            }
            a.push_back(temp);
            
        }
        
        cout<<cnt<<endl;
    }
    
    return 0;
}

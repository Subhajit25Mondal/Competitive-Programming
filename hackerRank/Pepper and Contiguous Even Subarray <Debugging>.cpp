#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n; long long cnt=0;
        cin>>n;
        for(int j = 0; j < n; j++)
        {
            int temp; cin>>temp;
            if (temp%2==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    }
    
    return 0;
}

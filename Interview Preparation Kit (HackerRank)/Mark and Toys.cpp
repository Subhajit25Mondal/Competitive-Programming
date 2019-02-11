#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int cnt = 0, sum=0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if(sum<=k){
            cnt++;
        }
        else
        {
            break;
        }
        
    }

    cout<<cnt;
    
    
    return 0;
}

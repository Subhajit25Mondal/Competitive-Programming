#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector <int> a;
    for(int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        a.push_back(temp);
    }
    for(int i = 0; i < n; i++)
    {
        if(*max_element(a.begin()+i,a.end())==a[i])
        {
            cout<<a[i]<<" ";
        }
    }
    
    
    return 0;
}

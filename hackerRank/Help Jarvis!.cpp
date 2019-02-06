#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
int t;
cin>>t;
for(int i = 0; i < t; i++)
{
    int n;
    cin>>n;
    vector <int> a; 
    while (n > 0)
    {
        int digit = n%10;
        n /= 10;
        a.push_back(digit);
    }
    int len = a.size();
    int ma = *max_element(a.begin(), a.end());
    int mi = *min_element(a.begin(), a.end());
    if ((ma-mi)+1 == len) {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }  
    
}
    
}

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,prev, cnt = 1; 
    cin>>n;
    cin>>prev;
    for(int i = 1; i < n; i++)
    {
        int now; cin>>now;
        if (now<prev) {
            cnt++;
        }
        prev = now;
    }

    cout<<cnt;
    
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while (n > 0)
    {
    int digit = n%10;
    n /= 10;
    cout<<digit<<endl;
    }
    return 0;
}

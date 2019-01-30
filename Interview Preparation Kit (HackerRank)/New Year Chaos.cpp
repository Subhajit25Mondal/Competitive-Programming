#include<iostream>
#include<vector>
using namespace std;
void calc(vector<int> q)
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        int n; cin>>n;
        vector <int> a;
        for(int j = 0; j < n; j++)
        {
            int temp; cin>>temp;
            a.push_back(temp);
        }

        calc(a);
        
    }
    
    return 0;
}

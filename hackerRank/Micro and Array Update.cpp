#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector <int> a;
        int m,k;
        cin>>m>>k;
        for(int j=0;j<m;j++){
            int t;
            cin>>t;
            a.push_back(t);
        }
        int mm = *min_element(a.begin(),a.begin()+m);
        int dif = k-mm;
        if (mm<k){
            cout<<dif<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
    }

}

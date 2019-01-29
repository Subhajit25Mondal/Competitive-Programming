#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,max1=0,x,r;
map<int,int> m;
int vis[10]={0};
cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
memset(vis,0,sizeof(vis));
while(x>0)
{
r=x%10;
if(vis[r]==0)
{
m[r]++;
vis[r]=1;
}

x/=10;
}
}
map<int,int> ::iterator it;
for(it=m.begin();it!=m.end();it++)
{
max1=max(max1,it->second);
}
cout<<max1<<endl;
}
#include <bits/stdc++.h>
using namespace std;
bool ap[50010],visited[50010];
vector<vector<int>> adj(50010);
int tiem=0,disc[50010],low[50010];
bool cek;
const long long mod=1e9+7;
long long dfs(int pos, int pivot)
{
	if(visited[pos])	return 0;
	if(ap[pos])
	{
		if(pos!=pivot) cek=false;
		return 0;
	}
	long long cnt=1;
	visited[pos]=true;
	for(int temp=0;temp<adj[pos].size();temp++)
	{
		cnt+=dfs(adj[pos][temp],pivot);
	}
	return cnt;
}
void dfstarzan(int pos, int par)
{
	visited[pos]=true;
	int child=0;
	low[pos]=disc[pos]=tiem; tiem++;
	for(int temp=0;temp<adj[pos].size();temp++)
	{
		int thenode=adj[pos][temp];
		if(thenode==par)	continue;
		if(!visited[thenode])
		{
			dfstarzan(thenode,pos);
			if(disc[pos]<=low[thenode])	ap[pos]=true;
			low[pos]=min(low[pos],low[thenode]);
			child++;
		}
		else
		{
			low[pos]=min(low[pos],disc[thenode]);
		}
	}
	if(pos==par)
	{
		if(child>1)	ap[pos]=true;
		else	ap[pos]=false;
	}
	//cout<<pos<<" "<<disc[pos]<<" "<<low[pos]<<"\n";
}
int main()
{
	int tcnum=1;
	int m;
	while(cin>>m)
	{
		tiem=0;
	if(m==0)	return 0;
	int n=0,temp;
	//reset
	memset(visited,0,sizeof(visited));
	adj.clear();
	adj.resize(50010);
	memset(ap,0,sizeof(ap));
	memset(disc,0,sizeof(disc));
	memset(low,0,sizeof(low));
	//
	for(temp=0;temp<m;temp++)
	{
		int x,y;
		cin>>x>>y;
		n=max(n,max(x,y));
		if(x==y)	continue;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	assert(n>1);
	int start=1;
	dfstarzan(start,start);
	vector<int> aplist;
	for(temp=1;temp<=n;temp++)	if(ap[temp])	aplist.push_back(temp);
	int cnt=0;
	long long ans=1;
	memset(visited,0,sizeof(visited));
	for(temp=0;temp<aplist.size();temp++)
	{
		int pos=aplist[temp];
		for(int temp2=0;temp2<adj[pos].size();temp2++)
		{
			if(visited[adj[pos][temp2]])	continue;
			if(ap[adj[pos][temp2]])	continue;
			cek=true;
			long long lol=dfs(adj[pos][temp2],pos);
			if(cek)
			{
				cnt++;
				ans=ans*lol;
			}
		}
	}
	cout<<"Case "<<tcnum<<": ";
	tcnum++;
	if(cnt==0)
	{
		long long x=n;
		cout<<2<<" "<<(long long)x*(x-1)/2<<"\n";
		continue;
	}
	cout<<cnt<<" "<<ans<<"\n";

	}
}

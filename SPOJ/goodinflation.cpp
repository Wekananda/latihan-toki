#include <bits/stdc++.h>
using namespace std;
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#pragma GCC optimize ("Ofast")
#pragma GCC target ("string"...)
#pragma GCC push_options
#pragma GCC pop_options
#pragma GCC reset_options
#pragma GCC optimize ("O3")
inline void readint(int &x)
{
	char c=getchar();
	x=0;
	while((c<48)||(c>57))	c=getchar();
	while((c>=48)&&(c<=57))
	{
		x=(x<<3) + (x<<1) + c-48;
		c=getchar();
	}
}

inline void printint(long long x)
{
	if(x==0)	putchar('0');
	long long peng=1,num=x;
	while(num>0)
	{
		peng=peng*10;
		num/=10;
	}
	peng=peng/10;
	while(peng>0)
	{
		putchar(x/peng%10+48);
		peng/=10;
	}
}

struct line
{
	long long m,c;
	double left;
};


inline double potong (line a, line b)
{
	return double(b.c-a.c)/double(a.m-b.m);
}

vector<line> ch;

inline void insert(line l3)
{
	while(ch.size()>=2)
	{
		line l1=ch[ch.size()-2],l2=ch.back();
		if((l1.c-l2.c)*(l3.m-l1.m)>=(l1.c-l3.c)*(l2.m-l1.m))	ch.pop_back();
		else	break;
	}
	if(ch.size()>0)	l3.left=potong(ch.back(),l3);
	ch.push_back(l3);
}

inline long long query(long long x)
{
	int left=0,right=ch.size()-1,mid;
	while(left<right)
	{
		mid=(left+right+1)>>1;
		if(ch[mid].left<=x)	left=mid;
		else	right=mid-1;
	}
	return ch[left].m*x + ch[left].c;
}
int a[1000001],d[1000001];
int main()
{
	int n;
	readint(n);
	int temp;
	for(temp=1;temp<=n;temp++)
	{
		readint(a[temp]); readint(d[temp]);
	}
	insert({-1*(n+1),0,-10e17});
	for(temp=n;temp>=1;temp--)
	{
		long long dp=query(d[temp])+ ((long long)temp*d[temp] + a[temp]);
		insert({-1*temp,dp,-10e17});
	}
	long long ans=query(0);
	printint(ans); putchar('\n');
}

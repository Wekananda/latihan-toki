#include <bits/stdc++.h>
using namespace std;

struct tree
{
	tree *left,*right;
	int num,sz;
	long long prior;
	tree() {}
	tree(int num) : num(num) , prior((long long)(rand()*rand())), left(NULL), right(NULL), sz(1) {}
};

typedef tree* ptree;

int getsize(ptree t)
{
	if(!t)	return 0;
	else	return t->sz;
}
void updatesz(ptree &t)
{
	if(!t)	return;
	t->sz=1+getsize(t->left)+getsize(t->right);
}
void split(ptree t, ptree &l, ptree &r, int key)
{
	if(!t)
	{
		l=r=NULL;
		return;
	}
	if(t->num > key) //jadikan tree sebagai root right subtree
	{
		split(t->left,l,t->left,key);
		r=t;
	}
	else
	{
		split(t->right,t->right,r,key);
		l=t;
	}
	updatesz(t);
}

void merge(ptree &t, ptree l, ptree r)
{
	if(!l || !r)
	{
		if(l)	t=l;
		else	t=r;
		if(t)	updatesz(t);
		return;
	}
	if(l->prior > r->prior)
	{
		merge(l->right,l->right,r);
		t=l;
	}
	else
	{
		merge(r->left,l,r->left);
		t=r;
	}
	updatesz(t);
}

void insert(ptree &t, ptree node)
{
	if(!t)
	{
		t=node;
		updatesz(t);
	}
	else if(node->prior > t->prior) //sudah harus dimasukkin
	{
		//cout<<"masuk\n";
		split(t,node->left,node->right,node->num);
		t=node;
		updatesz(t);
	}
	else
	{
		if(node->num > t->num) insert(t->right, node);
		else	insert(t->left,node);
		updatesz(t);
	}
}

void hapus(ptree &t, ptree node)
{
	//cout<<t->num<<"\n";
	if(node->num==t->num)
	{
		merge(t,t->left,t->right);
		updatesz(t);

	}
	else
	{
		if(node->num > t->num)	hapus(t->right,node);
		else	hapus(t->left,node);
		updatesz(t);
	}
}

bool find(ptree t, int key)
{
	if(!t)	return false;
	if(t->num==key)	return true;
	if(key>t->num)	return find(t->right,key);
	else	return find(t->left,key);
}

int main()
{
	//ios_base::sync_with_stdio(false);
	srand(time(NULL));
	ptree t=NULL;
	int q;
	scanf("%d",&q);
	while(q--)
	{
		char c; int x;
		scanf("%c",&c);
		scanf("%c %d",&c,&x);
		//cout<<c<<" "<<x<<"\n";
		if(c=='I')
		{
			if(!find(t,x))
			{
				//cout<<"masuk\n";
				ptree lala=new tree(x);
				//cout<<lala->num<<" "<<lala->prior<<"\n";
				insert(t,lala);
			}
			//<<getsize(t)<<"\n";
		}
		if(c=='D')
		{
			if(find(t,x))
			{
				ptree lala=new tree(x);
				hapus(t,lala);
			}
			//cout<<getsize(t)<<" "<<t->num<<"\n";
		}
		if(c=='K')
		{
			if(x>getsize(t))	printf("invalid\n");
			else
			{
				ptree pos=t;
				while(x>0)
				{
					//cout<<pos->num<<" "<<x<<" "<<getsize(pos->left)<<" "<<getsize(pos->right)<<"\n";
					//char c; cin>>c;
					if(x==getsize(pos->left)+1)	break;
					if(x>getsize(pos->left)+1)	x-=getsize(pos->left)+1,pos=pos->right;
					else	pos=pos->left;
				}
				printf("%d\n",pos->num);
			}
		}
		if(c=='C')
		{
			ptree pos=t;
			int sum=0;
			while(pos)
			{
				//cout<<pos->num<<"\n";
				if(x>pos->num)
				{
					sum+=getsize(pos->left)+1;
					pos=pos->right;
				}
				else
				{
					pos=pos->left;
				}
			}
			printf("%d\n",sum);
		}
	}
}

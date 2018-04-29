#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int s[10];
int main()
{
    //cout << "hello, world" << endl;
	int n,x,a;
	scanf("%d%d",&n,&x);
	memset(s,0,sizeof(s));
    for(int i=1;i<=n;i++)
    {
        a=i;
        while(a>0)
        {
            s[a%10]++;
            a/=10;
        }
    }
    printf("%d",s[x]);
}

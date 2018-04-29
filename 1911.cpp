#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn=105;
int a[maxn];bool f[maxn];
int compare(const void *c, const void *b)
{
    int *pc = (int*)c;
    int *pb = (int*)b;
    return (*pc )- (*pb);
}
int main()
{
    //cout << "Hello world!" << endl;
    int n,s=0;
    memset(f,0,sizeof(f));
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    //for(int i=0;i<n;i++)
        //cout<<a[i]<<" ";
    int x;
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<i-1;j++)
        {
            int p,pmin=0,pmax=i-1;
            x=a[i]-a[j];
            if(x<=a[j])continue;
            while(pmin<=pmax)
            {
                if(a[pmin]==x||a[pmax]==x)
                {
                    //printf("%d %d %d\n",a[i],a[j],x);
					s++;f[i]=1;break;
                }
                p=(pmin+pmax)/2;
                if(a[p]==x)
                {
                    //printf("%d %d %d\n",a[i],a[j],x);
					s++;f[i]=1;break;
                }
                else if(a[p]<x)pmin=p+1;
                else pmax=p-1;
            }
            if(f[i])break;
        }
    }
    printf("%d",s);
    //system("pause");
    return 0;
}

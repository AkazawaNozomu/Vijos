#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
const int MAXN=105;
int sco[MAXN],qm[MAXN],py[MAXN],lw[MAXN];
char name[MAXN][25];
bool gb[MAXN],xb[MAXN];
int n,sum=0,maxsco=0;char maxname[25];
int main()
{
    //cout << "Hello world!" << endl;
    scanf("%d",&n);
    char nory;
    memset(sco,0,sizeof(sco));
    for(int i=0;i<n;i++)
    {
        //scanf("%s",&name[i]);
        cin>>name[i];
        scanf("%d%d",&qm[i],&py[i]);
        //cout<<qm[i]<<" "<<py[i]<<endl;
        //scanf("%c",&nory);
        cin>>nory;
        //cout<<nory<<" ";
        if(nory==78)gb[i]=0;
        else if(nory==89)gb[i]=1;
        //cout<<gb[i]<<" ";
        //scanf("%c%c",&nory,&nory);
        cin>>nory;
        //cout<<nory<<endl;
        if(nory==78)xb[i]=0;
        else if(nory==89)xb[i]=1;
        //cout<<xb[i]<<endl;
        scanf("%d",&lw[i]);
        //cout<<lw[i]<<endl;
        if(qm[i]>80&&lw[i]>0)sco[i]+=8000;
        if(qm[i]>85&&py[i]>80)sco[i]+=4000;
        if(qm[i]>90)sco[i]+=2000;
        if(qm[i]>85&&xb[i])sco[i]+=1000;
        if(py[i]>80&&gb[i])sco[i]+=850;
        //cout<<sco[i]<<" "<<i<<endl;
        sum+=sco[i];
        if(sco[i]>maxsco)
        {
            maxsco=sco[i];strcpy(maxname,name[i]);
        }
    }
    printf("%s\n%d\n%d",maxname,maxsco,sum);
    //system("pause");
    return 0;
}

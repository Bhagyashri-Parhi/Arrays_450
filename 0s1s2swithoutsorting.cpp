#include<iostream>

using namespace std;

int withoutsort(int a[],int n){
    int i;
    int count0=0;
    int count1=0;
    int count2=0;

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        count0++;
        if(a[i]==1)
        count1++;
        if(a[i]==2)
        count2++;
    }

    for(i=0;i<count0;i++)
    {
        a[i]=0;
    }
    for(i=count0;i<(count0+count1);i++)
    {
        a[i]=1;
    }
    for(i=(count0+count1);i<n;i++)
    {
        a[i]=2;
    }
    return 0;
}

int main()
{
    int a[5]={0,1,0,2,1};
    withoutsort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}

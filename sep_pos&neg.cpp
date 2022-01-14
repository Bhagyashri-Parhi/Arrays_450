#include<iostream>

using namespace std;

void rearrange(int a[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
            }
            j++;
        }
    }
}
int main()
{
    int a[5]={-1,1,0,-2,2};
    rearrange(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    return 0;
}
#include<iostream>

using namespace std;

int main()
{   
    int n,i,j,temp;
    // cout<<"enter no. of elements";
    cin>>n;
    int a[5];
    int b[5];
    // cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // 1st method
    // for(i=0,j=n-1;i<j;i++,j--)
    // {
    //     temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    // }


    // 2nd (error) approach
    // for(i=n-1,j=0;i>=0,j<=0;i--,j++)
    // {
    //     b[j]=a[i];
    // }
    // for(i=n-1,j=0;i>=0,j<=0;i--,j++)
    // {
    //     a[i]=b[i];
    // }
    // cout<<"the reversed elements are";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
} 
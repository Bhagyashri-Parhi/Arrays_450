#include<iostream>

using namespace std;

// int maximum()
// {   
//     int i,a[5];
//     int max=a[0];
//     // int min=32768;
//     for(i=1;i<=5;i++)
//     {
//         if(max<a[i])
//           max=a[i];     
//     } 
//     return max;
// }

int main()
{
    int a[5]={3,2,5,7,1};
    // std::cout<<max();
         int i;
    int max=a[0];
    int min=a[0];
    // int min=32768;
    for(i=1;i<5;i++)
    {
        if(max<a[i])
          max=a[i];     
    } 
        cout<<"max"<<max<<endl;
    for(i=1;i<5;i++)
    {
        if(min>a[i])
          min=a[i];     
    } 
        cout<<"min"<<min<<endl;
}


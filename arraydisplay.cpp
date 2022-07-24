#include<iostream>
using namespace std;
int main()
{
    int i,a[5];

    cout<<endl<<"Enter array elements : ";
    
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<endl<<"Value in a["<<i<<"]"<<a[i];
    }
    return 0;
}
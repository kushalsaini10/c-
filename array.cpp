#include <iostream>
using namespace std;
int main()
{
    cout<<"hello hii"<<endl;
    int a,b,c=0;
    int arr[5];
    for(int i=0; i<=4;i++){
    cout<<"rollno."<<i<<" enter the vale= ";
    cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
     cout<<arr[i],arr[i],arr[i],arr[i],arr[i];
    }
    cout<<endl;

    for (int i=0; i<=4; i++){
        c=c+arr[i];
    }
    cout<<"sum of namber of given in array="<<c<<endl; 
    return 0;
}
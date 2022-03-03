#include<iostream>
using namespace std;
int main()
{
    int i,n,row,col;
    cout<<"enter number";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}

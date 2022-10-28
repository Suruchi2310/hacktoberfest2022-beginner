#include<iostream>
using namespace std;
/*
n=4
4*1=4
4*2=8
4*3=12
4*4=16
4*5=20
4*6=24
4*7=28
4*8=32
4*9=36
4*10=40
*/
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=10;i++){
        int v = n*i;
        cout<<n<<"*"<<i<<"="<<v;
        cout<<endl;
    }
    return 0;
}
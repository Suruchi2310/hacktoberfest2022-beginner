#include<iostream>
using namespace std;
/*
7
1           1
12         21
123       321
1234     4321
12345   54321
123456 654321
1234567654321
*/
int main()
{
    int n;
    cin>>n;
    int sp=2*n-3;   //2n-1-2
    int st =1;
    
    for(int i=1;i<=n;i++){
        int val=1; // hr row 1 se  hi start hoti h
        for(int j=1;j<=st;j++){
            cout<<val;
            val++;
        }
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        if(i==n){
            st--;
            val--;
        }
        for(int j=1;j<=st;j++){
            val--;
            cout<<val;
        }
        st++;
        sp-=2;
        cout<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
}
int main(){
  int sz;
  cin>>sz;
  vector<char> ch;
  for(int i=0;i<sz;i++){
    ch c;
    cin>>c;
    ch.push_back(c);
  }
  cout<<reverseString(ch)<<endl;
  return 0;
}

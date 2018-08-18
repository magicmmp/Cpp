#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vt;
    for(int i=0;i<10;i++)
      vt.push_back(i);
    vt.insert(vt.begin(),12);
    for(auto e:vt)
      cout<<e<<' ';
    cout<<endl;
}
    

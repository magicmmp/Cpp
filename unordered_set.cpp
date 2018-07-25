#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    set<int> s1;
    unordered_set<int> s2;
    s1.insert(4);
    s1.insert(2);
    s1.insert(3);
    s1.insert(1);
    s2.insert(4);
    s2.insert(2);
    s2.insert(3);
    s2.insert(1);
    cout<<"set:"<<endl;
    for(set<int>::iterator it=s1.begin();it!=s1.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"unordered_set"<<endl;
    for(unordered_set<int>::iterator it=s2.begin();it!=s2.end();++it)
        cout<<*it<<" ";
    cout<<endl;
}


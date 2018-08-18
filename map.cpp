#include<string>
#include<cstring>
#include<iostream>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<string,int> test;
    test.insert(make_pair("test1",1));
    test.insert(make_pair("test1",1));//test["test1"]=1
    test.insert(make_pair("test2",2));//test["test2"]=2
    map<string,int>::iterator it;
    it=test.find("test0");
    if(it==test.end()){
        cout<<"test0 not found"<<endl;
    }
    else{
       cout<<"test0 find:"<<cout<<it->second<<endl;
    }
    
    cout<<"test1 count:";
    cout<<test.count("test1")<<endl;
    cout<<"test[test1]="<<test["test1"]<<endl;

    cout<<"after inserting test1"<<endl;
    test["test1"]=8;
    cout<<"test[test1]="<<test["test1"]<<endl;
    it=test.find("test1");
    if(it==test.end()){
        cout<<"test1 not found"<<endl;
    }
    else{
       cout<<"test1 find:"<<cout<<(it->second)<<endl;
    }
    cout<<"test1 count:";
    cout<<test.count("test1")<<endl;
    return 0;
}

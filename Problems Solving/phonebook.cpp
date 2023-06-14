#include<iostream>
#include<map>
#include<list>

using namespace std;

int main(){
    map<string, list<string>> phonebook;
    phonebook["Soham"].push_back("1111111");
    phonebook["Soham"].push_back("1111112");

    phonebook["Vivek"].push_back("22222222");
    phonebook["Vivek"].push_back("22222223");

    for(const string& num : phonebook["Soham"]){
        cout<<num<<endl;
    }

    for(const string& num : phonebook["Vivek"]){
        cout<<num<<endl;
    }

    
    // for(pair <string, list<string>> item:phonebook){
    //     cout<<item.first<<" - "<<item.second<<endl;
    // }
    return 0;
}
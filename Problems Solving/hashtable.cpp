#include<iostream>
#include<unordered_map> // O(1)
// if we want it to be in ordered manner then we have to use map insted of unordered map,
// which will have O(logN) complexity.

// internal implementation will be changed if we switch from ordered to unordered or vice versa.

using namespace std;

int main(){
    // key is string and value is in int
    unordered_map<string,int> menu;     // created hashtable as unordered maps are hashtables.
    // inserting key-value paires in the hashtable aka unordered map in O(1)
    menu["Maggie"] = 35;
    menu["Idli"] = 38;
    menu["Sprite"] = 20;
    menu["Water"] = 20;
    menu["Dosa"] = 50;
    menu["Vada Sambar"] = 25;
    menu["Upma"] = 30;
    
    //update query
    menu["Maggie"] = (1+ 0.1) * menu["Maggie"];

    // deleting item
    menu.erase("Sprite");

    string item;
    cin>>item;
    
    if (menu.count(item))
        cout<<item<<" is present and it's price is "<<menu[item]<<endl;
    else
        cout<<item<<" isn't present"<<endl;
        
    // iterating through all elements
    for(pair<string, int> item: menu){
        cout<<item.first<<" - "<<item.second<<endl;
    }

    //string temp = (menu.count(item)) ? "item is present" : "item is absent";
    //cout<<temp;
    return 0;
}
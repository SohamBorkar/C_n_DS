#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector <int> pairSum(vector<int> arr, int S){
    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (s.find(x)!=s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            // in above 2 lines we added pair we got in result vector
            return result;
        }
        // inserting the current no inside  set
        s.insert(arr[i]);
    }
    
    return {};
};

int main(){
    vector <int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    auto p = pairSum(arr,S);
    if (p.size()==0)
    {
        cout<<"No such pair";
    }
    else{
        cout<<p[0]<<","<<p[1]<<endl;
        // we only want one pair so we are printing pair
    }
     
    return 0;
}
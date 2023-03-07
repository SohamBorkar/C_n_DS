#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9,10}, {11,12}};
    // 2d vector can have different sizes of elements in array of array.

    arr[0][0] += 14;
    for (int i = 0; i < arr.size(); i++)
    {
        // you can use for each loop as below to access each element in i th position of vector
        for (int number: arr[i]){   // all numbers availabe in i th vector: cout that number
            cout << number << ", ";
        }
        cout << endl;
    }
    
    return 0;
}
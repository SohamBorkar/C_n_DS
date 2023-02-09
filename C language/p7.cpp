#include <bits/stdc++.h>
using namespace std;

bool isbalanced(string s){
    stack<char> st;
    bool ans = true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{' ){
            st.push(s[i]);
        }
        else if(s[i]==')' or s[i]==']' or s[i]=='}'){
            if(s[i]==')' and !st.empty() and st.top()=='('){
                st.pop();
            }
            else if(s[i]==']' and !st.empty() and st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                ans = false;
                return ans;
            }
        }

    }

    if(!st.empty()){
        ans = false;
        return ans;
    }
    else{
        return ans;
    }
}


int main(){
    // string s = "(){{{}}[]}";
    string s = "{([]}";
    if(isbalanced(s)){
        cout << "Balanced Parenthesis" << endl;
    }
    else{
        cout << "Not balanced parenthesis" << endl;
    }
    return 0;
}






























// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// bool isvalid(string s){
//     int n = s.size();
//     bool ans = true;
//     stack <char> st;

//     for (int i = 0; i < n; i++)
//     {
//         if(s[i] == '{' || '[' || '('){
//             st.push(s[i]);
//         }

//         else if(s[i] == ')'){
//             if (!st.empty() and st.top() == '(')
//             {
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }  
//         }

//         else if(s[i] == ']'){
//             if (!st.empty() and st.top() == '[')
//             {
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }  
//         }

//         else if(s[i] == '}'){
//             if (!st.empty() and st.top() == '{')
//             {
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }  
//         }
//     }
//     if(!st.empty())
//         return false;

//     return ans;
        
// };

// int main(int argc, char const *argv[])
// {
//     string s = "{([])}";

//     if (isvalid(s))
//         cout<<"Valid Sring" << endl;
//     else
//         cout<<"Invalid String" << endl;
    
//     return 0;
// }

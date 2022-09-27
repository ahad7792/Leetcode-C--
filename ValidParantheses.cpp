#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
     stack<char> st;
     int n = s.size();
     for(int i=0;i<n;i++)
     {   
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
         { 
           st.push(s[i]);
           continue;
         }
         if(st.empty())
             return false;
         char x = st.top();
         if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' && s[i]==']')) //if the top of the stack contains the corresponding bracket then pop it
             st.pop();
         else
            return false;
     } 
     if(st.empty()) //only after iterating all the char the stack should be empty
         return true;
     return false;
 }
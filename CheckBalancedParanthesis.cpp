#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std ;
bool checkbalanced(string arr)
{
    stack<char> opstack ;
    for(int i = 0 ; i < arr.length() ; i++)
    {
        char ch = arr[i] ; 

        if(ch == '(' || ch == '[' || ch == '{')
            opstack.push(ch) ;
        else 
        if (ch == ')' || ch == ']' || ch == '}')
        {
            if(opstack.empty())
                return false ;
            else
            if(ch == ')' && opstack.top() == '(')
                opstack.pop() ;
            else
             if(ch == ']' && opstack.top() == '[')
                opstack.pop() ;
            else 
            if(ch == '}' && opstack.top() == '{')
                opstack.pop() ;
            else
                return false ;
        }
    }
    return opstack.empty() ;
}

int main()
{
    //string arr = "{[{}]}" ;
    string arr;
    cin>>arr;
    cout <<  checkbalanced(arr) ;
    return 0 ; 
}
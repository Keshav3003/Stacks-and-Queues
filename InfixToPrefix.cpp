#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std ;

int preference(char ch)
{
    if(ch == '*' || ch == '/')
        return 200 ;
    else if (ch == '+' || ch == '-')
        return 100 ;
    else
        return 0 ;
}
int main()
{
    string input;
    cin>>input;
    reverse(input.begin(),input.end()) ;
    for(int i = 0 ; i < input.length() ; i++)
    {
        if(input[i] == '(')
            input[i] = ')' ;
        else 
        if (input[i] == ')')
            input[i] = '(' ;
    }
    stack<char> opstack ;
    string ans = "" ;
    for(int i = 0 ; i < input.length() ; i++)
    {
        char ch = input[i] ;

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            ans = ans + ch ;
        else 
        if (ch == '(')
            opstack.push('(') ;
        else 
        if (ch == ')')
        {
            while(opstack.top() != '(')
            {
                ans = ans + opstack.top() ;
                opstack.pop() ;
            }   
            opstack.pop() ;
        }
        else
        {
            while(!opstack.empty() && preference(opstack.top()) > preference(ch))
            {
                ans = ans + opstack.top() ;
                opstack.pop() ;
            }
            opstack.push(ch) ;
        }
    }
    while(!opstack.empty())
    {
        ans = ans + opstack.top() ;
        opstack.pop() ;
    }
    
    reverse(ans.begin(),ans.end()) ;
    cout << ans << endl ;
    return 0 ;
}
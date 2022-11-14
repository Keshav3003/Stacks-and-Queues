#include <iostream>
#include <stack>
using namespace std;
bool checkOperator(char element) 
{
   switch (element) 
   {
      case '+':
      case '-':
      case '/':
      case '*':
      return true;
   }
   return false;
}
string conversion(string input)
 {
   stack<string> ans;
   int length = input.size();
   for (int i = length - 1; i >= 0; i--) 
   {
      if (checkOperator(input[i])) 
      {
         string part1 = ans.top();
         ans.pop();
         string part2 = ans.top();
         ans.pop();
         string temp = "("+part1+input[i]+part2+")";
         ans.push(temp);
      }
       else
         ans.push(string(1, input[i]));
   }
   return ans.top();
}
int main() 
{
   string input = "*-AB/+CD*XY";
   cout<<"Prefix ans : "<<input<<endl;
   cout<<"Infix ans : " <<conversion(input);
   return 0;
}
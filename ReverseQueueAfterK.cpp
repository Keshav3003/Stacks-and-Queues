#include <bits/stdc++.h>
using namespace std;

void reverseAfterK(int k, queue<int>& q)
{
  if (q.empty() == true || k > q.size())
    return;
  if (k <= 0)
    return;
  stack<int> opstack;
  
  for (int i = 0; i < k; i++) 
  {
    opstack.push(q.front());
    q.pop();
  }
  
  while (!opstack.empty()) 
  {
    q.push(opstack.top());
    opstack.pop();
  }

  for (int i = 0; i < q.size() - k; i++)
    {
     q.push(q.front());
     q.pop();
    }
}
int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  reverseAfterK(2, q);
 while (!q.empty()) 
 {
    cout << q.front() << " ";
    q.pop();
  }
}
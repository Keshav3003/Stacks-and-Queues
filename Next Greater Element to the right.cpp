vector < int > nextGreater(vector < int > & nums)
{
      int n = nums.size();
      vector < int > nge(n,-1);
      stack < int > opstack;
      for(int i = 2*n - 1; i >= 0; i--)
       {
        while (!opstack.empty() && opstack.top() <= nums[i % n])
          opstack.pop();

        if (i < n) 
        {
          if (!opstack.empty()) nge[i] = opstack.top();
        }
        opstack.push(nums[i % n]);
      }
      return nge;
  }
int main()
 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector < int > v;
    int size,input;
    cin>>size;
    for(int i=0;i<size;i++)
    {
      cin>>input;
      v.push_back(input);
    }
    vector < int > ans = nextGreater(v);
    for (int i = 0; i < ans.size(); i++) 
        cout << ans[i] << " ";
    return 0;
 }
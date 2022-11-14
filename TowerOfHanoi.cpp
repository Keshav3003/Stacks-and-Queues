#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void TowerOfHanoi(int n, char source = 'A', char auxiliary='B', char destination='C') 
{
    if(n==0)
        return ;
    TowerOfHanoi(n-1,source,destination,auxiliary);
    cout<<" Move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    TowerOfHanoi(n-1,auxiliary,source,destination);    
}

int main()
 {
    int n, moves; 
    cin >> n;
    TowerOfHanoi(n);
    return 0;
}

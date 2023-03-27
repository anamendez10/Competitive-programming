# include <iostream>
# include <cstring>
# include <cmath>
 
using namespace std;

int loan(int, int, int, int);

int main()
{
    int cost, dollars, bananas;
    cin>>cost>>dollars>>bananas;

    int max = cost * bananas;

    cout<<loan(max, cost, dollars, bananas)<<endl; 
    return 0;
}

int loan(int max, int k , int n , int w)
{
    if(w == 0)
    {
        if(n >= 0)
        {
            return 0;
        }
        else
        {
            
        return abs(n);
        }
    }
    else
    {
        return loan(max - k, k, n - max, w - 1);
    }
}

# include <iostream>
# include <math.h>

using namespace std;

int main()
{
    double m, n, a; 
    cin>>m>>n>>a;

    long long width, length;

    width = ceil(m / a);
    length =ceil(n / a);
    
    cout<<width * length<<endl;

    return 0;
}
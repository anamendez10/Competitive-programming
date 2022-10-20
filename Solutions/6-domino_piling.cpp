# include <iostream>

using namespace std;

int main()
{
    int m, n, answer;
    cin>>m>>n;

    if(m % 2 == 0)
    {
        answer = (m / 2) * n;
    }
    else if(n % 2 == 0)
    {
        answer = (n / 2) * m;
    }
    else
    {
        answer = ((m / 2) * n) + (n / 2);
    }

    cout<<answer;

    return 0;
}
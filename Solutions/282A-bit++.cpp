# include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string operation;
    int x = 0;

    for(int i = 0; i < n; i++)
    {
        cin>>operation;
        if(operation[1] == '+')
        {
            x = x + 1;
        }
        else if(operation[1] == '-')
        {
            x = x -1;
        }
    }

    cout<<x;

    return 0;
}
# include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        int a, b, c;
        cin>>a;
        cin>>b;
        cin>>c;

        int ones = 0;

        if(a == 1)
        {
            ones++;
        }
        
        if(b == 1)
        {
            ones++;
        }
        
        if(c == 1)
        {
            ones++;
        }

        if(ones == 2 || ones == 3)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
# include <iostream>
# include <cstring>
 
using namespace std;
 
int main()
{
    int min = 0; 

    int length;
    cin>>length;

    string colors;
    cin>>colors;
 
    for(int i = 0; i < length; i++)
    {
        if(colors[i] == colors[i + 1])
        {
            min += 1;
        }
    }

    cout<<min<<endl;

    return 0;
}
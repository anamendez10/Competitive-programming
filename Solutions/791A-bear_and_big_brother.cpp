# include <iostream>
# include <cstring>
 
using namespace std;
 
int main()
{
    int years = 0;

    int limak, bob;
    cin>>limak>>bob;

    while(limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        years += 1;
    }

    cout<<years<<endl;

    return 0;
}
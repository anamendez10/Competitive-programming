# include <iostream>
# include <cstring>
# include <cmath>
 
using namespace std;

int main()
{ 
    int friendshome, steps, leftover;
    cin>>friendshome;
    
    if(friendshome >= 1 && friendshome <= 5)
    {
        cout<<"1"<<endl;
    }
    else
    {
        if(friendshome % 5 == 0)
        {
            steps = floor(friendshome / 5);
        }
        else
        {
            steps = floor(friendshome / 5) + 1;
        }
        cout<<steps<<endl;
    }

    return 0;
}

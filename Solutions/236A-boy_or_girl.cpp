# include <iostream>
# include <cstring>
# include <vector>
# include <algorithm>

using namespace std;

int main()
{
    string user;
    cin>>user;

    vector<char> letters;

    for(int i = 0; i < user.length(); i++)
    {
        if(letters.empty())
        {
            letters.push_back(user[i]);
        }
        else
        {
            if(*find(letters.begin(), letters.end(), user[i]) != user[i])
            {
                letters.push_back(user[i]);
            }
        }
    }

    if(letters.size() % 2 == 1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    return 0;
}
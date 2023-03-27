# include <iostream>
# include <cstring>

using namespace std;

int main()
{
    string str1;
    cin>>str1;
    
    string str2;
    cin>>str2;

    int counter = 0;
    int answer;

    for(int i = 0; i < str1.length(); i++)
    {
        str1[i] = tolower(str1[i]);  
        str2[i] = tolower(str2[i]); 

        if(str1[i] == str2[i])
        {
            counter = counter + 1;
        }
        else
        {
            if(str1[i] < str2[i])
            {
                answer = -1;
                break;
            }
            else if(str2[i] < str1[i])
            {
                answer = -2;
                break;
            }
        }
    }    

    if(answer == -1)
    {
        cout<<"-1";
    }
    else if(answer == -2)
    {
        cout<<"1";
    }
    else if(counter == str1.length() && counter == str2.length())
    {
        cout<<"0";
    }

    return 0;
}
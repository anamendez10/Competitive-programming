# include <iostream>
# include <cstring>

using namespace std;

int main()
{
    string word;
    cin>>word;

    string new_word;

    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] != 'a' && word[i] != 'A' && word[i] != 'e' && word[i] != 'E' && word[i] != 'i' && word[i] != 'I' && word[i] != 'o' && word[i] != 'O' && word[i] != 'y' && word[i] != 'Y' && word[i] != 'u' && word[i] != 'U')
        {
            new_word = new_word + ".";
            new_word = new_word + (char) tolower(word[i]);
        }
    }

    cout<<new_word<<endl;
    
    return 0;
}
# include <iostream>
# include <string.h>

using namespace std;

int main()
{
    int  n;
    cin>>n;

    string cadena;
    int counter; 
    for(int i = 0; i < n; i++)
    {
        cin>>cadena;

        if(cadena.size() > 10)
        {
            for(int i = 1; i < cadena.size() - 1; i++)
        {
            counter++;
        }
        cout<<cadena[0];
        cout<<counter;
        cout<<cadena[cadena.size() - 1]<<endl;
        counter = 0;
        }
        else
        {
            cout<<cadena<<endl;
        }
    }
    return 0;
}
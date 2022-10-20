# include <iostream>

using namespace std;

int main()
{
    int n, k, a;
    cin>>n>>k;

    int scores[n];
    int counter = 0;
    
    for(int i = 0; i < n; i++) // add the number to the array
    {
        cin>>a;
        scores[i] = a;
    }
    
    int constante = k;
    for(int i = 0; i < k; i++) // see if k can be bigger
    {
        if(scores[constante - 1] == scores[k])
        {
            k = k + 1;
        }
    }

    for(int i = 0; i < k; i++) // plus counter under the conditions of the if
    {
        if(scores[i] >= scores[k - 1] && scores[i] > 0)
        {
            counter = counter + 1;
        }
    } 

    cout<<counter;

    return 0;
}
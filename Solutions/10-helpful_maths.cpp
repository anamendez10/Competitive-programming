# include <iostream>
# include <cstring>

using namespace std;

int main()
{
    string operation;
    cin>>operation;
    
    for(int j = 0; j < operation.size(); j += 2)
    {
        for(int i = 0; i < operation.size() - 1; i += 2)
        {
            if(operation[i] > operation[i + 2])
            {
                swap(operation[i], operation[i + 2]);
            }
        }
    }

    cout<<operation<<endl;
    

    return 0;
}
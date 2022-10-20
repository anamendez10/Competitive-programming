# include <iostream>

using namespace std;

int main()
{
    int length = 5;
    int matrix[length][length];
    int x, y;


    for(int i = 0; i < length; i++)
    {
        cin>>matrix[i][0]>>matrix[i][1]>>matrix[i][2]>>matrix[i][3]>>matrix[i][4];
    }

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if(matrix[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    
    int answer = 0;
    if(x >= 2 && y >= 2) // because if x or y is less the will be wrong
    {
        answer = (x - 2) + (y - 2);
    }
    else if(x < 2 && y >= 2) // same thing for the other if's
    {
        answer = (2 - x) + (y - 2);
    }
    else if(x >= 2 && y < 2)
    {
        answer = (x - 2) + (2 - y);
    }
    else if(x < 2 && y < 2)
    {
        answer = (2 - x) + (2 - y);
    }
    
    cout<<answer<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row =0;row<n;row++)
    {char ch;
        for(int col = 0; col<row+1;col++)
        {
            int number = col+1;
            ch = number+'A'-1;
            cout<<ch;
        }

        for(char alphbate =ch; alphbate>'A';){
        alphbate = alphbate-1;
        cout<<alphbate;
        }
        cout<<endl;
    }
}

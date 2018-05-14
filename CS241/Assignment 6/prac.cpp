#include <iostream>

using namespace std;

int matrix[4][4];

int main()
{
    // asigning values
    for(int x=0;x<4;x++)
    {
        for(int y=0;y<4;y++)
        {
            matrix[x][y]=1;
        }
    }

    // showing the matrix on the screen

    for(int x=0;x<4;x++)  // loop 3 times for three lines
    {
        //for(int y=0;y<4;y++)  // loop for the three elements on the line
        //{
            cout<<matrix[x][x+1];  // display the current element out of the array
        //}
    cout<<endl;  // when the inner loop is done, go to a new line
    }
    return 0;  // return 0 to the OS.
}

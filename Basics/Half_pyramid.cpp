#include <iostream>
using namespace std;
 
int main()
{
    int rows = 5;
 
    // first for loop is used to identify number of rows
    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= i; j++) {
           
            // printing the required pattern
            cout << "* ";
        }
        cout << "\n";
        //end
        cout << "bye";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    kljkjl
    kljlaf
    klafdlj
    asdkfljdsa
    kljsad
    toall time MINGW_HAS_SECURE_API
    what is this 
    you nkn===kjk adjflkjdsfkj
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    // sample output
    // Enter the number of rows:5
    //   * 
    //**** */
}
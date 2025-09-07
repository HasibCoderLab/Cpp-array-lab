// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [4]
//               Want    : InputArr*2.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5  numbers ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;

    return 0;
}

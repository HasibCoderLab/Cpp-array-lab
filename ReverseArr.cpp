// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [6]
//               Want    : ReverseArr
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 3, 6, 1};
    cout << "Array in reverse: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

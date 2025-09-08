// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [9]
//               Want    : SizeOf.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, -2, 2, 4, 65, 873, 5, 1 - 1, 23, 9, -10};
    int n = sizeof(arr) / 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << " ";
    return 0;
}
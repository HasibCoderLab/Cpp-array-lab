// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [10]
//               Want    : MaxininArry.cpp
// ================================================
#include <iostream>
using namespace std;
int main(){
int arr[] = {2,4,3,4,-1,5,6,3,};
     int n = sizeof(arr) / 4 ;
     int mx = arr[0];
     for (int i = 1; i < n; i++)
     {
       if (arr[i]>mx)
       {
       mx=arr[i];
       }
       
     }cout<<mx <<endl;;
     
    return 0;
}
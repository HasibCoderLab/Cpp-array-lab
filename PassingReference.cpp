// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [7]
//               Want    : PassingReference
// ================================================
#include <iostream>
using namespace std;
void change(int x[]){
    x[0] = 10;

}
int main(){
   int arr[4] = {1,2,3,4};
   for (int i = 0; i <=4; i++)
   {
   cout<<arr[i] <<" ";
   }cout<< endl;
   change(arr) ;
   for (int i = 0; i <=4; i++)
   {
   cout<<arr[i] << " " ;
   }cout<<endl;
   
   
    return 0;
}
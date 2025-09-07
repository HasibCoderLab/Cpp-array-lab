// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [4]
//               Want    :ChangeInputArr*2.cpp               
// ================================================
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<< "Enter 5 numbers " ;
    for(int i = 0 ;i<5 ; i++){
        cin>>arr[i];
    }
    for (int i = 0; i <5; i++)
    {
       cout<<arr[i] <<" " ;
    }cout<<endl;
         arr[0] = 100;
    for (int i = 0; i <5; i++)
    {
       cout<<arr[i] <<" " ;
    }
    
    
    return 0 ;
}


// ================================================
//               Language: C++ / Cpp
//               Topic   : [Array]
//               Problem :👉👉 [2]
//               Want    : StringNames        
// ================================================
#include <iostream>
using namespace std;
int main(){
    string  names [] = {"coder" , "Programmer" , "Cyber Expart "};
         int size = sizeof(names) / sizeof(names[0]) ;
    for (int i = 0; i <size; i++)
    {
      cout<<names[i] <<" "  <<endl ; 
    }
    
    return 0 ;

}



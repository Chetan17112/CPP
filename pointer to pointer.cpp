#include <iostream>
#include<vector>
using namespace std;

int main() {

        int a = 10;
        int* p = &a;  //pointer 
        int** q = &p; // pointer to pointer 
 
        
        cout<<q<<endl; 
        cout<<p<<endl; 
        cout<<&a<<endl; 
        
        cout<<endl;
        
        cout<<**q<<endl; //acess the variable of a;
        cout<<*q<<endl; //storing adress of a;
        cout<<q<<endl; //storing adress of p;
    return 0;
}

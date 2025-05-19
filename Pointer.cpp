#include <iostream>
using namespace std;

int main () {
    string camera = "Canon";   //assign variable name
    string* ptr = &camera;  //assign ptr address using &

    cout << camera << "\n";
    cout << ptr << "\n"; 
    cout << *ptr << "\n";     //dereference

}
#include <iostream>
using namespace std;

int main () {

    string Camera = "Nikon";
    string &device = Camera;

    cout << Camera << "\n";
    cout << device << "\n";
}
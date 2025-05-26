#include <iostream>
#include <list>
using namespace std;

int main () {
    list<string> camera = {"nikon", "fujifilm", "canon", "hassenblad"};

    for (string i : camera) {
        cout << i << "\n";
    }
    return 0;
}
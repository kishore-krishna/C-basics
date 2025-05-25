#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<string> camera = {"nikon", "fujifilm", "canon", "hassenblad"};

for (string i : camera) {
    cout << i << "\n";
}
return 0;
}


#include <iostream>
#include <queue>

using namespace std;

int main () {
    queue<string> camera;

    camera.push("nikon");
    camera.push("canon");
    camera.push("Panasonic");

    cout << camera.front() << "\n";
    cout << camera.back() << "\n";
    cout << camera.size();
    return 0;
}

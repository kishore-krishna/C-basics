#include <iostream>
using namespace std;

int main (){
    struct {
        int pixel;
        string camera;
    } Photography;

    Photography.pixel = 40;
    Photography.camera = "Nikon";

    cout << Photography.pixel << "\n";
    cout << Photography.camera << "\n";

}
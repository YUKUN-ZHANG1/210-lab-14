// COMSC-210 | Lab 14: Color Class | Yukun Zhang
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
#include "Color.cpp"

// Main function to test the Color class
int main(){
    // Creating Color objects
    Color color1(255, 0, 0);
    Color color2(0, 255, 0);
    Color color3(0, 0, 255);
    Color color4(0, 23, 15);
    Color color5(55, 201, 20);
    Color color6(149, 20, 32);
    Color color7(34, 194, 253);

    // Printing color values
    cout << "Color 1 (Red):" << endl;
    color1.print();
    cout << endl << "Color 2 (Green):" << endl;
    color2.print();
    cout << endl <<  "Color 3 (Blue):" << endl;
    color3.print();
    cout << endl <<  "Color 4:" << endl;
    color4.print();
    cout << endl <<  "Color 5:" << endl;
    color5.print();
    cout << endl <<  "Color 6:" << endl;
    color6.print();    
    cout << endl <<  "Color 7:" << endl;
    color7.print();    

    return 0;
}

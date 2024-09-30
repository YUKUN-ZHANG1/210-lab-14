// COMSC-210 | Lab 14: Color Class | Yukun Zhang
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>

using namespace std;

class Color{
    private:    
    int redValue; // Represents red color value (0-255)
    int greenValue; // Represents green color value (0-255)
    int blueValue; // Represents blue color value (0-255)

    public:
    // Constructor to initialize color values
    // redValue, greenValue, blueValue: integers for RGB components (default is 0)
    Color(int redValue = 0, int greenValue = 0, int blueValue = 0) 
        :redValue(redValue), greenValue(greenValue), blueValue(blueValue){}

    // Setters
    // Setter for red color component
    // arguments: redValue - integer representing the red component
    void setRedValue(int redValue){this->redValue = redValue;}
    // Setter for green color component
    // arguments: greenValue - integer representing the green component
    void setGreenValue(int greenValue){this->greenValue = greenValue;}
    // Setter for blue color component
    // arguments: blueValue - integer representing the blue component
    void setBlueValue(int blueValue){this->blueValue = blueValue;}

    // Getters
    // Getter for red color component
    // returns: integer value of the red component
    int getRedValue()const{return redValue;}
    // Getter for green color component
    // returns: integer value of the green component
    int getGreenValue()const{return greenValue;}
    // Getter for blue color component
    // returns: integer value of the blue component
    int getBlueValue()const{return blueValue;}

    // Print the color values (RGB) in a formatted way
    void print()const{
        cout<<"R :"<<setw(4)<<redValue<<endl;
        cout<<"G :"<<setw(4)<<greenValue<<endl;
        cout<<"B :"<<setw(4)<<blueValue<<endl;
    }
};
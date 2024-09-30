#include <iostream>
#include <iomanip>

using namespace std;

class Color{
    private:    
    int redValue;
    int greenValue;
    int blueValue;
    
    public:
    Color(int redValue = 0, int greenValue = 0, int blueValue = 0) 
        :redValue(redValue), greenValue(greenValue), blueValue(blueValue){}

    void setRedValue(int redValue){this->redValue = redValue;}
    void setGreenValue(int greenValue){this->greenValue = greenValue;}
    void setBlueValue(int blueValue){this->blueValue = blueValue;}

    int getRedValue()const{return redValue;}
    int getGreenValue()const{return greenValue;}
    int getBlueValue()const{return blueValue;}

    void print()const{
        cout<<"R :"<<setw(4)<<redValue<<endl;
        cout<<"G :"<<setw(4)<<greenValue<<endl;
        cout<<"B :"<<setw(4)<<blueValue<<endl;
    }
};
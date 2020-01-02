#include <iostream>
using namespace std;
class Box{
    public:
    /* Constructor decleration with default values */
    Box(double l=1,double w=1,double h = 1){
        length = 1;
        width = w;
        height = h;
    };
    // l -> Length w -> width h -> height
    //member function
    double volume(){return length * width * height;}
    private:
    //member data
    double length;
    double width;
    double height;
};

//main programm 
int main(int argc, char **argv){
    Box b1(10,5,10);
    cout << "The volume is " << b1.volume() << endl;
    Box *pb=new Box();
    cout << "The volume is " << pb -> volume() << endl;
    delete pb;
    return 0;
}

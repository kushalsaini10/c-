#include<iostream>
using namespace std;

class box
{
public:
    static int objcount;  // static variable to count objects
    box(double l = 2.0, double b = 2.0, double h = 2.0)  // Constructor with default parameters
    {
        cout << "Constructor called" << endl;
        length = l;
        breadth = b;
        height = h;
        objcount++;  // Increment object count when a new object is created
    }
    double volume()
    { 
        return length * breadth * height;  // Return the volume of the box
    }

private:
    double height;
    double breadth;
    double length;
};

// Initialize the static member variable
int box::objcount = 0;

int main()
{
    box box1(3.3, 1.2, 1.5);  // Create box1 object
    box box2(8.5, 6.0, 2.0);  // Create box2 object
    cout << "Total objects: " << box::objcount << endl;  // Output total number of objects
    return 0;
}

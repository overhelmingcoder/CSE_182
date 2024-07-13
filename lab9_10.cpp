
// a C++ program to find the diameter, circumference, and area of a circle using functions.
#include <iostream>
using namespace std;

void diameter(int r)
{
    int d;
    d=2*r;
    cout<<"Diameter: "<< d<<endl;
}
void circumference(int r)
{
    float c;
    c=2*3.1416*r;
    cout<<"Circumference: "<<c<<endl;
}
void area(int r)
{
    float area;
    area=3.1416*r*r;
    cout<<"Area: "<< area<<endl;
}

int main()
{
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>> radius;
    cout<<endl;

   diameter(radius);
   circumference(radius);
   area(radius);
   return 0;

}

#include <iostream>
#include "box.h"

using namespace std;

// Main function for the program
int main( )
{
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume  of Box2 : " << volume <<endl;
   cout << "Length  of Box2 : " << Box2.getLength() <<endl;
   cout << "Breadth of Box2 : " << Box2.getBreadth() <<endl;
   cout << "Heigth  of Box2 : " << Box2.getHeigth() <<endl;
   
   system("pause");
   
   return 0;
}
#include <iostream>

#define PERIMETER(l,b) (2*l*b)

using namespace std;


int main()
{
    int length,breadth,perimeter;

    cout<<"Enter the length: ";
    cin>>length;

    cout<<"Enter the breadth: ";
    cin>>breadth;

    perimeter= PERIMETER(length,breadth);
    printf("The perimeter of the rectangle is: %d", perimeter);

    return 0;
}
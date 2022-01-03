#include <iostream>

using namespace std;

class Rectangle {

public:
    Rectangle();
    Rectangle(int w,int l);


    void setWidth( int width);


    void setLength( int length);

    int getArea()
    {
        return width * length;
    }

private:
    int width;
    int length;
};

Rectangle::Rectangle()
{
    clog << "Default Constructor called" <<endl;
    this->length = 5;
    this->width = 5;
}

/*
Rectangle::Rectangle(int w, int l)
{
    clog << "Custom Constructor called" <<endl;
    this->width = w;
    this->length = l;
}
*/

Rectangle::Rectangle(int w, int l):width(w),length(l)
{
    clog << "Custom Constructor called" <<endl;
}


void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}


//Para class

class Para
{

public:
    Para(int w, int l, int h):r(w,l),height(h)
    {
        cout << "Para Constructor Called";
    }

    int getVolume()
    {
        return r.getArea() * height;
    }

private:
    Rectangle r;
    int height;

};



int main()
{
    Rectangle r;
    Rectangle r1(20,20);
    Para p ( 30,30,30);
    cout << endl;
    cout << "The area of the rectangle is : " << r1.getArea() <<endl;
    cout << "The volume of our shape is : " << p.getVolume() <<endl;
    return 0;
}

#include <iostream>
#define pi 3.14

using namespace std;

class Circle{
float radius;
public:
    void setRadius(float r)//definition
    {
        radius = r;
    }
 float Area(void);//prototype
 float circumference(void);
};

//definition for functions
float Circle::Area(void)
{
    return pi * radius * radius;
}
float Circle::circumference(void)
{
    return 2 * pi * radius;
}

int main()
{
   Circle circle1;
   Circle circle2;
   circle1.setRadius(7.0);
   cout<<"Area:"<<circle1.Area()<<endl;
   cout<<"Circumference:"<<circle1.circumference()<<endl;
   circle2.setRadius(14.0);
   cout<<"Area:"<<circle2.Area()<<endl;
   cout<<"Circumference:"<<circle2.circumference()<<endl;
    return 0;
}

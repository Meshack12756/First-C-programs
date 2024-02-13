#include <iostream>

using namespace std;

class Person{
char name[45];
int age;
public:
void setDetails(void); //prototype
void DisplayDetails(void);

};
// Definition
void Person::setDetails(void){
cout<<"Enter your name:"<<endl;
cin.getline(name, 45);
cout<<"Enter your age:"<<endl;
cin>>age;
}
void Person::DisplayDetails(void){
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
}
int main()
{
   Person P; //object definition
   P.setDetails();
   P.DisplayDetails();
    return 0;
}

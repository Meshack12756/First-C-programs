#include <iostream>

using namespace std;
class time{
int hours, minutes, seconds;
public:
    void gettime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
   void puttime(void)
   {
       cout<<hours<<" hours  ";
       cout<<minutes<<" minutes and ";
       cout<<seconds<<" seconds"<<"\n";
   }
   void sum(time,time);
};
void time::sum(time t1, time t2)
  {
    seconds = seconds + t1.seconds + t2.seconds;
    minutes = seconds/60;
    seconds = seconds%60;
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours + t1.hours + t2.hours;
  }

int main()
{
   time T1,T2,T3;//three objects created: two to pass as arguments and T3 invokes function sum
   T1.gettime(2,45,30);
   T2.gettime(3,45,40);
   T3.sum(T1,T2);
   cout<<"T1= ";T1.puttime();
   cout<<"T2= ";T2.puttime();
   cout<<"T3= ";T3.puttime();

    return 0;
}

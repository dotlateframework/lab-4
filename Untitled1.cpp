#include <iostream>
#include <iomanip>

using namespace std;


/*

Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute,
and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects
and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.
*/

class Time{


  public :
     int hours,mins,sec ;
    Time()
    {
        hours =0;
        mins=0;
        sec=0;
    }

    Time(int h,int m, int s)
    {
        hours = h;
        mins=m;
        sec=s;
    }

    void showtime()
    {

        cout<<"24hrs format: "<<hours<<"/"<<mins<<"/"<<sec<<endl;
        if (hours>12)
        {
          cout<<"12hrs format: "<<hours-12<<"/"<<mins<<"/"<<sec<<endl;
        }


    }
     int addtime(Time t3,Time t4)
    {

        int x;
        x=t3.hours*3600+t4.hours*3600 + t3.mins*60+t4.mins*60 + t3.sec+t4.sec;
        return x;


    }




};

int main ()
{ char ch;
  cout<<"Do you want to initialize time to 0 ?(y/n)"<<endl;
  cin>>ch;
  if (ch=='y')
  {
    Time t1;
    t1.showtime();

  }
  else
  {   int h,m,s;
      cout<<"enter the values in format hh/mm/ss"<<endl;
      cin>>h>>m>>s;
      Time t2(h,m,s);
      t2.showtime();

  }
  Time t3,t4;
  t3.hours=1;
  t3.mins=2;
  t3.sec=30;
  t4.hours=5;
  t4.mins=5;
  t4.sec=60;
  int total = t3.addtime(t3,t4);
  int a,b,c;
  a= total/3600;
  b= (total%3600)/60;
  c=  (total%60);
  cout<<a<<"/"<<b<<"/"<<c;







    return 0;
}


#include<iostream>
using namespace std;

class time
{
    private:
    
    int hour,minute;
    
    void getdata()
    {
    cout<<"        enter time "<<endl;
    cout<<"hours = ";
    cin>>hour;
    cout<<"minute =";
    cin>>minute;
    }
    
friend void add_time(time t1, time t2);

};
void add_time(time t1, time t2)
{
int minute = t1.minute + t2.minute;
int hour = t1.hour + t2.hour + minute/60;
minute %=60;
cout<<"your time 1 is:"<<t1.hour<<":"<<t1.minute<<endl;
cout<<"your time 2 is: "<<t2.hour<<":"<<t2.minute<<endl;
cout<<" both time add...."<<endl;
cout<<"after adding both time"<<hour<<":"<<minute<<endl;

}

}
int main()
{
    time t1,t2;
     t1.getdata();
     t2.getdata();
     add_time(t1,t2);
    return 0;
}

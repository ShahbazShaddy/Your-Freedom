#include <iostream>
using namespace std;
main()
{
    int examHour, examMinute, studentHour,studentMinute, examTime, studentTime, extraMinute, extraHour;
    cout<<"Exam Starting Time(Hours): ";
    cin>>examHour;
    cout<<"Exam Starting Time(Minutes): ";
    cin>>examMinute;
    cout<<"Student Arriving Time(Hours): ";
    cin>>studentHour;
    cout<<"Student Arriving Time(Minutes): ";
    cin>>studentMinute;
    examTime=(examHour*60)+examMinute;
    studentTime=(studentHour*60)+studentMinute;
    if(examTime==studentTime)
    {
        cout<<"On Time!";
    }
    if(examTime>studentTime&&(examTime-studentTime)<=30)
    {
        extraMinute=examTime-studentTime;
        cout<<"On Time!"<<endl<<extraMinute<<" minutes before Start!";
    }
    if(examTime>studentTime&&((examTime-studentTime)>30)&&((examTime-studentTime)<60))
    {
        extraMinute=examTime-studentTime;
        cout<<"Early!"<<endl<<extraMinute<<" minutes before Start!";
    }
    if(examTime>studentTime&&(examTime-studentTime)>=60)
    {
        extraMinute=examTime-studentTime;
        extraHour=extraMinute/60;
        extraMinute=extraMinute%60;
        cout<<"Early!"<<endl<<extraHour<<":"<<extraMinute<< " Hours before Start!";
    }
    if(examTime<studentTime&&(studentTime-examTime)<60)
    {
        extraMinute=studentTime-examTime;
        cout<<"Late!"<<endl<<extraMinute<<" minutes after Start!";
    }
    if(examTime<studentTime&&(studentTime-examTime)>=60)
    {
        extraMinute=studentTime-examTime;
        extraHour=extraMinute/60;
        extraMinute=extraMinute%60;
        cout<<"Late!"<<endl<<extraHour<<":"<<extraMinute<< " Hours after Start!";
    }
}
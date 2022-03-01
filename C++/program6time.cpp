#include<iostream>
using namespace std;
class Time
{int hour;
int minute;
int sec;
public:
void gettime(int h,int m,int s)
{ 
hour=h;
minute=m;
sec=s;
}

void puttime()
{cout<<hour<<" hours:"<<minute<<" minutes: "<<sec<<" seconds "<<endl;
}
void addtime(Time,Time);
};
void Time::addtime(Time t1,Time t2)
{
sec=t1.sec+t2.sec;
minute=t1.minute+t2.minute +sec/60;;
hour= t1.hour+t2.hour + (minute/60);
minute %=60;
sec %=60;
}
int main()
{Time T1,T2,T3;
int H,M,S;
cout<<"Enter first time:\n";
cout<<"Enter hour:";
cin>>H;
cout<<"Enter minute:";
cin>>M;
cout<<"Enter seconds:";
cin>>S;
T1.gettime(H,M,S);
cout<<"Enter second time:\n";
cout<<"Enter hour:";
cin>>H;
cout<<"Enter minute:";
cin>>M;
cout<<"Enter seconds:";
cin>>S;
T2.gettime(H,M,S);
T3.addtime(T1,T2);
cout<<"Time 1:"<<endl;
T1.puttime();
cout<<"Time 2:"<<endl;
T2.puttime();
cout<<"Resultant time:"<<endl;
T3.puttime();
return 0;
}

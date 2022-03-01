#include<iostream>
using namespace std;
class complex
{float a;
float b;
public:
void input(float real,float imag)
{a=real;
b=imag;
}
friend complex add(complex,complex);
void display(complex);
};
complex add(complex c1,complex c2)
{complex c3;
c3.a=c1.a+c2.a;
c3.b=c1.b+c2.b;
return c3;
}
void complex::display(complex c)
{cout<<c.a<<" +j"<<c.b<<"\n";
}
int main()
{complex C1,C2,C3;
float x1,y1,x2,y2;
cout<<"First complex number:\n";
cout<<"Enter real part of the complex number:";
cin>>x1;
cout<<"Enter imaginary part of the complex number:";
cin>>y1;
C1.input(x1,y1);
cout<<"Second complex number\n";
cout<<"Enter real part of the complex number:";
cin>>x2;
cout<<"Enter imaginary part of the complex number:";
cin>>y2;
C2.input(x2,y2);
C3=add(C1,C2);
cout<<"C1=";
C1.display(C1);
cout<<"C2=";
C2.display(C2);
cout<<"C3=";
C3.display(C3);
return 0;
}



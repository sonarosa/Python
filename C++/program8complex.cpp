#include<iostream>
using namespace std;
class complex
{float r;
float i;
public:
complex(){}
complex(float x)
{r=i=x;
}
complex(float real, float imag)
{r=real;
i=imag;
}
friend complex sum(complex, complex);
friend void display(complex);
};
complex sum(complex c1,complex c2)
{ complex c3;
c3.r=c1.r+c2.r;
c3.i=c1.i+c2.i;
return c3;
}
void display(complex c)
{cout<<c.r<<"+"<<c.i<<"j"<<endl;
}
int main()
{ complex X(2,3);
complex Y(4.1);
complex Z;
Z=sum(X,Y);
cout<<"X=";display(X);
cout<<"Y=";display(Y);
cout<<"Sum of the two complex numbers:"<<endl;
display(Z);
return 0;
}

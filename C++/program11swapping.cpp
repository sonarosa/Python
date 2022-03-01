#include<iostream>
using namespace std;
class class_2;
class class_1
{int v1;
public:
void input_data()
{cout<<"Enter a value of variable 1:"<<endl;
cin>>v1;

}
void display()
{cout<<"Variable 1:"<<v1<<"\n";
}
friend void swap(class_1 &,class_2 &);
};
class class_2
{int v2;
public:
void input_data()
{ cout<<"Enter a value for variable 2:"<<endl;
  cin>>v2;
}
void display()
{cout<<"variable 2:"<<v2<<"\n";
}
friend void swap(class_1 &,class_2 &);
};
void swap(class_1 &x,class_2 &y)
{int temp;
temp=x.v1;
x.v1=y.v2;
y.v2=temp;
}
int main()
{class_1 C1;
class_2 C2;
C1.input_data();
C2.input_data();
cout<<"\nValues before swapping:\n";
C1.display();
C2.display();
swap(C1,C2);
cout<<"\nValues after swapping:\n";
C1.display();
C2.display();

return 0;
}

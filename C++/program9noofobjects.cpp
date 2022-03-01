#include<iostream>
using namespace std;
class object
{int a;
static int count;
public:
void setvalue()
{a=++count;
}
void display()
{cout<<"object number:"<<a<<endl;
}
static void showcount()
{cout<<"Count of objects found:"<<count<<endl;
}
};
int object::count;
int main()
{object O1,O2;
O1.setvalue();
O2.setvalue();
object::showcount();
O1.display();
O2.display();
return 0;
}

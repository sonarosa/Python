#include<iostream>
using namespace std;
int count=0;
class execute
{
public:
execute()
{count++;
cout<<"Object "<<count<<" created \n";
}
~execute()
{cout<<"Object "<<count<<" is destroyed \n";
count--;
}
};
int main()
{ cout<<"Entering in main function\n";
execute o1,o2,o3;
return 0;
}

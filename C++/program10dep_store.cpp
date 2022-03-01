#include<iostream>
using namespace std;
const int n=20;
class depstore
{int code_no[n];
float price[n];
int count;
public:
depstore()
{count=0;
}
void input_item();
void sum();
void remove_item();
void display();
};
void depstore::input_item()
{cout<<"Enter item code:";
cin>>code_no[count];
cout<<"Enter cost of the item:";
cin>>price[count];
count++;
}
void depstore::sum()
{float sum=0;
for(int i=0;i<count;i++)
sum+=price[i];
cout<<"\nTotal price of all items:"<<sum;
cout<<endl;
}
void depstore::remove_item()
{int r;
cout<<"Enter the item code :\n";
cin>>r;
for(int i=0;i<count;i++)
if(code_no[i]==r)
price[i]=0;
}
void depstore::display()
{cout<<"\n____________________________________";
 cout<<"\n| CODE            |PRICE            |";
 cout<<"\n|_________________|_________________|";
for(int i=0;i<count;i++)
{cout<<"\n|"<<code_no[i]<<" |"<<price[i]<<"  |";
 cout<<"\n|__________________________________|";
}
cout<<endl;
}
int main()
{depstore item;
int ans;
do
{cout<<"\nWelcome to departmental store\n";
 cout<<"1.Add an item\n";
 cout<<"2.Display total price\n";
 cout<<"3.Delete an item\n";
 cout<<"4.Display all items\n";
 cout<<"5.Quit\n";
 cout<<"Enter your choice:\n";
 cin>>ans;
 switch(ans)
 {case 1:item.input_item();
         break;
 case 2:item.sum();
        break;
 case 3:item.remove_item();
        break;
 case 4:item.display();
        break;
 case 5:cout<<"Thank you!\n";
       break;
 default:cout<<"Error!Try again\n";
 }
}while(ans!=5);
return 0;
}

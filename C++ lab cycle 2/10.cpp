#include<iostream>
using namespace std;
const int num = 20;
class depstore
{
    int code_no;
    float price;
    float tot_price = 0;
    int quan;
    char iname[20];
public:
    depstore()
    {
        code_no = 0;
        price = 0.0;
    }
    void input_item();
    void disp_stock();
    void remove_item(int);
    //void display();
    void pur_item(int, int);
    void disp_item();
};
void depstore::input_item()
{
    cout << "Enter item code:";
    cin >> code_no;
    cout << "Enter item name:\n";
    cin >> iname;
    cout << "Enter quantity to be added\n";
    cin >> quan;
    cout << "Enter cost of the item:";
    cin >> price;

}
/*void depstore::sum()
{float sum=0.0,total=0.0;
sum+=price;
cout<<"\nTotal price of all items:"<<sum;
cout<<endl;
}*/
void depstore::remove_item(int r)
{
    if (code_no == r)
        price = 0;
    code_no = 0;
    quan = 0;
}
void depstore::disp_stock()
{
    cout << "CODE:" << code_no << "\nNAME OF THE ITEM:" << iname << " \n" << "PRICE :" << price << "\nQUANTITY:" << quan << "\n";
    cout << endl;
}
void depstore::pur_item(int q, int code)
{
    if (code_no == code)
    {
        {if (quan <= q) {
            cout << "\n\n The quantity exceeds the stock for item " << code_no << "\n\n";
        }

        }
    }
    else
    {
        quan = quan - q;
        tot_price = price * q;
    }
}
void depstore::disp_item()
{
    cout << "-------------------------------\n";
    cout << " |CODE:           " << code_no << "|\n";
    cout << " |NAME:           " << iname << "  |\n";
    cout << " |QUANTITY:        " << quan << "  |\n";
    cout << " |PRICE:          " << price << "  |\n";
    cout << "-------------------------------\n";
}
int main()
{
    depstore item[num];
    int ans, n;
    cout << "Enter number of items:\n";
    cin >> n;
    do
    {
        cout << "\nWelcome to departmental store\n";
        cout << "1.Add an item\n";
        cout << "2.Display all items\n";
        cout << "3.Delete an item\n";
        cout << "4.Purchase items\n";
        cout << "5.Generate bill\n";
        cout << "6.Quit\n";
        cout << "Enter your choice:\n";
        cin >> ans;

        switch (ans)
        {
        case 1:for (int i = 0; i < n; i++)
        {
            cout << "Enter item " << i + 1 << ":" << endl;
            item[i].input_item();

        }
              break;
        case 2:cout << "Displaying all items\n";
            for (int i = 0; i < n; i++)
                item[i].disp_stock();
            break;
            /*for(int i=0;i<n;i++)
            {item[i].sum();
            }
            break;*/
        case 3:int r;
            cout << "Enter the item code :\n";
            cin >> r;
            for (int i = 0; i < n; i++)
            {
                item[i].remove_item(r);
            }cout << "Item has been removed\n ";
            break;
        case 4:int c, q;
            for (int i = 0; i < n; i++)
            {
                item[i].disp_stock();
            }
            cout << "Enter the item code :\n";
            cin >> c;
            cout << "Enter quantity of item:\n";
            cin >> q;
            for (int i = 0; i < n; i++)
            {
                item[i].pur_item(c, q);
            }
        case 5:cout << "---------PRINT STATEMENT--------\n";
            for (int i = 0; i < n; i++)
            {
                item[i].disp_item();
            }
        case 6:cout << "Thank you!\n";
            break;
        default:cout << "Error!Try again\n";
        }
    } while (ans != 5);
    return 0;
}

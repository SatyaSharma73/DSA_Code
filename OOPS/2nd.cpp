#include <iostream>
#include <string>

using namespace std;

class ITEM
{
    short int code, qty;
    char Iname[20];
    float price, offer;
    void getoffer(int qty)
    {
        offer = (qty <= 50) ? 0 : (qty > 50 and qty <= 100) ? 5
                                                            : 10;
    }

public:
    void getstock()
    {
        cout << "Enter the values for Code,price,QTY,Iname" << endl;
        cin >> code;

        cin >> price >> qty;
        getoffer(qty);
        cin.getline(Iname, 20);
    }
    void showitem();
};

void ITEM::showitem()
{
    cout << "Code : " << code << endl;
    cout << "Iname : " << Iname << endl;
    cout << "Price : " << price << endl;
    cout << "QTY : " << qty << endl;
    cout << "Offer(percentage) : " << offer;
}

int main()
{
    ITEM item1;
    item1.getstock();
    item1.showitem();
    return 0;
}
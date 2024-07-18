#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int ItemPrice[100];
    int counter;

public:
    void inticounter(void) { counter = 0; }
    void getprice(void);
    void displayprice(void);
};
void shop ::getprice(void)
{
    cout << "enter the id of your item number " << counter + 1 << " is" << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item:" << endl;
    cin >> ItemPrice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)

        cout << "the price of the item with id " << itemid[i] << " is" << ItemPrice[i] << endl;
}
int main()
{
    shop dukaan;
    dukaan.inticounter();
    dukaan.getprice();
    dukaan.getprice();
    dukaan.displayprice();

    return 0;
}
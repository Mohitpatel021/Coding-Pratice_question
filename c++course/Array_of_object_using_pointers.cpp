#include <iostream>
using namespace std;
class kirana
{
    int Id;
    float price;

public:
    void set_data(int a, float b)
    {
        Id = a;
        price = b;
    }
    void get_data()
    {
        cout << "The Id of your item is " << Id << endl;
        cout << "The price of your item is " << price << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;

    kirana *ptr = new kirana[size];
    kirana *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of the item is " << i + 1 << endl;
        cin >> p >> q;
        ptr->set_data(p, q);
        ptr++;
    }
   for (int i = 0; i < size; i++)
    {
        cout << "Item number  " << i + 1 << endl;
        ptrtemp->get_data();
        ptrtemp++;
    }

    return 0;
}
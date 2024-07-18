#include <bits/stdc++.h>
using namespace std;
void update(int **p2)
{
    // p2 = p2 + 1;
    //*p2 = *p2 + 1;
    **p2 = **p2 + 1;
}
int main()
{
    /* int value = 5;
     int *ptr = &value;
     int **ptr1 = &ptr;
      cout << "printing value " << value << endl;
      cout << "printing address of value " << &value << endl;
     cout << "printing the content of the pointer " << ptr << endl;
      cout << "printing the address of the pointer " << &ptr << endl;
      cout << "printing the Value that are present in the content of the pointer " << *ptr << endl;
      cout << "printing the content of the ptr1 " << ptr1 << endl;
      cout << "printing the address of the ptr1 " << &ptr1 << endl;
      cout << "printing the content of the address that is stored int the ptr1  " << *ptr1 << endl;
      cout << "printing the address of the ptr1 " << **ptr1 << endl;
     cout << "before" << endl;
     cout << value << endl;
     cout << ptr << endl;
     cout << ptr1 << endl;
     cout << "after" << endl;
     update(ptr1);
     cout << value << endl;
     cout << ptr << endl;
     cout << ptr1 << endl;*/

    int arr[] = {11, 21, 31};

    int *ptr = arr;
    cout << ptr[2] << endl;

    return 0;
}
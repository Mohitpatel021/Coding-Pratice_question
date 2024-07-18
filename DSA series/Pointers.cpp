#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creating null pointer
    /*int n = 3;
    int *ptr3 = 0;
    ptr3 = &n;
    cout << "null pointer" << endl;
    cout << ptr3 << endl;
    cout << *ptr3 << endl;
    cout << "ending of null pointer" << endl;
    int *ptr = &n;
    // creating double pointer.......
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &n << endl;
    cout << n << endl;
    cout << **ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ***ptr2 << endl;
    cout << ***ptr2 << endl;
    cout << &n << endl;
    cout << ptr << endl;
                              // creating void pointer
    void *pointer;
    pointer = &n;
    cout << n << endl;
    cout << pointer << endl;
    cout << &pointer << endl;
   // creating wild pointer
   int *p;
   cout << *p << endl;
   cout << &p << endl;
   // p is not a wild pointer till the p is pointing to the address of the n
   p = &n;
   cout << &n << endl;
   cout << p << endl;


    char a[] = "hello";
    char *p = a;
    cout << a[0] << " " << p[0];


    int arr[10] = {1, 2, 3, 54};
    cout << sizeof(arr) << endl;
    int *p = arr;
    cout << p << endl;
    cout << p + 2 << endl;
    cout << sizeof(&p) << endl;


    int a[20] = {0};
    cout << a << endl;
    cout << &a[0] << endl;
    cout << a[0] << endl;
    int *pointer = a;

    cout << pointer << endl;
    cout << *pointer << endl;
    cout << &pointer << endl;
    */
    // About CHARACTER ARRAY and Pointers

    char ch[6] = "abcde";
    cout << ch << endl;
    cout << &ch << endl;
    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;

    return 0;
}
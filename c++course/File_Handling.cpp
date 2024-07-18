#include <fstream>
#include <iostream>
#include <string>
/*
The useful classes for working with files inC++ are:
1. fstreambase
2. ifstream -->derived from fstreambase
3. ofstream -->derived from fstreambase
*/
// In order work with files inC++,you will have to open it.Primarily,there are2ways to openafile:
// 1. Using the constructor
// 2. Using the member function open()of the class

using namespace std;
int main()
{
  int n;
  char str[100];

  // Opening files using constructor and writing it
  ofstream out("this.txt"); // Write operation
  //cout << "enter size of array:" << endl;
  //cin >> n;
  cout << "enter your name:" << endl;
  gets(str);

  out << str;
  out.close();
  //Opening files using constructor and reading it
  string st2;
  ifstream in("this.txt"); // Read operation
  getline(in, st2);
  cout << st2;
  in.close();
  return 0;
}

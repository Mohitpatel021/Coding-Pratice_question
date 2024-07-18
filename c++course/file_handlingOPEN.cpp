#include<iostream>
#include<fstream>

using namespace std;
int main(){
   ofstream out;
   out.open("this.txt");
   out<<"this is mohit"<<endl;
   out<<"this is mohit"<<endl;
   out<<"this is mohit"<<endl;
   out<<"this is mohit"<<endl;
   out<<"this is mohit"<<endl;

    ifstream in;
    string st;
    in.open("this.txt");
    do
    {
        getline(in,st);
        cout<<st<<endl;;
    }
    while(in.eof()==0);
    
    return 0;
}
#include <iostream>
using namespace std;
int main()
{     
       char a;
       float b,c ;
       cout<<"enter numbers:\n +,-,*,/"<<endl;
       cin>>a;
       cout<<"enter two number:";
       cin>>b>>c ;
       switch(a)
       {
             case '+':
               cout<<b<<"+"<<c<<"="<<b+c;
               break;

            case '-':
                cout<<b<<"-"<<c<<"="<<b-c;
                break;

                case '*':
                cout<<b<<"*"<<c<<"="<<b*c;
                break;
                
                case '/':
                cout<<b<<"/"<<c<<"="<<b/c;
                default :
                cout<<"error"<<endl;
                 }
                       return 0;
                       }
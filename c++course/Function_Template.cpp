#include<iostream>
using namespace std;
template<class S1, class S2>
float funcaverage(S1 a,S2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a=funcaverage(5.4,3.4);
    cout<<a<<endl;
    return 0;
}
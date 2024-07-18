#include <bits/stdc++.h>
using namespace std;
class pets
{
public:
    int age = 26;
};
class dog : public pets
{
public:
    int number_of_dogs = 8;
};
int main()
{

    dog my_dog;
    cout << my_dog.age;
    return 0;
}
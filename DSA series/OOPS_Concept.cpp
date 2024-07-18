#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class hero
{
private:
    int health;
    int age;

public:
    char level;
    char *name = new char[100];
    // This data member is used when the value does not depand on the  object .
    // It belongs to the class
    static int timeToLive;
    // Create a static member function
    static int random()
    {
        return timeToLive;
    }

    int gethealth()
    {
        // it return health
        // also is called getter function
        return health;
    }
    char getlevel()
    {
        // it return leveel
        // also is called getter function
        return level;
    }

    /* void sethealth_and_Level(int h, char ch)
     {
    //This sets the value of the health and the level
    //This function is called setter function
         health = h;
         level = ch;
     }*/
    hero()
    {
        cout << "Default constructor is called " << endl;

        // This is the default constructor
        // Because I have created a paramertrised constructor
        // So the default constructor is deleted
    }
    hero(int health, char level, char name[])
    {
        // Parameterised construction for intitialisation
        cout << "parameterised constructor is called here " << endl;
        this->health = health;
        this->level = level;
        this->name = name;
    }
    hero(hero &temp)
    { // This constructor is called copy constructor .
        // and it is created manually and the default copy constructor is
        //  delete automatically
        // Here the below three line are for deep copying concept
        // created a new arrray and copy the value of the object
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout << "coppy constructor is called" << endl;
        this->level = temp.level;
        this->health = temp.health;
    }
};
// statics data members are intialized outside the class
// syntax=====Data type  class name :: variable_name=value;
int hero::timeToLive = 4;
int main()
{
    // access static  function
    cout << "value of the static variable and access static function=" << hero::random() << endl;
    // access the statics data members like this
    cout << hero::timeToLive << endl;
    // set the name of the hero
    char name[7] = "Mohit";
    // statically created objects
    // set value to the hero
    hero ramesh(10, 'B', name);
    // printing all values of the hero
    cout << ramesh.gethealth() << endl;
    cout << ramesh.getlevel() << endl;
    cout << ramesh.name << endl;
    // created another object of the same class and copy values
    //  Here I was  manually created copy constructor inside the class
    hero R(ramesh);
    // printing rhe values of the another object of the hero class
    cout << R.gethealth() << endl;
    cout << R.getlevel() << endl;
    cout << R.name << endl;
    // changing the first index value of the name array
    ramesh.name[0] = 'R';
    // then printing the values of the objects
    cout << ramesh.gethealth() << endl;
    cout << ramesh.getlevel() << endl;
    cout << ramesh.name << endl;
    // after changing the first index value of the name array
    // printing the values of the objects
    cout << R.gethealth() << endl;
    cout << R.getlevel() << endl;
    cout << R.name << endl;

    /*
     hero *h2 = new hero;

     //dynamically created object
        hero *r = new hero(20, 'C');
        // copy constructor is called for copy the values of ramesh object
        // *r = ramesh;
        cout << r->gethealth() << endl;
        cout << r->getlevel() << endl;


        // Statically allocated the  object
        hero a;
        cout << "Health of the  hero is " << a.gethealth() << endl;
        cout << "Level of the  hero is " << a.getlevel() << endl;
        // Dynamically allocate the object
        hero *b = new hero;
        (*b).sethealth(60);
        (*b).setlevel('A');
        cout << "Health of the  hero is " << (*b).gethealth() << endl;
        cout << "Level of the  hero is " << (*b).getlevel() << endl;
        b->sethealth(60);
        b->setlevel('B');
        // another way to access heath and level of the hero using arrrow operator
        cout << "Health of the  hero is " << b->gethealth() << endl;
        cout << "Level of the  hero is " << b->getlevel() << endl;
    */
    return 0;
}
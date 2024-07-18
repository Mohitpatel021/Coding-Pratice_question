#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;//Do-nothing function------->pure virtual function
};
class CWHvideo : public CWH
{

    float videolength;

public:
    CWHvideo(string s, float r, float vlen) : CWH(s, r)
    {
        title = s;
        rating = r;
        videolength = vlen;
    }
    void display()
    {
        cout << "This is an amazing video tutorial :" << title << endl;
        cout << "Rating: " << rating << " out of 5 star" << endl;
        cout << "vide length of the tutorial is: " << videolength << " minutes" << endl;
    }
};
class CWHtext : public CWH
{

    int words;

public:
    CWHtext(string s, float r, int wlen) : CWH(s, r)
    {
        title = s;
        rating = r;
        words = wlen;
    }
    void display()
    {
        cout << "This is an amazing text tutorial :" << title << endl;
        cout << "Rating: " << rating << " out of 5 star" << endl;
        cout << "Text length of the tutorial is: " << words << " words" << endl;
    }
};
int main()
{string title;
float rating,videolength;
int words;
     title = "c++ tutorial videos";
     rating = 4.65;
     videolength = 34.5;
    CWHvideo cvideo(title, rating, videolength);
    // cvideo.display();


     title = "c++ tutorial text";
     words = 467;
    CWHtext ctext(title, rating, words);
    // ctext.display();
    CWH *tut[2];
    tut[0] = &cvideo;
    tut[1] = &ctext;
    tut[0]->display();
    tut[1]->display();
    return 0;
}
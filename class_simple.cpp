#include <iostream>
#include <string>
using namespace std;

class A1 {
    short a;
};

class A2:public A1{
};

class scrollbar {
private:
    int size;
    mutable string owner;
public:
    scrollbar(int sz, string own) : size(sz), owner(own)
    { }
    void setSize(int sz){
        size = sz;
    }
    void setOwner(string own) const {
        owner = own;
    }
    int getSize()
    {
        return size;
    }
    string getOwner();
};

string scrollbar::getOwner(){
        return owner;
    }

int main()
{
    cout << "siteof(A1) =  " << sizeof(A1) <<endl;
    cout << "siteof(A2) =  " << sizeof(A2) <<endl;
    const int a=10;

    scrollbar sbar(40,"windows");
    cout <<"size =  " << sbar.getSize() <<endl;
    cout <<"owner = " << sbar.getOwner() <<endl;

    sbar.setOwner("huang");
    sbar.setSize(11);
    cout <<"size =  " << sbar.getSize() <<endl;
    cout <<"owner = " << sbar.getOwner() <<endl;
    return 0;
}

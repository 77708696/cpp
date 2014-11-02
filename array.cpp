#include <iostream>
using namespace std;
void array_function(){
    cout << "list array" << endl;
    int i, a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }
    for(i=0;i<10;i++)
        cout << "i= " << a[i] << endl;
}

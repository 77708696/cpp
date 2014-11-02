#include <iostream>
#include <fstream>
#include "array.cpp"
#include <map>

using namespace std;

int main(int argc,char **argv){
    if(argc>1){
        string iMesh=argv[1];
        cout << iMesh << endl;
    }

    map<string,string> m;

    cout << argv[0] << endl;
    cout << argc << endl;
    
    cout << "hello word " << endl;

    array_function();
    return 0;    

}


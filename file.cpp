#include <iostream>
#include <string>
#include <map>
#include <fstream>
using namespace std;

//https://github.com/huangzuduan/socket_sample
int main(int agvc,char ** agv){

    if(agvc<2)
    {

        cout << "not input file " << endl;
        return 0;
    }
    string file = agv[1];
    //string file="/opt/github/socket_sample/ChatServer/configs/server.cfg";
    cout << file << endl;
    ifstream infile(file.c_str());
    if(!infile){

		cout << "file open error " << endl;

	}
    string line;
    while(getline(infile,line)){
        if(line.empty()){
		    continue;
	    }
        cout << line << endl;
        
    }
    infile.close();
    cout << "aaa" << endl;

    return 0;

}

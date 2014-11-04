#include <iostream>
#include<fstream>
#include <string>
#include <list>
#include <algorithm>
#include <iomanip>
//http://yun.baidu.com/share/home?uk=470706123#category/type=0
using namespace std;
class Student{
    public:
        string num;
        string name;

};
bool condition(Student &m)
{
    return (m.num=="002");
}

int main(){
    string num = "001";    //Ñ§ºÅ
    string name = "huang";   //ÐÕÃû
    string temp="";
    char buf[10];
    /*
    ofstream outData("student.txt",ios::app);
    int i1=0;
    while(i1<10){
        sprintf(buf,"%d",i1);
        temp = buf;
        num="00" + temp;
        outData << setiosflags(ios::left)<<setw(8)<<num<<" "<<setw(6)<<name << endl;
        i1++;
    }
    outData.close();
    */
    list<Student>list1;
    Student s1;
    ifstream inData("student.txt");
    while(inData>>s1.num>>s1.name){
        //cout<<s1.num<<endl;
        list1.push_back(s1);
    }
    inData.close();
    list<Student>::iterator i;
    list1.remove_if(condition);
    ofstream outData("student.txt");
    for(i=list1.begin();i!=list1.end();i++)
    {
        cout << (*i).num << endl;
        outData << setiosflags(ios::left)<<setw(8)<<(*i).num<<" "<<setw(6)<<(*i).name << endl;
    }
    outData.close();
    return 0;

}

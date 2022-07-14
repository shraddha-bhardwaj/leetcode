#include <bits/stdc++.h>
using namespace std;

class H{
    int age;
    string name;
    int setage(){
        return age=age-2;
    }
public:
    H(){
        age=5;
        name="noname";
        cout<<"cons"<<endl;
    }
    void display(){
        cout<<setage()<<endl<<name;
    }
    void getdata(int val,string ame){
        age=val;
        name=ame;

    }

};


int main() {
	H obj;
    obj.getdata(20,"shraddha");
    obj.display();
	return 0;
}

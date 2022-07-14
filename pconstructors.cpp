
#include <bits/stdc++.h>
using namespace std;

class H{
int age;
string name;
public:
    H(){
        age=0;
        name="noname";
        cout<<"default"<<endl;
    }
    H(int iage){
        age=iage;
        name="noname";
        cout<<"age parameter"<<endl;
    }
    H(string iname){
        age=0;
        name=iname;
        cout<<"name parameter"<<endl;
    }
    H(int iage, string iname){
        age=iage;
        name=iname;
        cout<<"parameter"<<endl;
    }
    void display();

};
void H:: display(){
        cout<<name<<endl<<age<<endl;
    }


int main() {
	H obj;
    obj.display();
    H obj2(32);
    obj2.display();
    H obj3("shraddha");
    obj3.display();
    H obj4(22,"bhardwaj");
    obj4.display();
	return 0;
}

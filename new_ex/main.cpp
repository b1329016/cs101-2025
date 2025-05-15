#include <iostream>
using namespace std;
struct student{
    int id;
    string name;
};

int main(){
    student* p = new student[5];
    
    for(int i=0;i<5;i++){
        p[i].id=i+1;
        p[i].name="IU"+to_string(i+1);
        cout<<"array("<<i<<") "<<p[i].id<<", "<<p[i].name<<endl;
    }
    
    return 0;
}

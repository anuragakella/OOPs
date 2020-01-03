#include<iostream>
using namespace std;
class Subject {
    protected:
    int subID;
    string subName;
    public:
    Subject(){
        subID = 0;
        subName = "";
    }
};
class Student: private Subject{
    private:
    int roll;
    string Name;
    int grade;
    public:
    Student(int r, string n, int c, int sid, string s){
        roll = r;
        Name = n;
        grade = c;
        subID = sid;
        subName = s; 
    }
    void show(){
        cout << "Roll\tName\tClass\tSubject" << endl << roll << "\t" << Name << "\t"<< grade << "\t" << subName << "\t"<< endl;
    }
};
int main(){
    Student s(3, "Anurag", 14, 23435, "Physics");
    s.show();
}
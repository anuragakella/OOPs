#include<iostream>
using namespace std;
class AllAccess{
    private:
        int priv;
    protected: 
        int proc;
    public:
        int pub;
        AllAccess(){
            priv = proc = pub = 1;
        }
};
class Access: public AllAccess {
    public:
    void show(){
        cout << "private not accessible." << endl;
        cout << "Protected var: " << proc << endl;
        cout << "Public var: " << pub << endl;
    }
};
int main(){
    Access a;
    a.show();
}
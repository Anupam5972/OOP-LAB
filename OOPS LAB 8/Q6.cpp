#include <iostream>
#include <string>
using namespace std;
class Student{
    protected:
        string name;
        int roll;
    public:
        Student(){}
        void getDetails(){
            cout<<"Input regno: ";
            cin>>roll;
            cout<<"Input name: ";
            cin>>name;
        }
        void putDetails(){
            cout<<"Roll: "<<roll<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
class Exam: public Student{
    protected:
        int a1, a2;
    public:
        Exam(): Student(){}
        void getmarks(){
            cout<<"Input marks: \n";
            cout<<"Subject 1: ";
            cin>>a1;
            cout<<"Subject 2: ";
            cin>>a2;
        }
        void putmarks(){
            cout<<"Subject 1: "<<a1<<endl;
            cout<<"Subject 2: "<<a2<<endl;

        }
};
class Sports: public Student{
    protected:
        int indoor, outdoor, s1, s2;
    public:
        Sports(): Student(){}
        void getscore(){
            cout<<"Input score: \n";
            cout<<"Indoor: ";
            cin>>s1;
            cout<<"Outdoor: ";
            cin>>s2;
        }
        void putscore(){
            cout<<"Indoor: "<<s1<<endl;
            cout<<"Outdoor: "<<s2<<endl;
        }
};
class Result: public Sports, public Exam{
    int total;
    public:
        Result(): Sports(), Exam(){
            Exam::getDetails();
            getmarks();
            getscore();
            total = s1 + s2 + a1 + a2 ;
        }
        void display(){
            Exam::putDetails();
            cout<<"Exam Marks: \n"; Exam::putmarks();
            cout<<"Sports Scores: \n"; Sports::putscore();
            cout<<"Total: "<<total<<endl;
        }
};
int main(){
    Result result;
    result.display();
    return 0;
}
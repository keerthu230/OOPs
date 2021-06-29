#include<iostream>
using namespace std;

class Student {

private:
    int rollNo;
    string Name ;
    int Section;
public:
    void IntroduceStdent(){
        cout<<"Name ->"<<Name<<endl;
        cout<<"Roll No ->"<<rollNo<<endl;
        cout<<"Section ->"<<Section<<endl;

    }
    Student(string name , int roll_no , int current_class){
        Name = name;
        rollNo = roll_no;
        Section=current_class;
    }
    string getName(){
        return Name;
    }
    void setName(string student_name){
        Name=student_name;
    }

};
int main (){
    Student student1 = Student("keerthana" , 123 , 3);
    /* student1.Name="keerthana";
    student1.rollNo=123;
    student1.Section=3; */
    student1.IntroduceStdent();
    Student s2 = Student("pavithra", 155 , 4);
    s2.IntroduceStdent();
    

    cout<<"encapsulation technics->"<<s2.getName()<<endl;
    s2.setName("gowsi");
    s2.IntroduceStdent();
    cout<<"pavithra name is changed using encapsulation -> "<<s2.getName()<<endl;
    

}
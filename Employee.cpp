#include<iostream>

using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    
    string Company ;
    int Age;
protected:
    string Name;
public:    
    void IntroduceYourself(){
     cout<<"Name ="<<Name<<endl;
     cout<<"Company ="<<Company<<endl;
     cout<<"Age = "<<Age<<endl;
     cout<<"\n"<<endl;
    }
Employee(string name , string company , int age ){
    Name = name;
    Company= company;
    Age=age;
}
void setName(string name){
    Name=name;
}
string getName(){
    return Name;
}
 setAge(int age){
     if(age<52)
    Age = age;
}
int getAge(){
    return Age;
}

    // using abstraction , the AbstractEmployee class allows the method AskForPromotion which inturn check the employee age to allocate promotion or not

void AskForPromotion()
{
    if(Age>23)
        cout<<Name<<", congratulation \"got promoted !!! \"" <<"\n"<< endl;
    else
        cout<<Name<<", sorry promotion denied , promoted later !"<<"\n"<<endl;
    
}
 // polymorphism for base employee -> default case
void Work(){
    cout<<Name<<" is performing their task as daily assigned"<<"\n"<<endl;
}

};

class Developer:public Employee{
public:
    string program_language;

    // using inheritance from the employee class that's our parent class
    Developer(string name ,string company , int age , string Program_Language):Employee (name ,company,age){
        program_language=Program_Language;
    } 
   
   
    //invoke the child class with the method fixbugs
    void FixBug(){
        cout<<Name<<"  -> fixed bugs using "<<program_language<<"\n"<<endl; // access the protected  member of the class Empployee -> Name

        
    } 
    // polymorphism of their work is represented using the concept polymorphism
    // polymorphism for Developer employee -> define separate for developer		
    void Work(){
        cout<<Name<<" is debugging the program written using "<< program_language<<"\n"<<endl;
} 

};

class Teacher:public Employee{
public:
    string Subject;

    void prepareLesson(){
        cout<<Name<< " is teaching the subject -> "<<Subject<<"\n"<<endl;
    }
    Teacher(string name , string company , int age , string subject ):Employee(name,company,age){
        Subject=subject;
    }
    
    // polymorphism of their work is represented using the concept polymorphism
    // polymorphism for teacher employee -> defined separate for techer 	
    void Work(){
        cout<<Name<<" is teaching lessons on  "<< Subject<<"\n"<<endl;
} 


};



int main()
{
    
	Employee employee1= Employee("keerthana" , "Google" , 22);
	
    employee1.IntroduceYourself();

    Employee employee2 = Employee( "pavithra" ,"L & T",24 );
    
    employee2.IntroduceYourself();
    Employee employee3=Employee("KARTHIKEYAN ", "muthu pipes", 50);

    employee3.IntroduceYourself();
    cout<<" Best Employee of the company ->"<<employee3.getName()<<endl;
    employee3.setAge(55);
    cout<<employee3.getName()<<"'s age is "<<employee3.getAge()<<endl;
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    employee3.AskForPromotion();
    Developer d = Developer("mirnalini", "software- solutions",21,"python") ;
    d.FixBug();
    d.AskForPromotion(); // making the inheritance public -> public Employee , i can able to access the methods in the parent class
    Teacher t = Teacher("Bhavani", "Government College ", 45, "operating system");
    t.prepareLesson();
    t.AskForPromotion();

    // polymorphism concepts 

    employee1.Work();
    d.Work();
    t.Work();


}

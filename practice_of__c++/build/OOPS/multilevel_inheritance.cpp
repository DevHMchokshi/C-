#include<iostream
#include<string>
using namespace std;
class student{
    public:
    int rollno[5];
    student()
  {
    cout<<"enter student rollnumber";
    for(int i=0;i<5;i++)
    {
        cin>>rollno[i];
    

  }  
}
void student_display(){
    cout<<"student roll no ::";
    for(int i=0;i<5;i++){
        cout<<rollno[i]<<endl;
    }
}
   
  };
class student-info:student{
    public:
    string name [5];
    student_info(){
        cout<<"enter student name";
        for(int i=0;i<5;i++){
            cin>>name[i];
        }
    }
void student_name_diplay(){
    // parent class method call
    student_display();

    cout<<"student name ::";
    for(int i=0;i<5;i++){
        cout<<name[i]<<endl;
    }                                                                                           
    
}
};
class student_marks:public student_info{
    public:
    int marks[5];
    student_marks(){
        cout<<"enter student marks";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }   
    void_display_stu_marks(){
        // parent class method call
        student_info::student_name_diplay();
        
        cout<<"student marks ::";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<endl;
        }
    }
};
int main(){
    student_marks sf;
    sf.student_marks_display();
    return 0;
}


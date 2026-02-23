#include <iostream>
#include <string>

using namespace std;
   class Student{
       public: 
       string firstname, lastname;
       int rollnum;
       char gender;
       int marks[3];
       double totalmarks = 0;
       double averagemarks = 0;
       
       public:
      void GetInfo(){
          cout << "Enter Your first name: " << endl;
          cin >> firstname;
          
           cout << "Enter Your second name: " << endl;
          cin >> lastname;
          
           cout << "Enter Your roll number: " << endl;
          cin >> rollnum;
          
          cout << "Enter Your Gender (M/F): " << endl;
          cin >> gender;
        
      }
      
      void TotalMarks(){
          for (int i = 0; i < 3; i++){
                  cout << "Enter Your Marks for subject " << i + 1 << endl;
          cin >> marks[i];
          totalmarks += marks[i];
          }

          }
      
      void AverageMarks(){
          averagemarks = totalmarks / 3;
      }
      
      void ShowStudentInfo(){
          cout << "First name: " << firstname << endl;
               cout << "Second name: " << firstname << endl;
                    cout << "Roll Number: " << rollnum << endl;
                         cout << "Gender: " << gender << endl;
                                   cout << "Total Marks: " << totalmarks << endl;
           cout << "Average Marks: " << averagemarks << endl;
      }

      Student CompleteInfo(){
          Student s;
          s.GetInfo();
          s.TotalMarks();
          s.AverageMarks();
          s.ShowStudentInfo();
          return s;
      }
   };
         void NumberStudent(int n){
          cout << "Number of Students are: " << n << endl;
      }
   int main() {
       int n;
       cout << "Enter the number of students" << endl;
       cin >> n;
       
       Student Student1[n];
       Student s;
       NumberStudent(n);
       
       for (int i = 0; i < n; i++){
           Student1[i] = s.CompleteInfo();
       }
       int confirm;
       cout << "Do you want to find out grade of student 1 = YES I 0 = NO? " << endl;
       cin >> confirm;

       if (confirm == 1){
            for (int i = 0; i < n; i++){
                cout << "Showing grade of student " << i +1 << endl;
           if (Student1[i].averagemarks <= 49){
               cout << "You are Failed!" << endl;
           }
           
           if (Student1[i].averagemarks >= 50){
               cout << "You are Passed!" << endl;
           }
       }

       }
          if (confirm == 0) {
           return 0;
       }
    return 0;
}
#include <string> 
class GradeBook{
 public:
  explicit GradeBook( std::string, std::string );  // constructor initialize courseName
  void setCourseName( std::string );  // sets the course name
  std::string getCourseName() const;  // gets the course name
  void displayMessage() const;    // displays a welcome message
  void setInstructorName(std::string);
  std::string getInstructorName() const;
 private:
  std::string courseName;// course name for this GradeBook
  std::string instructorName;
}; // end class GradeBook

#include <iostream>
using namespace std;
GradeBook::GradeBook( string name, string insName ):courseName( name ),instructorName(insName){}

void GradeBook::setCourseName( string name ){
  courseName = name; 
}

string GradeBook::getCourseName() const{
  return courseName;} 

void GradeBook::displayMessage() const{
  cout << "Welcome to the grade book for\n" << getCourseName()
      << "!" << endl;
  cout<< "This course is presented by\n"<<getInstructorName()<<"!"<<endl;
  }
void GradeBook::setInstructorName(string insName){
  instructorName = insName;
}
string GradeBook::getInstructorName() const{
  return instructorName;
}


int main(){
  string name = "Math";
  string insName = "Gabriel";
GradeBook g(name,insName);
  
  g.setCourseName(name);
  g.setInstructorName(insName);
  g.getCourseName();
  g.getInstructorName();
  g.displayMessage();
  


  
}
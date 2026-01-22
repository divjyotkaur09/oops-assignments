//Q1
#include <iostream>
using namespace std;
struct Student {
    string name;
    int rollNo;
    string degree;
    string branch;
    string hostel;
    float cgpa;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "\nUpdate Details\n";

        cout << "Enter new Name: ";
        cin >> name;

        cout << "Enter new Degree: ";
        cin >> degree;

        cout << "Enter new Branch: ";
        cin >> branch;

        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }
    
    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Branch: " << branch << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
    return 0;
}
//Q2
#include <iostream>
using namespace std;

class Student {
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;

public:
    void addDetails() {
        
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        cout << "Update Name: ";
        cin >> name;

        cout << "Update Degree: ";
        cin >> degree;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();

    cout << "\nUpdated Details:" << endl;
    s.displayDetails();

    return 0;
}
//Q3
#include <iostream>
using namespace std;
class Demo {
  private: 
  void showprivate(){
    cout<< "private function called"<<endl;
  } 
  public: 
  void showpublic(){
    showprivate();
  } 
};
int main(){
    Demo d;
    d.showpublic();
    return 0;
}
//Q4
#include <iostream>
using namespace std;
class Rectangle{
 private: 
    int width,height;
 public: 
 void getdata(){
    cout<<"enter width and height"<<endl;
    cin>>width>>height;
 }
 void calculatearea(){
    cout<<"area of rectangle is "<<width*height<<endl;
 }
};
int main(){
    Rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}
//Q5
#include <iostream>
using namespace std;
class Complex{
    private:
    float real,imaginary;
    public:
    void setComplex(){
        cout<<"enter real and imaginary nos"<<endl;
        cin>>real>>imaginary;
    }
    void sumComplex(Complex c1,Complex c2){
        real= c1.real+c2.real;
        imaginary=c1.imaginary+c2.imaginary;
    }
    void displayComplex(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    
    }

};
int main(){
    Complex c1,c2,sum;
    c1.setComplex();
    c2.setComplex();
    sum.sumComplex(c1,c2);
    cout<<"sum= ";
    sum.displayComplex();
    return 0;

}
//Q6
#include <iostream>
using namespace std;
int x=10;
class Test{
    public:
        static int s;
    void show();
};
    int Test::s=50;
void Test::show(){
    int x=20;
    cout<<"Local x= "<<x<<endl;
    cout<<"Global x= "<<::x<<endl;
        cout<<"Static s= "<<Test::s<<endl;
}
int main(){
    Test t;
    t.show();
    return 0;
}
//Q7
#include <iostream>
using namespace std;
namespace First {
    int value;
    void show() {
        cout << "First namespace value = " << value << endl;
    }
}
namespace Second {
    int value;
    void show() {
        cout << "Second namespace value = " << value << endl;
    }
}
int main() {
    cout << "Enter value for First namespace: ";
    cin >> First::value;
    cout << "Enter value for Second namespace: ";
    cin >> Second::value;
    First::show();
    Second::show();
    return 0;
}




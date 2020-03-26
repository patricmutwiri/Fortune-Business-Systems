/* 
    @author Patrick Mutwiri <patwiri@gmail.com>
    @patric_mutwiri
    Created by patrick on 3/26/20.    
*/
//

#include "main.h"
#include <iostream>
using namespace std;
class Employee {
public:
    friend void compute_pension(Employee employee);
    string empid,fname,sname,surname,dob,gender{};
    int dd{},mm{},yyyy{};
    float basicSalary{}, savingsRate = 0.0,pension;
    Employee();
    // show employee
    void show_employee(){
        cout<<"ID NUMBER \t\t:"<<empid<<endl;
        cout<<"FIRST NAME \t\t:"<<fname<<endl;
        cout<<"SECOND NAME \t:"<<sname<<endl;
        cout<<"SURNAME \t\t:"<<surname<<endl;
        cout<<"GENDER \t\t:"<<gender<<endl;
        cout<<"DATE OF BIRTH \t:"<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
        cout<<"GENDER \t\t:"<<basicSalary<<endl;
    }
};

Employee::Employee() {
    cout<<"ADD EMPLOYEE DETAILS\n";
    cout<<"---------------------------\n";

    cout<<"ENTER ID NUMBER \t\t:";
    cin>>empid;
    cin.ignore();
    cout<<"ENTER FIRST NAME \t\t:";
    getline(cin,fname);
    cin.ignore();
    cout<<"ENTER SECOND NAME \t:";
    getline(cin,sname);
    cin.ignore();
    cout<<"ENTER SURNAME \t\t:";
    getline(cin,surname);
    getgender:
    cout<<"ENTER GENDER (M or F)\t\t:";
    cin>>gender;
    if (gender != "M" && gender != "F") {
        goto getgender;
    }
    cout<<"DATE OF BIRTH \n";
    cout<<"ENTER DATE OF THE MONTH\t:";
    cin>>dd;
    cout<<"ENTER MONTH OF THE YEAR\t:";
    cin>>mm;
    cout<<"ENTER YEAR OF BIRTH\t:";
    cin>>yyyy;
    cout<<"ENTER BASIC SALARY IN KSH \t\t:";
    cin>>basicSalary;
    cout<<" \n";
    cout<<" \n";
}

void compute_pension(Employee employee){
    employee.pension = employee.savingsRate*employee.basicSalary;
    if(employee.pension>0) {
        cout<<"Pension \t\t:"<<employee.pension;
    }
}

int main() {
    cout << " :: FORTUNE BUSINESS SYSTEMS :: " << std::endl;
    cout<<" "<<endl;

    Employee emp_obj;

    cout<<" \n";
    cout<<" \n";
    cout<<"SHOW EMPLOYEE DETAILS\n";
    cout<<"---------------------------\n";
    cout<<" \n";
    emp_obj.show_employee();
    compute_pension(emp_obj);
    cout<<" :: FBS :: "<<endl;
    return 0;
}
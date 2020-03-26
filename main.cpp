/* 
    @author Patrick Mutwiri <patwiri@gmail.com>
    @patric_mutwiri
    Created by patrick on 3/26/20.    
*/
//

#include "main.h"
#include <iostream>
using namespace std;
class employee {
public:
    employee();
    string empid,fname,sname,surname,dob;
    char gender;
    int dd,mm,yyyy;
    float basicSalary;

    // show employee
    static void show_employee(){

    }
};
employee::employee(){

}

int main() {
    employee emp_obj;
    cout << " :: FORTUNE BUSINESS SYSTEMS :: " << std::endl;
    cout<<" "<<endl;
    cout<<"ADD EMPLOYEE DETAILS\n";
    cout<<"---------------------------\n";
    employee::show_employee();

    cout<<" \n";
    cout<<"SHOW EMPLOYEE DETAILS\n";
    cout<<"---------------------------\n";

    cout<<" :: FBS :: "<<endl;
    return 0;
}
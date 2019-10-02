#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string grade;               //Declare and initialize variables.
double gpa = 0.00;

void checkMainGrade(){              //Function to check letter grade.

    cout << "Enter a letter grade: ";               //Takes user input.
    cin >> grade;

    if(toupper(grade[0]) == 'A'){               //If statements checking letter grade.
        gpa = 4.00;
    }else if(toupper(grade[0]) == 'B'){
        gpa = 3.00;
    }else if(toupper(grade[0]) == 'C'){
        gpa = 2.00;
    }else if(toupper(grade[0]) == 'D'){
        gpa = 1.00;
    }else if(toupper(grade[0]) == 'F'){
        gpa = 0.00;
    }else{
        cout << "INVALID ENTRY" << endl;            //Recursion for invalid input.
        checkMainGrade();
    }
}
void checkPlusMinus(){                                          //Function checking for plus or minus
    if((grade[1] == '+') && (toupper(grade[0]) != 'A')){
        gpa += .30;
    }else if((grade[1] == '-') && (toupper(grade[0]) != 'F')){
        gpa -= .30;
    }
}

int main(int argc, char *args[]) {

    checkMainGrade();               //Check main grade input.
    checkPlusMinus();               //Check for plus or minus.

    cout << fixed << setprecision(2) << gpa << endl;

    return 0;
}
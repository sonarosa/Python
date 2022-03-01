#include <iostream>

using namespace std;

int n;

class student

{

        int Roll_no;

        char name[20];

        int phy;

        int chem;

        int maths;

        int total_marks;

        char grade;

public:

        void input();

        void display();

        void calcGrade();

}S;

void student::calcGrade()

{

        total_marks = (phy + maths + chem);

        if (total_marks >= 145)

               grade = 'A';

        else if (total_marks >= 130)

               grade = 'B';

        else

               grade = 'C';

}

void student::input()

{

        cout << "Enter name of the student" << endl;

        cin >> name;

        cout << "Enter roll no of the student" << endl;

        cin >> Roll_no;

        cout << "Enter marks for physics out of 50" << endl;

        cin >> phy;

        cout << "Enter marks for chemistry out of 50" << endl;

        cin >> chem;

        cout << "Enter marks for maths out of 50" << endl;

        cin >> maths;

}

void student::display()

{

        cout << "Name:" << name << endl;

        cout << "Roll no:" << Roll_no << endl;

        cout << "Marks for Physics out of 50:" << phy << endl;

        cout << "Marks for Chemistry out of 50:" << chem << endl;

        cout << "Marks for Maths out of 50:" << maths << endl;

        calcGrade();

        cout << "Total marks out of 150:" << total_marks << endl;

        cout << "Grade:" << grade << endl;

}

int main()

{

        cout << "Enter number of students whose details should be taken:";

        cin >> n;

        student S[n] ;

        for (int i = 0; i < n; i++)

        {

               cout << "Enter details of student " << i + 1 << ":" << endl;

               S[i].input();

        }

        for (int i = 0; i < n; i++)

        {

               cout << "Details of student " << i + 1 << " :" << endl;

               S[i].display();

        }

        return 0;

}

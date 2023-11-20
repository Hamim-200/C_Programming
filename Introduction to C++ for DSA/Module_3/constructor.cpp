#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        //(*this).roll= roll;
        this->roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
    // Student(int r,int c, double g){
    //     roll=r;
    //     cls=c;
    //     gpa=g;
    // }
};
int main()
{
    Student rahim(29, 9, 4.95);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    // rahim.roll=29;
    // rahim.cls=9;
    // rahim.gpa=5.00;

    // Student karim(45,10,4.33);

    return 0;
}
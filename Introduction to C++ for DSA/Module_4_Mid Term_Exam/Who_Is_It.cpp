#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string sec;
    int marks;

    Student(int id, string name, string sec, int marks)
    {
        this -> id = id;
        this->name = name;
        this-> sec=sec;
        this->marks = marks;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int id, marks;
        string name, sec;
        cin >> id >> name >> sec >> marks;
        Student s1(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student s2(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student s3(id, name, sec, marks);
        
        if (s1.marks > s2.marks && s1.marks > s3.marks)
        {
            cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
        }
        else if (s2.marks > s1.marks && s2.marks > s3.marks)
        {
            cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
        }
        else if (s3.marks > s1.marks && s3.marks > s2.marks)
        {
            cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
        }
        else
        {
            if (s1.marks == s2.marks && s1.marks == s3.marks)
            {
                if (s1.id < s2.id && s1.id < s3.id)
                {
                    cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
                }
                else if (s2.id < s1.id && s2.id < s3.id)
                {
                    cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
                }
                else if (s3.id < s1.id && s3.id < s2.id)
                {
                    cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
                }
            }
            else if (s1.marks == s2.marks)
            {
                if (s2.id < s1.id)
                {
                    cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
                }
                else
                {
                    cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
                }
            }
            else if (s1.marks == s3.marks)
            {
                if (s1.id < s3.id)
                {
                    cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.marks << endl;
                }
                else
                {
                    cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
                }
            }
            else if (s2.marks == s3.marks)
            {
                if (s2.id < s3.id)
                {
                    cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.marks << endl;
                }
                else
                {
                    cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.marks << endl;
                }
            }
        }
    }
    return 0;
}
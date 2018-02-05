#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }

    int getId()
    {
        return id;
    }
    string getName()
    {
    return name;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }

};

int main ()
{
    student Noctis(36548, "Noctis", 20, 176);
    student Ignis(36549, "Ignis", 22, 183);
    student Gladiolus(36550,"Gladiolus", 23, 198);
    student Promto(365511,"Prompto", 20, 173);

    cout << "Id : " << Noctis.getId() << endl;
    cout << "Name : "<< Noctis.getName()<< endl;
    cout << "Name : "<< Noctis.getage()<< endl;
    cout << "Name : "<< Noctis.getheight()<< endl;

    cout << "Id : " << Ignis.getId() << endl;
    cout << "Name : "<< Ignis.getName()<< endl;
    cout << "Name : "<< Ignis.getage()<< endl;
    cout << "Name : "<< Ignis.getheight()<< endl;

     cout << "Id : " << Gladiolus.getId() << endl;
    cout << "Name : "<< Gladiolus.getName()<< endl;
    cout << "Name : "<< Gladiolus.getage()<< endl;
    cout << "Name : "<< Gladiolus.getheight()<< endl;

     cout << "Id : " << Prompto.getId() << endl;
    cout << "Name : "<< Prompto.getName()<< endl;
    cout << "Name : "<< Prompto.getage()<< endl;
    cout << "Name : "<< Prompto.getheight()<< endl;


    return 0;
}

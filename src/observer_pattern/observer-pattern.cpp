#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Group;

class Students {
public:
    void update(const string& msg) {
        cout << "Received message: " << msg << endl;
    }
};

class Group {
private:
    vector<Students*> students;

public:
    void addStudent(Students* student) {
        students.push_back(student);
    }

    void removeStudent(Students* student) {
        auto i = find(students.begin(),students.end(),student);
        if(i!=students.end()){
            students.erase(i);
        }
        else{
            cout<<"Student not found!!"<<endl;
        }
    }

    void sendMessage(const string& msg) {
        for (Students* student : students) {
            student->update(msg);
        }
    }
};

int main() {
    Group common;
    Students alice, bob, charlie;

    common.addStudent(&alice);
    common.addStudent(&bob);
    common.addStudent(&charlie);

    common.sendMessage("Hello, everyone!");

    return 0;
}

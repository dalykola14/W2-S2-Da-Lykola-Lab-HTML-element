
#include <iostream>
using namespace std;

// Create Student Node
struct Student {
    int ID;
    string name;
    string major;
    Student* next;
};

// Create Linked List
class StudentList {
private:
    Student* head;

public:
    StudentList() {
        head = NULL;
    }

    // Add student at the end
    void insertAtEnd(int id, string n, string m) {
        Student* newStudent = newStudent;

        newStudent->ID = id;
        newStudent->name = n;
        newStudent->major = m;
        newStudent->next = NULL;

        if (head == NULL) {
            head = newStudent;
        }
        else {
            Student* temp = head;

            while (temp->next !=NULL) {
                temp = temp->next;
            }

            temp->next = new Student;
        }
    }

    // Display student list
    void display() {
        Student* temp = head;

        while (temp != NULL) {
            cout << "ID: " << temp->ID << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Major: " << temp->major << endl;

            temp = temp->next;
        }
    }

    // Count students
    int count() {
        int total = 0;
        Student* temp = head;

        while (temp != NULL) {
            total++;
            temp = temp->next ;
        }

        return total;
    }
};

int main() {
    StudentList list;

    list.insertAtEnd(101, "Dara", "IT");
    list.insertAtEnd(102, "Sokha", "Computer Science");
    list.insertAtEnd(103, "Mina", "Design");

    list.display();

    cout << "Total students: " << list.count();

    return 0;
}

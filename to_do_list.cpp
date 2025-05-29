#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> to_do;
    int choice;
    string task;
    int index;

    do {
        cout << "\n--- To-Do List ---\n";
        cout << "1. Add Task\n2. Remove Task\n3. View Tasks\n4. Exit\nChoose option: ";
        cin >> choice;
        cin.ignore(); // flush newline

        switch (choice) {
            case 1:
                cout << "Enter task: ";
                getline(cin, task);
                to_do.push_back(task);
                cout << "Task added!\n";
                break;
            case 2:
                cout << "Enter task number to remove: ";
                cin >> index;
                if (index > 0 && index <= to_do.size()) {
                    to_do.erase(to_do.begin() + index - 1);
                    cout << "Task removed!\n";
                } else {
                    cout << "Invalid task number!\n";
                }
                break;
            case 3:
                cout << "\nYour Tasks:\n";
                for (int i = 0; i < to_do.size(); i++) {
                    cout << i + 1 << ". " << to_do[i] << "\n";
                }
                break;
            case 4:
                cout << "Exiting To-Do List.\n";
                break;
            default:
                cout << "Invalid option!\n";
        }
    } while (choice != 4);

    return 0;
}

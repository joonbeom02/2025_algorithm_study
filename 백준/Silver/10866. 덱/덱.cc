#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    deque<int> DQ;
    char command[20];
    int value;
    
    for (int i = 0; i < N; i++) {
        cin >> command;
        
        if (strcmp(command, "push_front") == 0) {
            cin >> value;
            DQ.push_front(value);
        } else if (strcmp(command, "push_back") == 0) {
            cin >> value;
            DQ.push_back(value);
        } else if (strcmp(command, "pop_front") == 0) {
            if (DQ.empty()) {
                cout << "-1\n";
            } else {
                cout << DQ.front() << "\n";
                DQ.pop_front();
            }
        } else if (strcmp(command, "pop_back") == 0) {
            if (DQ.empty()) {
                cout << "-1\n";
            } else {
                cout << DQ.back() << "\n";
                DQ.pop_back();
            }
        } else if (strcmp(command, "size") == 0) {
            cout << DQ.size() << "\n";
        } else if (strcmp(command, "empty") == 0) {
            cout << DQ.empty() << "\n";
        } else if (strcmp(command, "front") == 0) {
            if (DQ.empty()) {
                cout << "-1\n";
            } else {
                cout << DQ.front() << "\n";
            }
        } else if (strcmp(command, "back") == 0) {
            if (DQ.empty()) {
                cout << "-1\n";
            } else {
                cout << DQ.back() << "\n";
            }
        }
    }
    
    return 0;
}

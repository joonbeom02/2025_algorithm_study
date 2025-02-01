#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    stack<int> Stack;
    
    while (N--) {
        int command;
        scanf("%d", &command);
        
        if (command == 1) {
            int value;
            scanf("%d", &value);
            Stack.push(value);
        } else if (command == 2) {
            if (Stack.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Stack.top());
                Stack.pop();
            }
        } else if (command == 3) {
            printf("%d\n", (int) Stack.size());
        } else if (command == 4) {
            printf("%d\n", Stack.empty());
        } else if (command == 5) {
            if (!Stack.empty()) {
                printf("%d\n", Stack.top());
            } else {
                printf("-1\n");
            }
        }
    }
    
    return 0;
}

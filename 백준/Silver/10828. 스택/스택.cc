#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    
    stack<int> Stack;
    char command[10];
    int value;

    for (int i = 0; i < N; i++) {
        scanf("%s", command);
        
        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            Stack.push(value);
        } else if (strcmp(command, "top") == 0) {
            if (Stack.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Stack.top());
            }
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", Stack.empty());
        } else if (strcmp(command, "pop") == 0) {
            if (Stack.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Stack.top());
                Stack.pop();
            }
        } else if (strcmp(command, "size") == 0) {
            printf("%lu\n", static_cast<unsigned long>(Stack.size()));
        }
    }

    return 0;
}

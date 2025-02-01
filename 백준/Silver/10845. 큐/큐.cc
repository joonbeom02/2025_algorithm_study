#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    
    queue<int> Q;
    char command[10];
    int value;
    
    for (int i = 0; i < N; i++) {
        scanf("%s", command);
      
        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            Q.push(value);
        } else if (strcmp(command, "pop") == 0) {
            if (Q.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Q.front());
                Q.pop();
            }
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", Q.size());
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", Q.empty());
        } else if (strcmp(command, "front") == 0) {
            if (Q.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Q.front());
            }
        } else if (strcmp(command, "back") == 0) {
            if (Q.empty()) {
                printf("-1\n");
            } else {
                printf("%d\n", Q.back());
            }
        }
    }
  
    return 0;
}

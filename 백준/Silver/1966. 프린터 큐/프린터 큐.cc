#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int num;
    cin >> num;
    while(num--){
        int n, m;
        queue<pair<int, int>> Q;
        priority_queue<int> pq;
        cin >> n >> m;
        
        for(int i=0;i<n;i++){
            int priority;
            cin >> priority;
            Q.push({priority, i});
            pq.push(priority);
        }
        int printOrder = 0;
        
        while (!Q.empty()) {
            int currentPriority = Q.front().first;
            int currentIndex = Q.front().second;
            Q.pop();
            
            if (currentPriority == pq.top()) {
                printOrder++;
                pq.pop();
                if (currentIndex == m) {
                    cout << printOrder << "\n";
                    break;
                }
            } else {
                Q.push({currentPriority, currentIndex});
            }
        }
    }
}
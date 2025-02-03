#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> Stack;
    Stack.push(arr[arr.size()-1]);
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i] != Stack.top()){
            Stack.push(arr[i]);
        }
    }
    while(!Stack.empty()){
        answer.push_back(Stack.top());
        Stack.pop();
    }

    return answer;
}
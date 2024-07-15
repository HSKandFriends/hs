/*
    2024.07.08 2주차 
    stack 연습문제
    스택수열
    https://www.acmicpc.net/problem/1874
*/

#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;
    stack.push(1);
    int num;
    cin >> num;

    int temp, id = 1;
    string s = "+";

    for(int i=0; i<num; i++)
    {
        cin >> temp;

        if(id < temp)   // index보다 더 큰수를 입력 받는다면 stack에 모두 push
        {
            for(int j=id+1; j<=temp; j++)
            {
                stack.push(j);
                s += "\n+";
            }
            id = temp;
            s += "\n-";
            stack.pop();
        }
        else if(stack.top() == temp)    // top이 꺼내야할 수 라면 pop
        {
            s += "\n-";
            stack.pop();
        }
        else    // 위 두 경우가 아니라면 구현 할 수 없는 수열
        {
                cout<<"NO";
                return 0;
        }
    }

    cout<<s;
    return 0;
}

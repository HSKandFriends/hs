/*
    2024.07.08 2주차 
    stack 연습문제
    제로
    https://www.acmicpc.net/problem/10773
*/

#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int num;
    cin>>num;
    
    int temp;
    for(int i=0; i<num; i++)
    {
        cin >> temp;
        if(temp == 0)
            if(s.empty()) continue;
            else s.pop();
        else
            s.push(temp);
    }
    int sum = 0;
    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    cout<<sum;
    return 0;
}

/*
    2024.07.08 2주차 
    stack 연습문제
    올바른 괄호
    https://school.programmers.co.kr/learn/courses/30/lessons/12909
*/

#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<int> st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(') st.push(1);
        else if(s[i] == ')')
        {
            if(st.empty() == true) return false;
            st.pop();
        }
    }
    if(st.empty() == false) return false;

    return answer;
}
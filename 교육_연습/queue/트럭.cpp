#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int start=0; int END =0;
vector<int> sec;

void time()
{
    for(int i= start; i<END; i++)
    {
        if(i == sec.size()) break;
        sec[i]++;
    }
}




int solution(int bridge_length, int weight, vector<int> truck) {
    int answer = 1;
    sec = vector<int>(truck.size(),0);
    queue<int> q;
    int now_weight = weight;
    
    while(1)
    {
        if(sec[start] >=bridge_length)
        {
            //cout<<sec[start]<<endl;
            //cout<<"버스 하나 탈출"<<now_weight<<" + " << q.front()<<" = ";
            now_weight += q.front();
            //cout<<now_weight<<endl;
            q.pop();
            start++;
        }
        if(start == truck.size()) break;
        if(END < truck.size())
        {
            if(now_weight >= truck[END] && q.size() <= bridge_length)
            {
                q.push(truck[END]);
                //cout<<"버스 입장"<<now_weight<<" - " << q.back()<<" = ";
                now_weight =now_weight - truck[END];
                //cout<<now_weight<<endl;
                END++;
            }
        }
        
        time();
        //cout<<answer<<" "<<start<<" "<<END<<" "<<now_weight<<"[ "<< sec[0]<<" "<<sec[1]<<" "<<sec[2]<<" "<<sec[3]<<" ]"<<endl;
        
        answer++;
    }
    
    
    
    
    
    
    
    
    return answer;
}
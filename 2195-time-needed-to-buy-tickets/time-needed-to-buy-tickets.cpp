class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>s;
        for(int i=0;i<tickets.size();i++){
            s.push(i);
        }
        int time=0;
        while(tickets[k]!=0){
            int value=s.front();
            
            s.pop();
            tickets[value]--;
            time++;
            if(tickets[value]>0){
                s.push(value);
            }

        }
        return time;
    }
};
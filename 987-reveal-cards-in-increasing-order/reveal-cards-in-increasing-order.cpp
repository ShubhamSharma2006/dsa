class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
          sort(deck.begin(), deck.end());
        queue<int>c;
        for(int i=0;i<deck.size();i++){
            c.push(i);
        }
        vector<int>ans(deck.size());
        for(int i=0;i<deck.size();i++){
            int val=c.front();
            c.pop();
            ans[val]=deck[i];
            if(!c.empty()){
                c.push(c.front());
                c.pop();
            }
            
        }
        return ans;
    }
};
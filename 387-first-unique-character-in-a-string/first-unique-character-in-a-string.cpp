class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        queue<int>q;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;

            q.push(i);
        }

        while(!q.empty()){
            int index=q.front();
            q.pop();
            if(m[s[index]]==1){
                return index;
            }
        }
        return -1;
    }
};
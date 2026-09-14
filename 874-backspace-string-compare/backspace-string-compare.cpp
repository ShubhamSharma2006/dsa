class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>s1;
       stack<char>s2;
       for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            if(!s1.empty())
            s1.pop();
        }
        else{
        s1.push(s[i]);}
       }
       for(int i=0;i<t.size();i++){
        if(t[i]=='#'){
            if(!s2.empty())
            s2.pop();
        }else{
        s2.push(t[i]);}
       }
       string ans1;
       while(!s1.empty()){
        ans1+=s1.top();
        s1.pop();

       }
       string ans2;
       while(!s2.empty()){
        ans2+=s2.top();
        s2.pop();
       }
       return ans1==ans2;
    }
};
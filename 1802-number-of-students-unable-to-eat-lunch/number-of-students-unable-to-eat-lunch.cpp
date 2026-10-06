class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stula;
        for(int i=0;i<students.size();i++){
            stula.push(students[i]);
        }
        int count=0;
        int i=0;
        while(!stula.empty()&&count<stula.size()){
            if(stula.front()==sandwiches[i]){
                stula.pop();
                i++;
                count=0;
            }
            else{
                int val=stula.front();
                stula.pop();
                stula.push(val);
                count++; 
            }
        }
        return stula.size();
    }
};
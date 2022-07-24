class Solution {
public:
    bool isparan(char a, char b){
        if(a=='(' && b==')') return true;
        else if(a=='{' && b=='}') return true;
        else if(a=='[' && b==']') return true;
        else
            return false;
    }
    bool isValid(string s) {
        stack<char> m;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                m.push(s[i]);
            }
            else{
            if(!m.empty() && isparan(m.top(),s[i])==true){
                m.pop();
            }
            else
                return false;
        }
        }
       return m.empty();
    }
};
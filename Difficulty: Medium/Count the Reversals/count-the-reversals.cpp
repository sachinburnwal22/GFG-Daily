class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int n = s.size();
        if(n%2 != 0) return -1;
        stack<char> st;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(st.empty()){
                if(s[i] == '}'){
                    cnt++;
                }else{
                    st.push(s[i]);
                }
            }else{
                if(s[i] == '}'){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        
        return (cnt+1)/2 + (st.size()+1)/2;
    }
};
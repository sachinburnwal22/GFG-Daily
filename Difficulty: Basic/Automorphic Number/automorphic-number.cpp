class Solution {
  public:
    string isAutomorphic(int n) {
        // code here
        int n2 = n*n;
        string str = to_string(n2);
        string tofind = to_string(n);
        
        int i = str.size() - 1;
        int j = tofind.size() - 1;
        bool ch = true;
        while(i >= 0 && j >= 0){
            if(str[i] != tofind[j]){
                ch = false;
                break;
            }
            i--;
            j--;
        }
        
        if(ch){
            return "Automorphic";
        }else{
            return "Not Automorphic";
        }
    }
};
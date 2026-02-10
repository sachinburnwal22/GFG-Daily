class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> zero;
        vector<int> one;
        vector<int> two;
        
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                zero.push_back(arr[i]);
            }else if(arr[i] == 1){
                one.push_back(arr[i]);
            }else{
                two.push_back(arr[i]);
            }
        }
        
        int k = 0;
        while(k < n){
            for(int i=0; i<zero.size(); i++){
                arr[k] = zero[i];
                k++;
            }
            for(int i=0; i<one.size(); i++){
                arr[k] = one[i];
                k++;
            }
            for(int i=0; i<two.size(); i++){
                arr[k] = two[i];
                k++;
            }
        }
        
        
        
    }
};
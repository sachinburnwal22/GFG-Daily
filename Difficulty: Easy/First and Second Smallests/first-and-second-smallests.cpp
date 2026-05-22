class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        
        int mini = INT_MAX;
        int secmini = INT_MAX;

        for(int num : arr){

            // New minimum found
            if(num < mini){
                secmini = mini;
                mini = num;
            }

            // Second minimum candidate
            else if(num > mini && num < secmini){
                secmini = num;
            }
        }

        // If second minimum doesn't exist
        if(secmini == INT_MAX)
            return {-1};

        return {mini, secmini};
    }
};
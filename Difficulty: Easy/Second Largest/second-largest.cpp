class Solution {
public:
    int getSecondLargest(vector<int> &arr) {

        int maxNum = INT_MIN;
        int secMaxNum = INT_MIN;

        for (int x : arr) {

            if (x > maxNum) {
                secMaxNum = maxNum;
                maxNum = x;
            }
            else if (x > secMaxNum && x != maxNum) {
                secMaxNum = x;
            }
        }

        return (secMaxNum == INT_MIN) ? -1 : secMaxNum;
    }
};
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start>0)
        {
            cout << start%2;
            start /= 2;

        }
        return ans;
    }
};

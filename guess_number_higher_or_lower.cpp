class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
            
        while (left <= right) {
            int mid = left + (right - left) / 2;

            switch (guess(mid)) {
                case -1:
                    right = mid - 1;
                    break;

                case 1:
                    left = mid + 1;
                    break;

                case 0:
                    return mid;
            }
        }
            
        return -1;
    }
};

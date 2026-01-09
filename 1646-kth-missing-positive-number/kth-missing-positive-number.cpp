class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int missing = 0;
        int num = 1;

        while (true) {

            bool found = false;

            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == num) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                missing++;

                if (missing == k) {
                    return num;
                }
            }

            num++;
        }
    }
};

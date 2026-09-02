class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {

        int gcdi = gcd(x, y);

        if(target > x + y)
            return false;

        if(target % gcdi == 0)
            return true;

        return false;
    }
};
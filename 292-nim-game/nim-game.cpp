class Solution {
public:
    bool canWinNim(int n) {
        if (n % 4 == 0)
            return false;  // you lose
        else
            return true;   // you win
    }
};

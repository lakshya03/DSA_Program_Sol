class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        unordered_set<char> sJ(jewels.begin(), jewels.end());
        for (char s : stones)
            if (sJ.count(s)) res++;
        return res;
    }
};

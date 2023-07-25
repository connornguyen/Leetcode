class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i = 0; i < jewels.length(); i++){
            for(int k = 0; k < stones.length(); k++){
                if (stones[k] == jewels[i]){
                    count++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int i;
        queue<int> q;
        sort(deck.begin(), deck.end());
        vector<int> ans(deck.size(), 0);
        for(i = 0 ; i < deck.size(); i++){
            q.push(i);
        }
        for(i = 0; i < deck.size(); i++){

            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return ans;
    }
};
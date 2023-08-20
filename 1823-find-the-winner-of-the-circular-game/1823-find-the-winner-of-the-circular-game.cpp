class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i = 1; i <= n; i++){
            q.push(i);
        }
        while( q.size() != 1){
            int i = k;
            while(i > 1){
                int r = q.front();
                q.pop();
                q.push(r);
                i--;
            }
            q.pop();
        }
        return q.front();
    }
};
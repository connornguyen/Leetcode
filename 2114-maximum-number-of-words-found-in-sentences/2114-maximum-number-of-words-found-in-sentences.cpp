class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int spaceCount = 0;
        vector<int> spaceCountarray;  
        for( int i =0; i < sentences.size(); i++){
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' ' ){
                    spaceCount++;
                }
            }
            spaceCountarray.push_back(spaceCount);
            spaceCount = 0;
        }
        return *max_element(spaceCountarray.begin(), spaceCountarray.end())+1;
    }
};
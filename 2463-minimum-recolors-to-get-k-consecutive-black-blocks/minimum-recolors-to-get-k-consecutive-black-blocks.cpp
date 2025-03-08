class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int b = 0, w = 0, mini = INT_MAX;
        for(int i = 0 ; i < k ; i++) {
            if(blocks[i] == 'W') w++;
            else if(blocks[i] == 'B') b++;
        }
        mini = min(mini, w);

        for(int i = k ; i < blocks.size() ; i++) {
            if(blocks[i] == 'W') w++;
            else if(blocks[i] == 'B') b++;

            if(blocks[i - k] == 'W') w--;
            else if(blocks[i - k] == 'B') b--;

            mini = min(mini, w);
        }

        return mini;
    }
};
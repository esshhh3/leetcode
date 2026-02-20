class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        string result = "";

        while(!freq.empty()){
            char maxchar;
            int maxFreq=0;

            for( auto it: freq){
                if ( it.second > maxFreq){
                    maxFreq= it.second;
                    maxchar= it.first;
                }
            }
            result+= string(maxFreq, maxchar);
            freq.erase(maxchar);
        }
        return result;
    }
};
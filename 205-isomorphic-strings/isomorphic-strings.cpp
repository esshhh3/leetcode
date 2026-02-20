class Solution {
public:
    bool isIsomorphic(string s, string t) {
         
         int n1 = s.size();
         int n2 = t.size();

         unordered_map<char,int>mpp1,mpp2;

         if(n1 != n2){
            return false;
         }
         for(int i =0;i<n1;i++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(mpp1.count(ch1)){
                if(mpp1[ch1] != ch2){
                    return false;
                } 
            }else{
                    mpp1[ch1] = ch2;
                 }

            if(mpp2.count(ch2)){
                 if(mpp2[ch2] != ch1){
                    return false;
                 }

            }else{
                mpp2[ch2] = ch1;
            } 
         }
      return true;
    }
};
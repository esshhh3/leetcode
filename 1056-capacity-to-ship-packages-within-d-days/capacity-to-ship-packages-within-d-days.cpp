class Solution {
public:

   int totaldays(vector<int>& weights,int cap){
       int day =1;
       int load =0;
       for(int w : weights){
           if(load + w > cap){
               day++;
               load = w;
           } else {
               load += w;
           }
       }
       return day;
   }

   int shipWithinDays(vector<int>& weights, int days) {
       int totalsum = 0;
       int maxi = INT_MIN;

       for(int w : weights){
           totalsum += w;
           maxi = max(maxi, w);
       }

       int low = maxi;
       int high = totalsum;

       while(low <= high){
           int mid = low + (high - low) / 2;
           int day = totaldays(weights, mid);

           if(day <= days){
               high = mid - 1;
           } else {
               low = mid + 1;
           }
       }
       return low;
   }
};

class Solution { 
public: 
    int minSubArrayLen(int t, vector<int>& a) { 
        int l=0,sum=0,res=INT_MAX; 
        for(int r=0;r<a.size();r++){ 
            sum+=a[r]; 
            while(sum>=t){ 
                res=min(res,r-l+1); 
                sum-=a[l++]; 
            } 
        } 
        return res==INT_MAX?0:res; 
    } 
}; 
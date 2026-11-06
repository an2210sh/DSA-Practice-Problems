class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even =0;
        for(int i=1;i<=n;i++){
            if(n%2==0)
            even++;
            else
            odd++;
        }
        return gcd(odd,even);
    }
};
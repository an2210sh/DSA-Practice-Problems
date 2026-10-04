class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int a=x;
        if(x<0)
        return 0;
        else{
        do{
            rev=rev*10+a%10;
            a/=10;
        }while(a>0);
        if(x==rev)
        return 1;
        else
        return 0;
    }
    }
};
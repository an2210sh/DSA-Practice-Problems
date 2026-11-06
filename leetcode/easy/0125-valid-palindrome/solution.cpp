class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char x:s){
            if(iswalnum(x)){
              x=tolower(x);
              a.push_back(x);
            }
        }
        string b=a;
        for(int i=0;i<a.length()/2;i++){
            swap(a[i],a[a.length()-1-i]);
        }
        if(a==b)
        return 1;
        else
        return 0;
          
    }
};
class Solution {
public:
    int maxProduct(int n) {
       vector<int> v;//assign a vector
       int i=0;
       while(n>0){//store each digit in differnt index of vector
        v.push_back(n%10);
        n=n/10;
        i++;
       }
       sort(v.begin(),v.end());//sort the values
       int m1=v[i-1],m2=v[i-2];//find max 2 values of number
       return m1*m2;
    }
};
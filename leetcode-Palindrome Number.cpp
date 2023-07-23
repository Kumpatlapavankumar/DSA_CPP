class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int  reverse=0;
        long long int temp=x;
        while(temp!=0){
            long long int digit=temp%10;
            reverse=reverse*10+digit;
            temp=temp/10;
        }
        return(reverse==x);
    }
};

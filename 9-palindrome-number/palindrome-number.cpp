class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rev=0;
        int dup=x;
        while(x>0){
            int temp= x%10;
            rev = rev*10+ temp;
            x=x/10;
            
        }
        if(rev==dup){
            return true;
        }
        else{
            return false;
        }
        
    }
};
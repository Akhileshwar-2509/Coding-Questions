 # https://leetcode.com/problems/palindrome-number/
 
 bool isPalindrome(int x) {
        if(x<0)return false;
        int num=x;
        long long rev=0;
        while(x!=0){
            int last=x%10;
            x=x/10;
            rev=(rev*10)+last;
        }
      return (int)rev==num;
    }
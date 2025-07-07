#   https://leetcode.com/problems/reverse-integer/

 int reverse(int x) {
        long long   rev=0;
        int num=x;
     //  if(x<0) x=-1*x;
        while(x!=0){
            int last=x%10;
            rev=(rev*10)+last;
            x=x/10;
        }
       
        if(rev>INT_MAX || rev <INT_MIN)return 0;
        
        return (int)rev;
    }
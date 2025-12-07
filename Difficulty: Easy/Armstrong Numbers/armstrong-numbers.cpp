// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int org =n;
         int sum = 0;
         while( n > 0)
         {
             int dig = n%10;
             sum += pow(dig , 3);
             n /=10;
         }
          if(sum != org) return false;
          return true;
    }
};
// User function Template for C++

class Solution {
  public:
  int sumofDigit(int n )
  {
      int sum=0;
      while(n > 0)
      {
          sum += n % 10;
          n /=10;
      }
      return sum;
  }
  
  bool isPalindrome(int n)
  {
      int org =n;
      int rev = 0;
      while(n > 0)
      
      {
          rev = rev * 10 + (n %10);
          n /=10;
      }
      return org == rev;
  }
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum = sumofDigit(n);
        return isPalindrome(sum);
        
    }
};
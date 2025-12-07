class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int count=0;
        int org =n;
        while(n > 0)
        {
            int r=n%10;
            if( r != 0 && org % r == 0) count++;
            n=n/10;
        }
        return count;
    }
};
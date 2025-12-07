class Solution {
  public:
  int gcd (int a,int b)
  {
      while(b!=0)
      {
          int t= b;
          b=a%b;
          a=t;
      }
      return a;
  }
  int lcm (int a,int b)
  {
      return ( abs(a*b) / gcd(a,b));
  }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        return { lcm(a,b) , gcd(a,b)};
        
    }
};
/**
Every non-negative integer N has a binary representation.  For example, 5 can be represented as "101" in binary, 11 as "1011" in binary, and so on.  Note that except for N = 0, there are no leading zeroes in any binary representation.

The complement of a binary representation is the number in binary you get when changing every 1 to a 0 and 0 to a 1.  For example, the complement of "101" in binary is "010" in binary.

For a given number N in base-10, return the complement of it's binary representation as a base-10 integer.

 

Example 1:

Input: 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
 

Note:

0 <= N < 10^9
**/

//slow
//Runtime: 8 ms, faster than 10.65% of C++ online submissions for Complement of Base 10 Integer.
//Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Complement of Base 10 Integer.
//fast
//Runtime: 4 ms, faster than 100.00% of C++ online submissions for Complement of Base 10 Integer.
//Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Complement of Base 10 Integer.
class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0) return 1;
        
        vector<int> v;
        while(N > 0){
            v.push_back(N%2);
            N/=2;
        }
        
        int ans = 0;
        
        for(int i = v.size()-1; i >=0; i--){
            if(v[i]==0){
                //ans += pow(2, i); //slow
                ans += 1<<i; //fast
            }
        }
        
        return ans;
    }
};


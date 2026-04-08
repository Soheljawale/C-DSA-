// Math Problem 

// 1281. Subtract the Product and Sum of Digits of an Integer

// Input: n = 234  
// Digits → 2, 3, 4  

// Product = 2 × 3 × 4 = 24  
// Sum = 2 + 3 + 4 = 9  

// Output = 24 - 9 = 15

// ⏱️ Complexity
// Time: O(d), where d = number of digits
// Space: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;

        while(n){
            int x = n % 10;
            product *=x;
            sum += x;
            n /= 10;
        }
        return product - sum;
    }
};

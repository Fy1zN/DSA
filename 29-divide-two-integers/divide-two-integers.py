class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        INT_MAX = 2147483647
        INT_MIN = -2147483648

       
        if dividend == INT_MIN and divisor == -1:
            return INT_MAX 

        isNeg = (dividend < 0) ^ (divisor < 0)

        n, d = abs(dividend), abs(divisor)
        quotient = 0 

        while n >= d:
            temp, multiple = d, 1
            
           
            while n >= (temp << 1):
                temp <<= 1      
                multiple <<= 1
                
            
            n -= temp
            quotient += multiple

       
        if isNeg:
            quotient = -quotient

        return max(INT_MIN, min(quotient, INT_MAX))
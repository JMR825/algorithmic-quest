class Solution(object):
    def addStrings(self, num1, num2):
        num1_int = int(num1)
        num2_int = int(num2)
        
        total = num1_int + num2_int
        return str(total)

# Test case example
solution = Solution()

# Input example
str1 = "123"
str2 = "456"
print(solution.addStrings(str1, str2))  # Expected output: "579"


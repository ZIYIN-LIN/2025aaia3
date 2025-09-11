#week01-2.py
#LeetCode 28 Find the Index of the First Occurrence in a String
#在 haystak 乾稻草堆 裡找到 needle(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        for i in range(H-N+1):
            #切片 slicing
            if haystack[ i : i+N ] == needle:# 找到的話
                return i
        return -1 #沒有找到
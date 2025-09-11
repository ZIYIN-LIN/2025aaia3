# week01-2b.py
# LeetCode 28 Find the Index of the First Occurrence in a String
# 在 haystak 乾稻草堆 裡找到 needle(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
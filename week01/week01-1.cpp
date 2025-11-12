// leetcode 學習計畫 大海撈針 在 haystack 找到 needle
// 28 Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //
        //
        // i:0 sad

        // i:1 sad

        // i:2 sad

        int H =haystack.length(), N = needle.length();
        for(int i = 0; i <= H - N; i++){
            if(haystack.substr(i ,N) == needle) return i;
        }
        return -1;
    }
};

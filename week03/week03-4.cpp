//在c++也只要一行 haystack.find(needle); 在草堆裡找到針needle
class Solution {
public:
    int strStr(string haystack, string needle) {
        //https://cplusplus.com/reference/string/string/string/find/
        return haystack.find(needle);
    }
};

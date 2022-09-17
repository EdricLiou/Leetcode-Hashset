//iteration

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res = 0;
        for (char s : S) {
            for (char j : J) {
                if (s == j) {
                    ++res; break;
                }
            }
        }
        return res;
    }
};

//hashset

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res = 0;
        unordered_set<char> s;
        for (char c : J) s.insert(c);
        for (char c : S) {
            if (s.count(c)) ++res;
        }
        return res;
    }
};

//https://www.cnblogs.com/grandyang/p/8910994.html

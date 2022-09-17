// one hashmap

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int res = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < B.size(); ++j) {
                ++m[A[i] + B[j]];
            }
        }
        for (int i = 0; i < C.size(); ++i) {
            for (int j = 0; j < D.size(); ++j) {
                int target = -1 * (C[i] + D[j]);
                res += m[target];
            }
        }
        return res;
    }
};

//two hashmap

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int res = 0, n = A.size();
        unordered_map<int, int> m1, m2;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                ++m1[A[i] + B[j]];
                ++m2[C[i] + D[j]];
            }
        }
        for (auto a : m1) res += a.second * m2[-a.first];
        return res;
    }
};

//https://www.cnblogs.com/grandyang/p/6073317.html

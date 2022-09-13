class MyHashSet {
public:
        vector<bool> ans;
    MyHashSet() {
        ans.resize(1e6+1,false);
    }
    
    void add(int key) {
        ans[key]=true;
    }
    
    void remove(int key) {
        ans[key]=false;
    }
    
    bool contains(int key) {
        return ans[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
 
 //https://leetcode.com/explore/learn/card/hash-table/182/practical-applications/1139/discuss/1968031/CPP-or-Fastre-than-97-or-Easy-Understand-or-TC:-O(1)-SC:-O(n)orUsing-vector

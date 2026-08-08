class MyHashSet {
private:
    const static int SIZE =1007;
    vector<list<int>> buckets;
    int hash(int key){
        return key % SIZE;
    }
public:
    MyHashSet() {
       buckets.resize(SIZE); 
    }
    
    void add(int key) {
        int idx= hash(key);
        auto& bucket = buckets[idx];
        for(int element  : bucket) {
            if(element == key) return;
        }
        bucket.push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        auto& bucket = buckets[idx];
        for(auto it =bucket.begin(); it!=bucket.end();++it){
            if(*it == key){
                bucket.erase(it);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int idx  = hash(key);
        auto& bucket = buckets[idx];
        for(int element: bucket){
            if(element == key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
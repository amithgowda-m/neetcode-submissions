class MyHashMap {
private:
    const static int SIZE = 1007;
    vector<list<pair<int,int>>> mp;
    
    int hash(int key){
        return key % SIZE;
    }
public:
    
    MyHashMap() {
        mp.resize(SIZE);
    }
    
    void put(int key, int value) {
        int idx= hash(key);
        auto & bucket = mp[idx];
        for(auto& p : bucket){
            if(p.first == key){
                p.second = value;
                return;
            }
        }
        bucket.push_back({key,value});
    }
    
    int get(int key) {
        int idx= hash(key);
        auto & bucket = mp[idx];
        for(auto& p : bucket){
            if(p.first == key) return p.second;
        }
        return -1;
    }
    
    void remove(int key) {
    int idx = hash(key);
    auto& bucket = mp[idx];
    for (auto it = bucket.begin(); it != bucket.end(); ++it) {
        if (it->first == key) {
            bucket.erase(it);
            return; 
        }
    }
}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
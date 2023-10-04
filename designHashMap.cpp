#include <iostream>
#include <vector>
using namespace std;

class MyHashMap {
private:
    struct KeyValue {
        int key;
        int value;
        KeyValue(int k, int v) : key(k), value(v) {}
    };
    static const int SIZE = 1000;
    vector<vector<KeyValue>> buckets;
    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() {
        buckets.resize(SIZE);
    }

    void put(int key, int value) {
        int index = hash(key);
        for (auto& kv : buckets[index]) {
            if (kv.key == key) {
                kv.value = value;
                return;
            }
        }
        buckets[index].push_back(KeyValue(key, value));
    }

    int get(int key) {
        int index = hash(key);
        for (auto& kv : buckets[index]) {
            if (kv.key == key) {
                return kv.value;
            }
        }
        return -1;
    }
    void remove(int key) {
        int index = hash(key);
        for (auto it = buckets[index].begin(); it != buckets[index].end(); ++it) {
            if (it->key == key) {
                buckets[index].erase(it);
                return;
            }
        }
    }
};

int main()
{
    return 0;
}
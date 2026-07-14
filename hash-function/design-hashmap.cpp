class MyHashMap {
public:

    vector<vector<pair<int,int>>> table;
    int SIZE = 1000;

    MyHashMap() {
        table.resize(SIZE);
    }

    int hashFunction(int key) {
        return key % SIZE;
    }

    void put(int key, int value) {

        int index = hashFunction(key);

        
        for(auto &it : table[index]) {

            if(it.first == key) {
                it.second = value;
                return;
            }
        }

       
        table[index].push_back({key, value});
    }

    int get(int key) {

        int index = hashFunction(key);

        for(auto &it : table[index]) {

            if(it.first == key) {
                return it.second;
            }
        }

        return -1;
    }

    void remove(int key) {

        int index = hashFunction(key);

        for(int i = 0; i < table[index].size(); i++) {

            if(table[index][i].first == key) {

                table[index].erase(table[index].begin() + i);
                return;
            }
        }
    }
};
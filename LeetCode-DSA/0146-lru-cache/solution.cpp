class LRUCache {
public:
    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;
        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };
    unordered_map<int, Node*> cache;
    int capacity;
    Node* head;
    Node* tail;
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
    auto it = cache.find(key);

    if (it == cache.end()) {
        return -1;
    }

    Node* node = it->second;
    moveToFront(node);
    return node->value;
}

    void put(int key, int value) {
        auto it = cache.find(key);

    if (it != cache.end()) {
        Node* node = it->second;
        node->value = value;
        moveToFront(node);
        return;
    }
     Node* node = new Node(key, value);
    insertFront(node);
    cache[key] = node;
    if (cache.size() > capacity) {
    Node* lru = tail->prev;
    cache.erase(lru->key);
    remove(lru);
    delete lru;
}
    }
    void insertFront(Node* node) {
        Node* oldFirst = head->next;

        node->prev = head;
        node->next = oldFirst;

        head->next = node;
        oldFirst->prev = node;
    }
    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    void moveToFront(Node* node) {
        remove(node);
        insertFront(node);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

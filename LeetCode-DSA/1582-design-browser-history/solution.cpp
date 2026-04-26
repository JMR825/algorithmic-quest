struct Node
{
    string url;
    Node* next;
    Node* prev;
    Node(string u) : url(u), prev(nullptr), next(nullptr) {}
};
class BrowserHistory {
public:
Node* current;
    BrowserHistory(string homepage) 
    {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode=new Node(url);
        current->next=newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    string back(int steps) {
        while (steps > 0 && current->prev != nullptr) {
            current = current->prev; // Move back one step
            steps--;
        }
        return current->url;
    }
    
    string forward(int steps) {
        while (steps > 0 && current->next != nullptr) {
            current = current->next;
            steps--;
        }
        return current->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

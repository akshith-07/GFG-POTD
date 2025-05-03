//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

bool isprime(int num){
   /// int i = 1;
   if (num <= 1) return false;
    for (int i=2; i<=sqrt(num) ; i++){
        if (num %i == 0){
            return false;
        }
    }
    return true;
}


int neigh(int num) {
    if (isprime(num)) return num; // If num is already prime
    
    int l = num - 1;
    int h = num + 1;

    while (true) {
        if (l >= 2 && isprime(l)) return l;
        if (isprime(h)) return h;
        l--;
        h++;
    }
}

class Solution {
  public:
    Node *primeList(Node *head) {
        // code here
        Node *ptr = head;
        while(ptr){
            if (!isprime(ptr->val) ){
                ptr->val = neigh(ptr->val);
            }
            ptr = ptr->next;
        }
        return head;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
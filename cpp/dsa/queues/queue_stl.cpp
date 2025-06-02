/** Queue in C++ STL
* Queue -> A data structure that follows the FIFO principle.
 */

#include <iostream>
#include <vector>
#include <string>

// Include the queue library for queue operations
#include <queue>

using namespace std;


int main() {
    // Initialize a queue of integers
    queue<int> q;

    // Enqueue -> Add elements to the back of the queue: push()
    q.push(30);
    q.push(20);
    q.push(100);

    // Checking item at the front of the queue (Head item): front()
    cout << "Queue head: " << q.front() << "\n";

    // Checking item at the back of the queue (Tail item): back()
    cout << "Queue tail: " << q.back() << "\n";

    // Dequeue -> Delete elements from the front of the queue: pop()
    q.pop();
    cout << "New queue head after dequeue: " << q.front() << "\n";

    // Pseudo traversal -> Create a queue copy, access the front element of copy while dequeuing
    queue<int> q_temp(q);

    while(!q_temp.empty()) {
        cout << q_temp.front() << " " ;
        q_temp.pop();
    }
    cout << "\n";

    return 0;
}
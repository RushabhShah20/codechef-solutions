// Problem: Find Middle Element of Linked List
// Link to the problem: https://www.codechef.com/problems/LLMID
/*class Node{
    int val;
    Node next;
    Node(int x){
    	val = x; next = null;
    }
}*/

static int getMiddleElement(Node head) {
    Node slow = head;
    Node fast = head;
    Node curr = head;
    while (fast != null && fast.next != null) {
        slow = slow.next;
        fast = fast.next.next;
        curr = curr.next;
    }
    return slow.val;
}
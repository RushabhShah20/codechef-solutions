# Problem: Find Middle Element of Linked List
# Link to the problem: https://www.codechef.com/problems/LLMID
"""
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
"""

def getMiddleElement(head):
    if head is None:
        return -1
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
    return slow.data
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_nth_node(head: ListNode, n: int) -> int:
    curr = head
    count = 1

    while curr is not None and count < n:
        curr = curr.next
        count += 1

    # Return -1 if N is out of bounds (greater than list length)
    if curr is None:
        return -1

    return curr.val

# Example Usage: 1 -> 2 -> 3 -> 4 -> 5, N = 3
head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print(get_nth_node(head, 3))  # Output: 3

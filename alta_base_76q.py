class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def print_reverse(head: ListNode) -> None:
    if head is None:
        return
    print_reverse(head.next)
    print(head.val, end=" ")

# Example usage: 1 -> 2 -> 3
head = ListNode(1, ListNode(2, ListNode(3)))
print_reverse(head)  # Output: 3 2 1

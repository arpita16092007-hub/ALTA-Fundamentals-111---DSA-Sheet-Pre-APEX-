class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def search_linked_list(head: ListNode, target: int) -> bool:
    current = head
    while current is not None:
        if current.val == target:
            return True
        current = current.next
    return False

# Build the linked list: 1 -> 2 -> 3
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Run and print the output
print(search_linked_list(head, 2))

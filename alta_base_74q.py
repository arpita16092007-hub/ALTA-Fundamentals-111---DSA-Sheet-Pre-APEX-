class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def insert_sorted(head: ListNode, val: int) -> ListNode:
    new_node = ListNode(val)
    if not head or val <= head.val:
        new_node.next = head
        return new_node
    
    current = head
    while current.next and current.next.val < val:
        current = current.next
        
    new_node.next = current.next
    current.next = new_node
    return head

def print_list(head: ListNode):
    elements = []
    while head:
        elements.append(str(head.val))
        head = head.next
    print("->".join(elements))

# Driver Code
head = ListNode(1, ListNode(3, ListNode(5)))
head = insert_sorted(head, 4)
print_list(head)

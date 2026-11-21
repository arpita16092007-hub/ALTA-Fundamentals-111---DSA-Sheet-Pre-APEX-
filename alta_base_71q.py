class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def delete_first_occurrence(head: ListNode, val: int) -> ListNode:
    dummy = ListNode(0, head)
    curr = dummy
    
    while curr.next:
        if curr.next.val == val:
            curr.next = curr.next.next
            break
        curr = curr.next
        
    return dummy.next

# Helper function to convert a Python list into a Linked List
def build_linked_list(values):
    dummy = ListNode()
    curr = dummy
    for v in values:
        curr.next = ListNode(v)
        curr = curr.next
    return dummy.next

# Helper function to print the Linked List in 1->2->4 format
def print_linked_list(head):
    elements = []
    curr = head
    while curr:
        elements.append(str(curr.val))
        curr = curr.next
    print("->".join(elements) if elements else "Empty List")

# --- Driver Code (Creates Output) ---
if __name__ == "__main__":
    head = build_linked_list([1, 2, 3, 4])
    target = 3
    
    updated_head = delete_first_occurrence(head, target)
    print_linked_list(updated_head)  # Output: 1->2->4

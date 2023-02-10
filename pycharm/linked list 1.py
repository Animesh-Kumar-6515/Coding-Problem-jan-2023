class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None
class Linked:
    def __init__(self):
        self.head=None
    def show(self):
        node=self.head
        while node is not None:
            print(node.data)
            note=node.next
link=Linked()
ele=Node("ani")
link.head=ele
link.show()
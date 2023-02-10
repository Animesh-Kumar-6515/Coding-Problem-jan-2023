class solution:
    def __init__(self):
        self.head=None
    def removenthnode(self,position):
        if self.head is None:
            return
        if position==0:
            self.head=self.head.next
            return self.head

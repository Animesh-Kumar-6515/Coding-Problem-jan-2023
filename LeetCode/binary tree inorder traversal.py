class Node(object):
    def __init__(self,value):
        self.value=value
        self.left=None
        self.right=None
class Binary_tree(object):
    def insert(self,data):
        if self.data:
            if(data < self.data):
                if(self.left is None):
                    self.left=Node(data)
                else:
                    self.left.insert(data)
            elif(data > self.data):
                if(self.right is None):
                    self.right=Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data=data

    def Print_inorder(self,start,traversal):
        arr[]
        if start:
            traversal=self.Print_inorder(start.left,traversal)
            traversal+=(str(start.value)+"")
            arr=arr.append(start.value)
            traversal=self.Print_inorder(start.right,traversal)
        return arr

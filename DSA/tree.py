class TreeNode:
    def __init__(self,data):
        self.data=data
        self.children=[]
        self.parent=None

    def add_child(self,child):
        child.parent=self
        self.children.append(child)
    def print_tree



    def build_product_tree():
        root=TreeNode("Electronics")

        laptop=TreeNode("Laptop")
        laptop.add_child(TreeNode("mac"))
        laptop.add_child(TreeNode("Surface"))
        laptop.add_child(TreeNode("Thinkpad"))

        cellphone=TreeNode("CellPhone")
        cellphone.add_child((TreeNode("iphone")))
        cellphone.add_child(TreeNode("Google Pixel"))
        cellphone.add_child(TreeNode("Vivo"))

        TV=TreeNode("TV")
        TV.add_child(TreeNode("Samsung"))
        TV.add_child(TreeNode("LG"))

if __name__="__main__":
    build_product_tree()
    print_tree()
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        tree_vals=[]
        def inorder(tree):
            if tree:
                inorder(tree.left)
                tree_vals.append(tree.val)
                inorder(tree.right)
        inorder(root)
        return tree_vals
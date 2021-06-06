Node insertRec(Node root, int data)
    {
 
        if (root == null) {
            root = new Node(data);
            return root;
        }
        if (data < root.data)
            root.left = insertRec(root.left, data);
        else if (data > root.data)
            root.right = insertRec(root.right, data);
 
        return root;
    }
    ArrayList<Integer> treeToList(Node node, ArrayList<Integer>
                                                 list)
    {
        // Base Case
        if (node == null)
            return list;
 
        treeToList(node.left, list);
        list.add(node.data);
        treeToList(node.right, list);
 
        return list;
    }
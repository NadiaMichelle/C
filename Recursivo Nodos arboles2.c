iterativePreorder(node)
   if (node = null)
     return
   s ← empty stack
   s.push(node)
   while (not s.isEmpty())
     node ← s.pop()
     visit(node)
     if (node.right ≠ null)
       s.push(node.right)
     if (node.left ≠ null)
       s.push(node.left)
 iterativeInorder(node)
   s ← empty stack
   while (not s.isEmpty() or node ≠ null)
     if (node ≠ null)
       s.push(node)
       node ← node.left
     else
       node ← s.pop()
       visit(node)
       node ← node.right
 iterativePostorder(node)
   s ← empty stack
   lastNodeVisited ← null
   while (not s.isEmpty() or node ≠ null)
     if (node ≠ null)
       s.push(node)
       node ← node.left
     else
       peekNode ← s.peek()
       if (peekNode.right ≠ null and lastNodeVisited ≠ peekNode.right)
         node ← peekNode.right
       else
         visit(peekNode)
         lastNodeVisited ← s.pop()

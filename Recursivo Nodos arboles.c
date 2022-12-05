preorden(nodo)
  si nodo == nulo entonces retorna
  imprime nodo.valor
  preorden(nodo.izquierda)
  preorden(nodo.derecha)
inorden(nodo)
  si nodo == nulo entonces retorna
  inorden(nodo.izquierda)
  imprime nodo.valor
  inorden(nodo.derecha)
postorden(nodo)
  si nodo == nulo entonces retorna
  postorden(nodo.izquierda)
  postorden(nodo.derecha)
  imprime nodo.valor

//funciones
preorder(node)
  if node == null then return
  print node.value
  preorder(node.left)
  preorder(node.right)
inorder(node)
  if node == null then return
  inorder(node.left)
  print node.value
  inorder(node.right)
postorder(node)
  if node == null then return
  postorder(node.left)
  postorder(node.right)
  print node.value

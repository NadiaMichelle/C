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

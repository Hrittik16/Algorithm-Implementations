# Singly Linked List in python3
# Create a node
# Add it to the LinkedList

class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
	def insert(self, newNode):
		if self.head is None:
			self.head = newNode
		else:
			temp = self.head
			while temp.next is not None:
				temp = temp.next
			temp.next = newNode
	def PrintLinkedList(self):
		temp = self.head
		if temp is None:
			print("List is empty!")
		while temp is not None:
			print(temp.data + " ")
			temp = temp.next

newNode = Node("Hrittik")
linkedList = LinkedList()
linkedList.insert(newNode)
newNode1 = Node("Atul")
newNode2 = Node("Souvik")
linkedList.insert(newNode1)
linkedList.insert(newNode2)
linkedList.PrintLinkedList()

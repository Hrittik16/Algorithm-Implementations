# Add a node at nth position

class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
		self.length = 0
	def insert(self, newNode):
		if self.head is None:
			self.head = newNode
		else:
			temp = self.head
			while temp.next is not None:
				temp = temp.next
			temp.next = newNode
		self.length += 1

	def InsertAtNthPos(self, newNode, n):
		if n < 0 or n > self.length-1:
			return
		temp = self.head
		while n-1 > 0:
			temp = temp.next
			n = n-1
		curr = temp.next
		temp.next = newNode
		newNode.next = curr
		self.length += 1

	def PrintLinkedList(self):
		temp = self.head
		if temp is None:
			print("List is empty!")
		while temp is not None:
			print(temp.data + " ")
			temp = temp.next

linkedList = LinkedList()
newNode = Node("Hrittik")
newNode1 = Node("Atul")
newNode2 = Node("Souvik")
linkedList.insert(newNode)
linkedList.insert(newNode1)
linkedList.insert(newNode2)

# Nth position (0 based indexing)
n = 1

# Node to be inserted at Nth position
newNode3 = Node("Rahul")

# Insert node at Nth position
linkedList.InsertAtNthPos(newNode3, n)

# Print LinkedList
linkedList.PrintLinkedList()

newNode4 = Node("X Man")
linkedList.InsertAtNthPos(newNode4, 2)
linkedList.PrintLinkedList()

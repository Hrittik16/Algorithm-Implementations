# Add a node at the beginning of a LinkedList

class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
	
	def InsertNodeAtHead(self, newNode):
		temp = self.head
		self.head = newNode
		newNode.next = temp

	def InsertNodeAtTail(self, newNode):
		if self.head is None:
			self.head = newNode
		else:
			temp = self.head
			while temp.next is not None:
				temp = temp.next
			temp.next = newNode
	def PrintLinkedList(self):
		if self.head is None:
			print("List is empty!")
		else:
			temp = self.head
			while temp is not None:
				print(temp.data+" ", end='')
				temp = temp.next
			print()


# Created empty Linked List
list1 = LinkedList()

# Created 4 nodes
node1 = Node("1")
node2 = Node("2")
node3 = Node("3")
node4 = Node("4")

# Inserting nodes into the LinkedList
list1.InsertNodeAtTail(node2);
list1.InsertNodeAtTail(node3);
list1.InsertNodeAtTail(node4);
list1.InsertNodeAtHead(node1);

# Printing the LinkedList
list1.PrintLinkedList()

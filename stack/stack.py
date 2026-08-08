#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-06
#Building Stack

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
#Stack with Linked list type connecting data
class stack:
    def __init__(self, limit = 5):
        self.head = None
        self.limit = limit
        self.size = 0


    def pprint(self):
        if self.isEmpty():
            print("Stack is empty!")
            return
        temp = self.head
        print("---Stack---")
        while temp:
            print(temp.data)
            temp = temp.next
        print('--------')
    
    def push(self, new_data):
        if self.isFull():
            print(f"Overflow!Cannot push {new_data}. Stack is full!")
            return
        new_node = Node(new_data)

        new_node.next = self.head
        self.head = new_node
        self.size += 1

    
    def pop(self):
        if self.isEmpty():
            print("Stack is empty! cant pop.")
            return None
        value = self.head.data
        self.head = self.head.next
        self.size -= 1
        return value

    def isEmpty(self):
        return self.head is None
    
    def isFull(self):
        return self.size >= self.limit
    
    def peek(self):
        if self.isEmpty():
            return None
        return self.head.data



ll1 = stack(limit = 4)
ll1.push('Hasan')
ll1.push('Husan')
ll1.push('Anvar')
ll1.push('Botir')
ll1.pprint()

print("Is stack full?",ll1.isFull())

ll1.push('Bilol')
ll1.pprint()
#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#dars-03
#Linked List

from dars_03_linked_list import Node, Linked_list

llist = Linked_list()
llist.head = Node('Monday')
seshanba = Node('Tuesday')
chorshanba = Node('Wednesday')


llist.head.next = seshanba
seshanba.next = chorshanba


llist.add_after(seshanba, 'seshanba ertalab')


llist.append('Thursday')
llist.pprint()
llist.delete('Thursday')
llist.delete('seshanba ertalab')
llist.pprint()
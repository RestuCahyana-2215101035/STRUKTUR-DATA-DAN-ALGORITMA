#include <iostream>
#include "linkedlist.h"
//#include "LinkedList.cpp"
using namespace std;





int main (int argc, char** argv)
{
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	list1.insertToHead(100);
	
	cout << "head: " << list1.head->value << endl; 
	cout << "tail: " << list1.tail->value << endl; 
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	LinkedList list2;
	
	list2.insertToHead(45);
	list2.insertToHead(56);
	
	list2.printAll();
	
	

    list1.insertToTail(43);
    list1.insertToTail(65);
    
    list1.printAll();
    

    list1.insertAfter(98, 20);
    list1.printAll();
    

    list1.deleteFromHead();
    list1.printAll();
    

    list1.deleteFromTail();
    list1.printAll();

    list1.deleteByValue(98);
    list1.printAll();
   
	
	return 0;
}

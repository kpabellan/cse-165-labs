#ifndef STACK_H 
#define STACK_H

#include <iostream>

class Stack { 
  struct Link { 
    double digits; 
    Link* next; 

    Link(double d, Link* nxt) {
      digits = d; 
      next = nxt;
    }

    ~Link() {
      delete next;
    }
  }* head; 

  public: 
    Stack() {
      head = 0;
    }

    Stack(int n) {
      head = 0;
      double elements = 1.0;
      for (int i = 0; i < n; i++) {
        push(elements);
        elements = elements + 0.1;
      }
    }

    ~Stack() { 
      while (head != 0) {
        double value = pop();
        std::cout << value << " ";
      }
    }

    void push(double d) {
      head = new Link(d, head);
    }

    double peek() {
      if (head == 0) {
        return 0.0;
      }
      return head->digits;
    }

    double pop() {
      if (head == 0) {
        return 0.0;
      }

      double result = head->digits;
      Link* oldHead = head;
      head = head->next;
      oldHead->next = 0;
      delete oldHead;
      return result;
    } 
}; 

#endif // STACK_H ///:~
#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>

struct LinkedList {
  struct Link {
    void *data;
    Link *next;

    Link(void *dat, Link *nxt) {
      data = dat;
      next = nxt;
    }
  };

  Link *head;

  // Constructor
  LinkedList(void *dat, Link *nxt) {
    head = new Link(dat, nxt);
  }

  // Add
  void add( LinkedList::Link *l, int n ) {
    for (int i = 0; i < n; i++) {
      l->next = new Link(new double(n - 1 - i), l->next);
    }
  }

  // Print
  void print() {
    Link *curr = head;
    while (curr != NULL) {
      double *currData = static_cast<double*>(curr->data);
      std::cout << *currData << std::endl;
      curr = curr->next;
    }
  }

  // Cleanup
  void cleanup() {
    Link *curr = head;
    while (curr != NULL) {
      delete static_cast<double*>(curr->data);
      Link *n = curr->next;
      delete curr;
      curr = n;
    }
    head = NULL;
  }
};

#endif
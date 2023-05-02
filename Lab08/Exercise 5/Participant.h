#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>
#include "Sortable.h"

class Participant : public Sortable {
  public:
    std::string name;
    int age;
    int score;
    static bool (*comp_cb)(const Participant*, const Participant*);

    Participant( std::string name, int age, int score ) {
      this->name = name;
      this->age = age;
      this->score = score;
    }

    bool compare( const Sortable* other) {
      Participant* otherParticipant = (Participant*)other;

      return (*comp_cb)(otherParticipant, this);
    }

    void print() {
      std::cout << name << "\t" << age << "\t" << score << std::endl;
    }
};

#endif
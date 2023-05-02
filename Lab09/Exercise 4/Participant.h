#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>
#include "Sortable.h"

class Participant : public Sortable {
  private:
    std::string name;
    int age;
    int score;
  
  public:
    Participant( std::string name, int age, int score ) {
      this->name = name;
      this->age = age;
      this->score = score;
    }

    bool compare( const Sortable* other) {
      const Participant* otherParticipant = dynamic_cast<const Participant*>(other);

      if (otherParticipant == nullptr) {
        return true;
      } else {
        if (this->score != otherParticipant->score) {
          return this->score < otherParticipant->score;
        } else if (this->age != otherParticipant->age) {
          return this->age > otherParticipant->age;
        } else {
          return this->name > otherParticipant->name;
        }
      }
    }

    void print() {
      std::cout << name << "\t" << age << "\t" << score << std::endl;
    }
};

#endif
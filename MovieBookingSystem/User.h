//
// Created by zobin on 9/19/24.
//

#ifndef USER_H
#define USER_H
#include <memory>
#include <string>
#include <vector>


class Reservation;

class User {
   std::string userName;
   int age;
   std::vector<std::shared_ptr<Reservation>> reservations;

public:
   explicit User(const std::string& name, int age);
   std::string getName() const;
   void addReservation(std::shared_ptr<Reservation> reservation);
   void printAllReceipts() const;
};



#endif //USER_H

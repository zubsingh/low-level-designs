//
// Created by zobin on 9/19/24.
//

#include "User.h"
#include "Reservation.h"


User::User(const std::string& name, int age) : userName(name), age(age) {}

std::string User::getName() const {
    return this->userName;
}

void User::addReservation(std::shared_ptr<Reservation> reservation) {
    reservations.push_back(reservation);
}

void User::printAllReceipts() const {
    for (const auto& reservation : reservations) {
        reservation->printReceipt();
    }
}
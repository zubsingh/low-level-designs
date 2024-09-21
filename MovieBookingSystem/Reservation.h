//
// Created by zobin on 9/20/24.
//

#ifndef RESERVATION_H
#define RESERVATION_H
#include <memory>
#include <vector>


class Hall;
class Movie;
class User;

class Reservation {
protected:
    static int reservationCounter; // Static counter for unique reservation IDs
    int reservationID;
    std::shared_ptr<User> user;
    std::shared_ptr<Movie> movie;
    int showStartTime;
    std::shared_ptr<Hall> hall;
    std::vector<int> seatNumbers;
public:
    Reservation(std::shared_ptr<User> user,
                std::shared_ptr<Movie> movie,
                int showStartTime,
                std::shared_ptr<Hall> hall,
                const std::vector<int>& seatNumbers);

    int getReservationID() const;
    void printReceipt() const;
    // Other methods as needed
};



#endif //RESERVATION_H

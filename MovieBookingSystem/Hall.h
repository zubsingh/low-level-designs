//
// Created by zobin on 9/20/24.
//

#ifndef HALL_H
#define HALL_H
#include <memory>
#include <vector>

#include "HallInterface.h"
#include "Movie.h"
#include "Seats.h"


class Hall : public HallInterface{
   std::string hallName;
   std::shared_ptr<Seats> seats_obj;
   std::unordered_map<std::string,std::shared_ptr<Movie>> movieSchedule;
public:
   explicit Hall(std::string hallName, std::shared_ptr<Seats> seats_obj);
   std::string getHallName();
   std::shared_ptr<Seats> getSeatsObj();
   void addMovie(std::shared_ptr<Movie> movie);
   std::shared_ptr<Movie> getMovieByName(const std::string& movieName);
   BookingStatus bookSeats(const std::string& movieName, int startTime, const std::vector<int>& seatNumbers);

};



#endif //HALL_H

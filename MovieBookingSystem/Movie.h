//
// Created by zobin on 9/20/24.
//

#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>


class Movie {
    std::string movieName;
    std::vector<std::pair<int,int>> movieSlots;
public:
    explicit Movie(std::string movieName);
    std::string getMovieName();
    void addShowSlot(int startTime,int endTime);
    bool isMovieSlotAvailable(int startTime,int endTime) const;
};



#endif //MOVIE_H

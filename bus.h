#ifndef BUS_H
#define BUS_H

#include <iostream>

// CLASS BUS
class Bus
{
private:
    int maxSeats=32;
    int bookedSeats=0;
    double busFare=0.0;
    std::string busNo;
    std::string source;
    std::string destination;
    std::string sourceTime;
    std::string destinationTime;

public:
    Bus()
    {
        std::string busNo= "";
        std::string source= "";
        std::string destination= "";
        std::string sourceTime ="";
        std::string destinationTime= "";
    }

    // METHODS
    void addBus();
    void showAllBus();
    void showBusDetails();
    void viewBusDetails();
    void deleteBus();
    void editBus();

    // GETTERS
    std::string getBusNo()
    {
        return busNo;
    }

    std::string getSource()
    {
        return source;
    }

    std::string getDestination()
    {
        return destination;
    }

    std::string getSourceTime()
    {
        return sourceTime;
    }

    std::string getDestinationTime()
    {
        return destinationTime;
    }

    int getBookedSeats()
    {
        return bookedSeats;
    }

    int getMaxSeats()
    {
        return maxSeats;
    }

    double getBusFare()
    {
        return busFare;
    }

    // SETTERS
    void setBookedSeats()
    {
        bookedSeats++;
    }

    void setCancelTicket()
    {
        bookedSeats--;
    }

    void setSource(const std::string s)
    {
        if (!s.empty())
            std::string source= s;
    }

    void setDestination(const std::string d)
    {
        if (!d.empty())
            std::string destination= d;
    }

    void setSourceTime(const std::string s)
    {
        if (!s.empty())
            std::string sourceTime= s;
    }

    void setDestinationTime(const std::string d)
    {
        if (!d.empty())
            std::string destinationTime= d;
    }

    void setBusFare(double f)
    {
        if (f)
            busFare = f;
    }
};
#endif // !BUS_H

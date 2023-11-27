#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Класс для представления бронирования
class Booking {
public:
    std::string roomNumber;
    std::string guestName;
    std::string startDate;
    std::string endDate;
};

// Класс для представления информации о доступности номеров
class Availability {
public:
    std::string roomNumber;
    std::string startDate;
    std::string endDate;
};

// Класс для управления бронированиями
class BookingManager {
private:
    std::vector<Booking> bookings;

public:
    void addBooking(Booking booking) {
        bookings.push_back(booking);
        std::cout << "Booking added successfully" << std::endl;
    }

    void cancelBooking(int bookingIndex) {
        if (bookingIndex < bookings.size() && bookingIndex >= 0) {
            bookings.erase(bookings.begin() + bookingIndex);
            std::cout << "Booking canceled successfully" << std::endl;
        } else {
            std::cout << "Invalid booking index" << std::endl;
        }
    }

    void printBookings() {
        if (bookings.empty()) {
            std::cout << "No bookings found" << std::endl;
        } else {
            for (size_t i = 0; i < bookings.size(); i++) {
                std::cout << "Booking " << i + 1 << ": " << std::endl;
                std::cout << "Room Number: " << bookings[i].roomNumber << std::endl;
                std::cout << "Guest Name: " << bookings[i].guestName << std::endl;
                std::cout << "Start Date: " << bookings[i].startDate << std::endl;
                std::cout << "End Date: " << bookings[i].endDate << std::endl;
                std::cout << "==============================" << std::endl;
            }
        }
    }
};

// Класс для управления доступностью номеров
class AvailabilityManager {
private:
    std::vector<Availability> availabilities;

public:
    void addAvailability(Availability availability) {
        availabilities.push_back(availability);
        std::cout << "Availability added successfully" << std::endl;
    }

    void printAvailabilities() {
        if (availabilities.empty()) {
            std::cout << "No availabilities found" << std::endl;
        } else {
            for (size_t i = 0; i < availabilities.size(); i++) {
                std::cout << "Availability " << i + 1 << ": " << std::endl;
                std::cout << "Room Number: " << availabilities[i].roomNumber << std::endl;
                std::cout << "Start Date: " << availabilities[i].startDate << std::endl;
                std::cout << "End Date: " << availabilities[i].endDate << std::endl;
                std::cout << "==============================" << std::endl;
            }
        }
    }
};

// Функция для генерации отчета
void generateReport(BookingManager& bookingManager, AvailabilityManager& availabilityManager) {
    std::cout << "============ Bookings ============" << std::endl;
    bookingManager.printBookings();
    std::cout << "=========== Availabilities =========" << std::endl;
    availabilityManager.printAvailabilities();
}

int main() {
    BookingManager bookingManager;
    AvailabilityManager availabilityManager;

    Booking booking1;
    booking1.roomNumber = "101";
    booking1.guestName = "John Doe";
    booking1.startDate = "01-01-2022";
    booking1.endDate = "05-01-2022";
    bookingManager.addBooking(booking1);

    Booking booking2;
    booking2.roomNumber = "201";
    booking2.guestName = "Jane Smith";
    booking2.startDate = "01-02-2022";
    booking2.endDate = "03-02-2022";
    bookingManager.addBooking(booking2);

    Availability availability1;
    availability1.roomNumber = "101";
    availability1.startDate = "01-07-2022";
    availability1.endDate = "10-07-2022";
    availabilityManager.addAvailability(availability1);

    Availability availability2;
    availability2.roomNumber = "201";
    availability2.startDate = "01-08-2022";
    availability2.endDate = "05-08-2022";
    availabilityManager.addAvailability(availability2);

    generateReport(bookingManager, availabilityManager);

    return 0;
}

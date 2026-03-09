#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    // Constructor to initialize values
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0.0;
    }

    // Reset Function
    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Booth statistics reset successfully!\n";
    }

    // Vehicle Paying Toll Function
    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue += tollAmount;

        if (vehicleType == 1)
            cout << "Standard Car processed.\n";
        else if (vehicleType == 2)
            cout << "Truck processed.\n";
        else if (vehicleType == 3)
            cout << "Bus processed.\n";
    }

    // Getter Methods
    int getTotalVehicles()
    {
        return totalVehicles;
    }

    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{
    TollBooth booth;
    int choice;

    // Fixed Toll Rates
    const double CAR_TOLL = 180.0;
    const double TRUCK_TOLL = 300.0;
    const double BUS_TOLL = 350.0;

    do
    {
        cout << "\n===== Toll Booth Menu =====\n";
        cout << "1. Add Standard Car (Rs.180)\n";
        cout << "2. Add Truck (Rs.300)\n";
        cout << "3. Add Bus (Rs.350)\n";
        cout << "4. Display Total Vehicles Passed\n";
        cout << "5. Display Total Revenue Collected\n";
        cout << "6. Reset Booth Statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            booth.vehiclePayingToll(1, CAR_TOLL);
            break;

        case 2:
            booth.vehiclePayingToll(2, TRUCK_TOLL);
            break;

        case 3:
            booth.vehiclePayingToll(3, BUS_TOLL);
            break;

        case 4:
            cout << "Total Vehicles Passed: "
                 << booth.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue Collected: Rs."
                 << booth.getTotalRevenue() << endl;
            break;

        case 6:
            booth.reset();
            break;

        case 7:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Computer {
private:
	std::string ipAddress;
public:
	Computer() = default;
	Computer(const std::string& ip) : ipAddress(ip) {};

	const std::string& getIpAddress() const {
		return ipAddress;
	}

	bool isAccessible() const {
		return rand() % 2;
	}
};

class NetworkManager {
private:
	std::vector<Computer> computers;
public:

	void addComputer(const std::string& ip) {
		computers.push_back(Computer(ip));
	}

	void removeComputer(const std::string& ip) {
		auto iter = std::find_if(computers.begin(), computers.end(),
			[&](const Computer& c) {return c.getIpAddress() == ip;  });
		if (iter != computers.end()) {
			computers.erase(iter);
		}
	}

	void listComputer() const {
		std::cout << "Computer in the network:\n";
		for (const Computer& c : computers) {
			std::cout << "IP Address: " << c.getIpAddress() << " - " << (c.isAccessible() ? "Accessible" : "Not Accessible") << "\n";
		}
	}

};

int main()
{
	srand(time(nullptr));
	NetworkManager network;

	network.addComputer("192.168.0.1");
	network.addComputer("192.168.0.2");
	network.addComputer("192.168.0.3");
	network.addComputer("192.168.0.4");
	network.addComputer("192.168.0.5");
	network.addComputer("192.168.0.6");
	network.addComputer("192.168.0.7");
	network.addComputer("192.168.0.8");

	network.listComputer();
}

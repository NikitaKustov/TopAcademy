#include <iostream> 
#include <vector> 
#include <cstdlib> 
#include <algorithm> 
#include <ctime> 
 
class Computer { 
private: 
 std::string ipAddress; 
 int slot;  
  
 const int getslot() const { 
  if (isAccessible() == 1){ 
   return 0; 
  } 
  else { 
   return rand() % 2 + 1; 
  } 
 } 
public: 
 Computer() = default; 
 Computer(const std::string& ipAddress, int slot) { 
  this->ipAddress = ipAddress; 
  this->slot = getslot(); 
 } 
 
 
 
 const std::string& getIpAddress() const { 
  return ipAddress; 
 } 
  
 const int get_slot() const { 
  return slot; 
 } 
 
 bool isAccessible() const { 
  return rand() % 2; 
 } 
}; 
 
class NetworkManager { 
protected: 
 std::vector<Computer> computers; 
public: 
 
 void addComputer(const std::string& ip, const int slot) { 
  computers.push_back(Computer(ip, slot)); 
 } 
 
 void removeComputer(const std::string& ip) { 
  auto iter = std::find_if(computers.begin(), computers.end(), [&](const Computer& c){return c.getIpAddress() == ip; }); 
  if (iter != computers.end()) { 
   computers.erase(iter); 
  } 
 } 
 
 void listComputer() const { 
  std::cout << "Computer in the network:\n"; 
  for (const Computer& c : computers) { 
   std::cout << "IP Address: " << c.getIpAddress() << " - " << (c.isAccessible() ? "Accessible" : "Not Accessible")<< " slot:" << c.get_slot() << "\n"; 
  } 
 } 
 
}; 
 
class User : private NetworkManager { 
private: 
 //std::vector<std::pair<std::string, int>> user; 
 std::string name; 
public: 
 std::vector<std::pair<std::string, int>> user; 
 User(std::string name) { 
  this->name = name; 
 } 
 
 void slots(std::string name, std::vector<Computer> computers) { 
  for (int i = 0; i < computers.size(); i++) { 
   if (computers[i].get_slot() > 0) { 
    user.push_back({ name, computers[i].get_slot() }); 
   } 
  } 
 } 
 
 void print(std::vector<std::pair<std::string, int>> user) { 
  for (int i = 0; i < user.size(); i++) { 
   std::cout << user[i].first << user[i].second; 
  } 
 } 
}; 
 
int main() 
{ 
 srand(time(nullptr)); 
 NetworkManager network; 
 User user("pc1"); 
 
 network.addComputer("192.168.0.1", 0); 
 network.addComputer("192.168.0.2", 0); 
 network.addComputer("192.168.0.3", 0); 
 network.addComputer("192.168.0.4", 0); 
 network.addComputer("192.168.0.5", 0); 
 network.addComputer("192.168.0.6", 0); 
 network.addComputer("192.168.0.7", 0); 
 network.addComputer("192.168.0.8", 0); 
 
 network.listComputer(); 
}

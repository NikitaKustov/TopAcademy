#include <iostream> 
#include <string>
//что такое эти ваши inline ф-ии?
class Telephone
{    public:  
    int id=0; 
    std::string surname; 
    std::string name; 
    std::string sec_name; 
      char *home_num; 
      char *mob_num; 
      char *rab_num; 

    Telephone() {}

   explicit Telephone(std::string surname, std::string name, std::string sec_name, char home_nun, char mob_num, char rab_name) 
    {   
        this->surname = surname; 
        this->name =name; 
        this->sec_name = sec_name; 
        this->home_num=home_num;  
        this->mob_num=mob_num;  
        this->rab_num=rab_num;  
        id++; 
    }  

    void insert(char i, char val) 
    {    
    if (i > 11)
    std::cout<<"Mistake\n"; 
    else
    {  this->home_num[i] = val; }  
    }  

    

    ~Telephone(){
    }
}; 

int main()
{   
  
    std::string *surname= new std::string; 
    std::string *name = new std::string; 
    std::string *sec_name= new std::string; 
      char *home_num = new char[12] {'c', 'f','b','d','b','s','a','1','5'}; 
      char *mob_num = new char[12] {'c', 'f','b','d','b','s','a','1','5'}; 
      char *rab_num = new char[12] {'c', 'f','b','d','b','s','a','1','5'}; 
 

    Telephone tel("Um", "Bom", "Yam", home_num, mob_num, rab_num); 
    Telephone tel1; 

    std::cout<<"surname ";  std::cin>>*surname;  tel1.surname = *surname; 
}
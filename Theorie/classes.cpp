#include <iostream>

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee {
private:
    std::string Name {};
    std::string Company {};
    int Age {};

public:
	
	std::string getEmployeeName() const { return Name; }
	void setEmployeeName(std::string name) { 
		Name = name; 
	}
	
	std::string getEmployeeCompany() const { return Company; }	
	void setEmployeeCompany(std::string company) { 
		Company = company; 
	}
	
	int getEmployeeAge() const { return Age; }
	void setEmployeeAge(int age) { 
		if (age >= 18)
			Age = age; 
	}

	virtual void AskForPromotion(){
		if (Age > 30)
			std::cout << Name << " got promoted?" << '\n';
		else
			std::cout << Name << " sorry no promotion for you!" << '\n';
	}
	
	void IntroduceYourself(){
		std::cout << "------------------------------------------------------------"<< '\n';
		std::cout << '\n';
		std::cout << "Hello I am " << Name << ", I work at " << Company << " and I'm " << Age << " year old." ;
	}

};

int main()
{
	Employee employee1 {};


}

/*void setAllEmployeeInfo(){
	std::cout << "Hello please enter your" << '\n';
	std::cout << "name : ";
	std::cin >> name;
	std::cout << "company : ";
	std::cin >> company;
	std::cout << "age : ";
	std::cin >> age;
}*/
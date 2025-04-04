#include <iostream>
#include <string_view>

class Beneficiaire {
private:
		std::string_view m_nom {};
		std::string_view m_prenom {};
		std::string_view m_section {};
		int m_age {};

public:

	//constructor 
	Beneficiaire(std::string_view nom, std::string_view prenom, std::string_view section, int age)
		: m_nom{nom}
		, m_prenom{prenom}
		, m_section{section}
		, m_age{age}
	{
	}
	
	void print() const{
		std::cout << m_nom << ", " << m_prenom << '\n';
		std::cout << "age : " << m_age << " ans" << '\n';
		std::cout << "section : " << m_section << '\n';
	}

};

int main()
{
	Beneficiaire beneficiaire1 {"Valentino", "Rodriguez", "Informatique", 24};
	beneficiaire1.print();

	return 0;
}
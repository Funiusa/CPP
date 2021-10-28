
#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
private:
	std::string m_ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	Brain& operator= (const Brain &brain);
	~Brain();

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

};


#endif

#pragma once

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
	Brain(void);
	Brain(const std::string name);
	Brain(const Brain& ins);
	Brain& operator=(const Brain& right);
	~Brain(void);

	std::string*		getIdeas(void);
	void 				set_idea(std::string const idea);
};

#pragma once

#include <iostream>
#include <string>

struct Data{
    int x;
    char c;
};

class Serializer{
	private:
		Serializer();
	public:
		Serializer(Serializer const&);
		~Serializer();
		Serializer& operator=(Serializer const&);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
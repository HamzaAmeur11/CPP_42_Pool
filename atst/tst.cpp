#include <iostream>


/*

	A Class is an expanded consepte of data structure.
	instead of holding only data, it can hold data and function.


	A Object is an instantiation of a class, in term of variables :
		a class would be the type , and a object would be the variable

	Classes are generally declared using the keyword class, with the following format:

		class class_name {

			access_specifier_1:
				member1;
				...

			access_specifier_2:
				member2;
			...

			....
			....

		}	object_names;


		EXEMPLE:
*/

class	Smia{
	private:      //access specifier private public or protected
					/*
						By default, all members of a class declared with the class keyword have private access for all its members.
						Therefore, any member that is declared before one other class specifier automatically has private access.
					*/
		std::string str;
		int x;
	public:
		//member functions
		Smia();
		Smia(std::string s, int a);
		~Smia();
		std::string& get_str();
		void set_str(const std::string &s)
		{
			str = s;
		}
};

/*
	Constructors are special member functions that are
	automatically called when an object of a class is created
	types of Constructors :
*/

//_______Default Constructor ex::
Smia::Smia()
{
	x = -1;
	str = "SMIA";
}


//_______Overloading Constructors ex ::
Smia::Smia(std::string s, int a)
{
	x = a;
	str = s;
}

//_______Deconstructor ex ::
Smia::~Smia()
{
	std::cout << "by from " << str << std::endl;
}

//________________Member Function ex ::
std::string& Smia::get_str()
{
	std::cout << "str : " << str ;
	std::cout<< " && x = "<< x <<std::endl;
	return (str);
}



int main(){
	Smia smia1;
	Smia smia2("hamza", 2000);
	Smia *sm;
	sm = new Smia[2];
	sm[0] = smia1;
	sm[1] = smia2;
	sm[0].set_str("llllll");
	sm[0].get_str();
	delete sm;



}

#ifndef CAN_FACTORY_PIZZASTORE_H_
#define CAN_FACTORY_PIZZASTORE_H_

#include <string>
#include <list>
#include <iostream>

namespace marvr
{	
    class PizzaStore{
    public:
       PizzaStore(){
          std::cout<<"The PizzaStore is opened !"<<std::endl;   
       }
       ~PizzaStore(){
          std::cout<<"The PizzaStore is closed !"<<std::endl;
       }

    };

    class Pizza{
    public:
       Pizza(){  }

       void Prepare() {
          
       }
            

    private:
       std::string name_;
       std::string dough_;
       std::string sauce_;

       std::list<std::string> toppings_;
    };
}


#endif //CAN_FACTORY_PIZZASTORE_H_

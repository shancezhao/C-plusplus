/*
 * Walmart.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: zhaos
 */

#include "Walmart.h"

namespace edu {
namespace neu {
namespace csye6205 {

Walmart::Walmart(std::string _name):name(_name) {
	// TODO Auto-generated constructor stub

}

Walmart::~Walmart() {
	// TODO Auto-generated destructor stub
}


void Walmart::demo() {
    std::cout << "\n\t Walmart::demo() starting ..." << std::endl;
    {
        Walmart obj("Walmart");
        std::vector<AbstractStore *> abstores;
		abstores.push_back(&obj);
		Store *store = &obj;
		std::vector<Electronics *> electronics;

        std::cout << "\n Electronic items for sale at Walmart (sorted by price)"
                << std::endl;
        Electronics sharpTv(100, 899.99, "Sharp Flat Screen TV");
        Electronics appleIpad(101, 499.99, "Apple Ipad mini");
        Electronics blueRay(102, 99.99, "BlueRay player");
        Electronics hpLaptop(103, 399.99, "HP Laptop");

        electronics.push_back(&sharpTv);
        electronics.push_back(&appleIpad);
        electronics.push_back(&blueRay);
        electronics.push_back(&hpLaptop);
        for (Electronics *e_Ptr : electronics) {
        	store->addItem(e_Ptr);
        }
//        obj.addItem(&sharpTv);
//		obj.addItem(&appleIpad);
//		obj.addItem(&blueRay);
//		obj.addItem(&hpLaptop);


        obj.sortInventory();
        obj.showInventory();
    }

    {
        Walmart obj("Walmart");
        std::vector<AbstractStore *> abstores;
		abstores.push_back(&obj);
		Store *store = &obj;
		std::vector<Bread *> bread;

        std::cout
                << "\n Bread items for sale at Walmart (sorted by item number)"
                << std::endl;
        Bread pretzel(3, 0.49, "Pretzel");
        Bread bagel(1, 0.89, "Bagel");
        Bread frenchBaguette(2, 2.59, "French Baguette");
        Bread dinnerRoll(4, 1.89, "Dinner Roll");


        bread.push_back(&pretzel);
        bread.push_back(&bagel);
        bread.push_back(&frenchBaguette);
        bread.push_back(&dinnerRoll);
        for (Bread *b_Ptr : bread) {
			store->addItem(b_Ptr);
		}

//        obj.addItem(&pretzel);
//		obj.addItem(&bagel);
//		obj.addItem(&frenchBaguette);
//		obj.addItem(&dinnerRoll);

        obj.sortInventory();
        obj.showInventory();
    }

    {
        Walmart obj("Walmart");
        std::vector<AbstractStore *> abstores;
		abstores.push_back(&obj);
		Store *store = &obj;
		std::vector<HealthyBread *> healthyBread;
        std::cout
                << "\n Healthy Bread items for sale at Walmart (sorted by calories)"
                << std::endl;

        HealthyBread pretzelHealthy(30, 0.49, 230.0, "Pretzel");
        HealthyBread bagelHealthy(10, 0.89, 280.0, "Bagel");
        HealthyBread frenchBaguetteHealthy(20, 2.59, 150.0, "French Baguette");
        HealthyBread dinnerRollHealthy(40, 1.89, 80.0, "Dinner Roll");


        healthyBread.push_back(&pretzelHealthy);
        healthyBread.push_back(&bagelHealthy);
        healthyBread.push_back(&frenchBaguetteHealthy);
        healthyBread.push_back(&dinnerRollHealthy);
        for (HealthyBread *hb_Ptr : healthyBread) {
			store->addItem(hb_Ptr);
		}

//        obj.addItem(&pretzelHealthy);
//		obj.addItem(&bagelHealthy);
//		obj.addItem(&frenchBaguetteHealthy);
//		obj.addItem(&dinnerRollHealthy);

        obj.sortInventory();
        obj.showInventory();
    }
    std::cout << "\n Walmart::demo() done!" << std::endl;
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

/*
 *

	 Walmart::demo() starting ...

 Electronic items for sale at Walmart (sorted by price)
4 items in  Inventory
Item: 102, BlueRay player price: 99.990000
Item: 103, HP Laptop price: 399.990000
Item: 101, Apple Ipad mini price: 499.990000
Item: 100, Sharp Flat Screen TV price: 899.990000

 Bread items for sale at Walmart (sorted by item number)
4 items in  Inventory
Item: 1, Bagel price: 0.890000
Item: 2, French Baguette price: 2.590000
Item: 3, Pretzel price: 0.490000
Item: 4, Dinner Roll price: 1.890000

 Healthy Bread items for sale at Walmart (sorted by calories)
4 items in  Inventory
Item: 40, Dinner Roll price: 1.890000, calories: 80.000000
Item: 20, French Baguette price: 2.590000, calories: 150.000000
Item: 30, Pretzel price: 0.490000, calories: 230.000000
Item: 10, Bagel price: 0.890000, calories: 280.000000

 Walmart::demo() done!

 *
 */

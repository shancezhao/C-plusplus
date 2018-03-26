/*
 * DemoLambda.h
 *
 *  Created on: Mar 14, 2018
 *      Author: zhaos
 */

#ifndef DEMOLAMBDA_H_
#define DEMOLAMBDA_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
namespace edu {
namespace neu {
namespace csye6205 {

class DemoLambda {
private:
	const int m_criterion;
	int m_count;
	void show();

public:
	DemoLambda();
	DemoLambda(int count);
	virtual ~DemoLambda();

	// immutable criterion
	const int getCriterion() const;

	// variable criterion
//	UseLambda(int criterion, int count);
//	int getCriterion() const;
//	void setCriterion(int criterion);



	int getCount() const;
	void setCount(int count);
	int accumulate();
	int accumulate2();
	int captureContextLambda();
	void countNumber();
	void countNumberLambda();
	void sort();
	void simpleLambdaSort();
	void nestedBlocks();
	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* DEMOLAMBDA_H_ */

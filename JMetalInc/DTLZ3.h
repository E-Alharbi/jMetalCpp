//  DTLZ3.h
//
//  Author:
//       Antonio J. Nebro <antonio@lcc.uma.es>
//
//  Copyright (c) 2011 Antonio J. Nebro, Juan J. Durillo
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __DTLZ3_H__
#define __DTLZ3_H__

#include <JMetalInc/Problem.h>
#include <math.h>
#include <JMetalInc/BinaryRealSolutionType.h>
#include <JMetalInc/RealSolutionType.h>
#include <JMetalInc/ArrayRealSolutionType.h>
#include <JMetalInc/XReal.h>
#include <JMetalInc/Solution.h>

class DTLZ3 : public Problem {
public:
	DTLZ3(string solutionType, int numberOfVariables = 12, int numberOfObjectives = 3);
	void evaluate(Solution *solution);

	virtual ~DTLZ3();
private:
	double * fx_ ;
  double * x_  ;
  static const double PI ;
};

#endif /* __DTLZ3_H__ */

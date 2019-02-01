//  NSGAII.h
//
//  Author:
//       Esteban López-Camacho <esteban@lcc.uma.es>
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

#ifndef __NSGAII__
#define __NSGAII__

#include <JMetalInc/Algorithm.h>
#include <JMetalInc/Problem.h>
#include <JMetalInc/SolutionSet.h>
#include <JMetalInc/Distance.h>
#include <JMetalInc/Ranking.h>
#include <JMetalInc/CrowdingComparator.h>
#include <JMetalInc/QualityIndicator.h>

/**
  * @class NSGAII
  * @brief This class implements the NSGA-II algorithm
**/

class NSGAII : public Algorithm {

public:
  NSGAII(Problem * problem);
  SolutionSet * execute();

};


#endif /* __NSGAII__ */

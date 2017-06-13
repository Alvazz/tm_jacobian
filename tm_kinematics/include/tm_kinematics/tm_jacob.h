/*********************************************************************
 * tm_jacob.h
 *
 * Copyright (c) 2017, ISCI / National Chiao Tung University (NCTU)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *********************************************************************
 * 
 * Author: Howard Chen
 */

#ifndef TM_JACOB_H
#define TM_JACOB_H

namespace tm_jacobian {

  	Eigen::Matrix<float, 6, 6> Forward_Jacobian(Eigen::Matrix<float, 6,1> q);
	
	Eigen::Matrix<float, 6, 6> Inverse_Jacobian(Eigen::Matrix<float, 6,1> q);
	
	void printMatrix(Eigen::MatrixXf InputMatrix);
	
	void printMatrix(double *InputMatrix, short, int);
	
	void Matrix2DoubleArray(Eigen::MatrixXf InputMatrix, double *T);
}

#endif //TM_JACOB_H

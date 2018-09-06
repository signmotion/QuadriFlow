#ifndef MERGE_VERTEX_H_
#define MERGE_VERTEX_H_

#include "config.hpp"
using namespace Eigen;

void merge_close(MatrixXd& V, MatrixXi& F, double threshold);

#endif
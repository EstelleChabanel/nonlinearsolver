#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <array>
#include <iostream>
#include <memory>

void exercise1() {

  // https://eigen.tuxfamily.org/dox/group__TutorialMatrixClass.html
  int n = 2;
  Eigen::ArrayX3d v = Eigen::ArrayX3d::Random(n, 3);
  Eigen::ArrayX3d res(n, 3);

  // making the cross-product in the loop
  auto it = res.rowwise().begin();
  std::cout << v << std::endl;
  for (auto &&_v : v.rowwise()) {
    auto _res = *it++;
    // cross product acts on matrices and not arrays: conversion needed
    _res = _v.matrix().cross(Eigen::Vector3d{1, 1, 1});
  }

  // reshape the result
  Eigen::Map<Eigen::ArrayXd> reshaped(res.data(), res.size());
  // output to check that the convention was col major per default
  std::cout << res << std::endl;
  std::cout << reshaped << std::endl;

  // making an alias to avoid long lines
  using ArrayX12d = Eigen::Array<double, -1, 12, Eigen::RowMajor>;

  ArrayX12d v2 = ArrayX12d::Random(n, 12);
  Eigen::ArrayX3d res2(n, 3);

  auto it2 = res2.rowwise().begin();

  for (auto &&_v : v2.rowwise()) {
    auto _res = *it2++;
    // reinterpret row as two matrices
    auto M1 = Eigen::Map<Eigen::Matrix3d>(_v.data());
    auto M2 = Eigen::Map<Eigen::Vector3d>(&_v[9]);

    // store the product
    _res = M1 * M2;

    std::cout << "M1 = " << M1 << std::endl;
    std::cout << "M2 = " << M2 << std::endl;
    std::cout << "_res = " << _res << std::endl;
  }

  // output the result
  std::cout << "v2 = " << v2 << std::endl;
  std::cout << "res2 = " << res2 << std::endl;
}

void exercise2() {
  constexpr int n = 5;

  // defining types for readability
  using M = Eigen::Matrix<double, n, n>;
  using V = Eigen::Vector<double, n>;

  // initiate a zero matrix
  M A = M::Zero();
  // building the three diagonals
  A.diagonal() = V::Constant(2);
  // sub/super diagonals are n-1 in size
  A.diagonal(1) = Eigen::Vector<double, n - 1>::Constant(-1);
  A.diagonal(-1) = Eigen::Vector<double, n - 1>::Constant(-1);
  std::cout << "A = " << std::endl << A << std::endl;

  // computes determinent
  std::cout << "det A = " << A.determinant() << std::endl;

  // creates a right-hand-side
  V b = Eigen::Vector<double, n>::Constant(1);

  // solves the system
  V x = A.colPivHouseholderQr().solve(b);
  std::cout << "solution: " << x << std::endl;

  // construct a sparse matrix
  Eigen::SparseMatrix<double> A_sparse(n, n);
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j) {
      A_sparse.coeffRef(i, j) += A(i, j);
    }
  A_sparse.makeCompressed();
  Eigen::SparseLU<Eigen::SparseMatrix<double>> solver;
  solver.compute(A_sparse);

  if (solver.info() != Eigen::Success) {
    throw std::runtime_error("could not factor matrix");
    return;
  }

  x = solver.solve(b);
  std::cout << "solution: " << x << std::endl;
}

int main() {
  exercise1();
  exercise2();
}

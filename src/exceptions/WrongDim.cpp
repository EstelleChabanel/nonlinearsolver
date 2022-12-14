//
// Created by eecha on 05/12/2022.
//

#include "WrongDim.h"

// Constructor
WrongDim::WrongDim()
    : Exceptions("Wrong dimensions", "The chosen attributes (function, dimension, jacobian, starting vector) do not have the same dimensions. Please check the attributes dimensions.") {};

// Destructor
WrongDim::~WrongDim() {}
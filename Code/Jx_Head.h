#pragma once
#include <iostream>
#include "torch/torch.h"
#include "torch/script.h"
#include<typeinfo>

using namespace std;

void LibMerge_stack();

#define test_Jx() LibMerge_stack()
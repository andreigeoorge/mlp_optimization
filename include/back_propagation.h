#ifndef BACK_PROPAGATION_H
#define BACK_PROPAGATION_H

#include <stdio.h>
#include <stdlib.h>
#include "parameters.h"

#ifdef  INTRINSICS
#include <immintrin.h>
#endif

void back_propagation(parameters*, int, int, int*, double**, double**);

#endif
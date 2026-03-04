#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/**
 * @brief Performs an arithmetic operation on two numbers.
 * @param[in] n1 First operand.
 * @param[in] n2 Second operand.
 * @param[in] op The operator character (+, -, x, /, ^).
 * @param[out] result Pointer to store the calculation result.
 * @return 0 if successful, -1 if an error occurred (div by zero, invalid op).
 */
int Calculate(float n1, float n2, char op, float* result);

#endif
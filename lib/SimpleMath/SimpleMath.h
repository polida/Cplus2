//
// Created by dpolisensky on 10/1/2024.
//

/**
 * \namespace SimpleMath
 * \brief A collection of simple mathematical functions.
 */
    namespace SimpleMath {

        /**
         * \brief Adds two integers.
         * \param a First integer.
         * \param b Second integer.
         * \return Sum of a and b.
         */
        int add(int a, int b);

        /**
         * \brief Calculates the factorial of an integer.
         * \param a The integer.
         * \return Factorial of a.
         */
        double factorial(int a);

        /**
         * \brief Multiplies two integers.
         * \param a First integer.
         * \param b Second integer.
         * \return Product of a and b.
         */
        double multiply(int a, int b);

        /**
         * \brief Divides one integer by another.
         * \param a Numerator.
         * \param b Denominator.
         * \return Quotient of a divided by b.
         */
        double divide(int a, int b);

        /**
         * \brief Calculates the nth Fibonacci number.
         * \param a The position in the Fibonacci sequence.
         * \return The nth Fibonacci number.
         */
        double fibonacci(int a);

        /**
         * \brief Calculates the hypotenuse of a right triangle using the Pythagorean theorem.
         * \param a Length of one leg of the triangle.
         * \param b Length of the other leg of the triangle.
         * \return Length of the hypotenuse.
         */
        double PhytagorC(int a, int b);
    }

/**
 * @file odenm.h
 * @author Jayasri Vaidyaraman (jayasri.vaidyaraman@ltts.com)
 * @brief File that contains the various methods that can be used to solve ordinary differential equations using numerical analysis
 * @version 0.1
 * @date 2021-05-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ODENM_H__ //Header file guard
#define __ODENM_H__ //Header file definition

/**
 * @brief Defining the structure that contains the
 * variables required to plot the numerical solution of the ODE
 * These variables include the initial conditions, the step size
 * and the number of data points the user wants to generate
 */
typedef struct odeplot{
    double xic; ///< value for the x initial condition
    double yic; ///< value of the y initial condition
    double stepsize; ///< the step value by which x should be incremented from xic
    double numOfdataPoints; ///< number of (x,y) pairs of the solution that the user wants to generate
}odeplotvar;

/**
 * @brief Defining the structure that contains the variables
 * required only to find the y value of the solution of the numerical equation 
 * at a particular point
 */
typedef struct odesolve{
    double xic; ///< value for the x initial condition
    double yic; ///< value of the y initial condition
    double xgiv; ///value of x given by the user at which y should be found
    int numOfPoints; ///<number of points that should be generated between xic and xgiv
    double stepsize; ///< the step value by which x should be incremented from xic
}odesolvevar;

/**
 * function that decides whether the user wants to find y(x) for a given x for the ODE solution 
 * or visualise the graph of the numerical solution of the ODE 
 * @param [out] int returns the user's choice
 */
int userChoice();

/**
 * @brief function that gets data required for obtaining the numerical
 * solution of the ODE from the user depending on the type
 * of solution the user has chosen
 * @param [in] choice varies depending on the solution the user wants
 */
void userInput(int choice);

/**
 * @brief Function that decides which method the user wants to use to solve a first order ODE
 * @param [in] choice indicates whether the user wants to use the Euler method, Euler modified or the Runge Kutta method
 */
void numerical_ode(char choice);

/**
 * @brief Function that implements the Euler method for numerical solution of first order ODE
 * @param [in] xn takes the current value of x as input
 * @param [in] yn takes the current value of y as input
 * @param [in] stepsize is the value according to which xn is incremented
 * @param [out] double returns the y value of the next point
 */
double EulerFormula(double xn, double yn, double stepsize);

/**
 * @brief Function that implements the Euler-modified method for numerical solution of first order ode
 * @param [in] xn takes the current value of x as input
 * @param [in] yn takes the current value of y as input
 * @param [in] stepsize is the value according to which xn is incremented
 * @param [out] double returns the y value of the next point
 */
double EulerModifiedFormula(double xn, double yn, double stepsize);

/**
 * @brief Function that implements the Runge-Kutta method for numerical solution of first order ode
 * @param [in] xn takes the current value of x as input
 * @param [in] yn takes the current value of y as input
 * @param [in] stepsize is the value according to which xn is incremented
 * @param [out] double returns the y value of the next point
 */
double RungeKuttaFormula(double xn, double yn, double stepsize);

/**
 * @brief Function to print some of the generated points
 * @param [in] numOfPoints number of data points stored in the array
 */
void print(int numOfPoints);

/**
 * @brief Function that solves the ODE according to various methods
 * and gives point solution or graph solution based on user input
 * @param [in] choice user's choice whether to obtain point solution or graphical solution
 * @param [in] method which gives which formula function to be called depending on the user's choice
 */
void odeSolver(int choice, char method);

double EulerFormulaTest(double xn, double yn, double stepsize);
double EulerModifiedFormulaTest(double xn, double yn, double stepsize);
double RungeKuttaFormulaTest(double xn, double yn, double stepsize);
double dummycalculatetwo(double,double);

#endif //__ODENM_H__

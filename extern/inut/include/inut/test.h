#ifndef INUT_TEST_H
#define INUT_TEST_H

#include "inut/test_suite.h"

#define TEST_ROOT "root"

struct TestSuite * test_suite(struct TestSuite * parent, char * name);

int test_case_id_gen();

struct TestCase * test_case(struct TestSuite * parent, char * name, struct TestResult (*test)());

struct TestResult pass();

struct TestResult fail(char * diagnostic);

struct TestResult skip();

struct TestResult todo();

int test_run(int argc, char * argv[]);

#endif

/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ScrambleTest_init = false;
#include "ScrambleTest.hpp"

static ScrambleTest suite_ScrambleTest;

static CxxTest::List Tests_ScrambleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ScrambleTest( "./ScrambleTest.hpp", 7, "ScrambleTest", suite_ScrambleTest, Tests_ScrambleTest );

static class TestDescription_suite_ScrambleTest_testScramble_scrambleWords : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScrambleTest_testScramble_scrambleWords() : CxxTest::RealTestDescription( Tests_ScrambleTest, suiteDescription_ScrambleTest, 22, "testScramble_scrambleWords" ) {}
 void runTest() { suite_ScrambleTest.testScramble_scrambleWords(); }
} testDescription_suite_ScrambleTest_testScramble_scrambleWords;

static class TestDescription_suite_ScrambleTest_testScramble_scrambleSentence : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScrambleTest_testScramble_scrambleSentence() : CxxTest::RealTestDescription( Tests_ScrambleTest, suiteDescription_ScrambleTest, 35, "testScramble_scrambleSentence" ) {}
 void runTest() { suite_ScrambleTest.testScramble_scrambleSentence(); }
} testDescription_suite_ScrambleTest_testScramble_scrambleSentence;

static class TestDescription_suite_ScrambleTest_testScramble_scrambleLongText : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ScrambleTest_testScramble_scrambleLongText() : CxxTest::RealTestDescription( Tests_ScrambleTest, suiteDescription_ScrambleTest, 41, "testScramble_scrambleLongText" ) {}
 void runTest() { suite_ScrambleTest.testScramble_scrambleLongText(); }
} testDescription_suite_ScrambleTest_testScramble_scrambleLongText;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

#include <iostream>
#include "SolutionCollection.h"
#include "Solution.h"
#include "SmartPtr.h"
#include "cppprimer/cppprimer.h"
#include "epi/chapter5/SwapBits.hpp"
#include "epi/chapter5/ClosestIntSameBitCount.hpp"
#include "epi/chapter5/ReverseBits.hpp"
#include "epi/chapter5/Multiply.hpp"
#include "epi/chapter5/Divide.hpp"
#include "epi/chapter5/Parity.hpp"
#include "epi/chapter5/Power.hpp"
#include "epi/chapter5/Reverse.hpp"
#include "epi/chapter5/IsPalindrome.hpp"
#include "epi/chapter5/UniformRandom.hpp"
#include "epi/chapter5/IntersectRectangle.hpp"
#include "epi/chapter6/DutchFlagPartition.hpp"
#include "epi/chapter6/PlusOne.hpp"
#include "epi/chapter6/Multiply.hpp"
#include "epi/chapter6/CanReachEnd.hpp"
#include "epi/chapter6/DeleteDuplicates.hpp"
#include "epi/chapter6/BuyAndSellStockOnce.hpp"
#include "epi/chapter6/BuyAndSellStockTwice.hpp"
#include "epi/chapter6/GeneratePrimes.hpp"
#include "epi/chapter6/ApplyPermutation.hpp"
#include "epi/chapter6/NextPermutation.hpp"
#include "epi/chapter6/RandomSampling.hpp"
#include "epi/chapter6/OnlineRandomSample.hpp"
#include "epi/chapter6/ComputeRandomPermutation.hpp"
#include "epi/chapter6/RandomSubset.hpp"
#include "epi/chapter6/NonuniformRandomNumberGeneration.hpp"
#include "epi/chapter6/IsValidSudoku.hpp"
#include "epi/chapter6/MatrixInSprialOrder.hpp"
#include "epi/chapter6/RotateMatrix.hpp"
#include "epi/chapter6/GeneratePascalTriangle.hpp"
#include "epi/chapter7/InterconvertIntStr.hpp"
#include "epi/chapter7/ConvertBase.hpp"

using std::cout;
using std::endl;

using namespace myutils;
using namespace cppprimer;
using namespace epi;
using namespace chapter5;
using namespace chapter6;
using namespace chapter7;

void prepareSolutions() {
//    new Parity(); // Chapter 5.1
//    new SwapBits(); // Chapter 5.2
//    new ReverseBits(); // Chapter 5.3
//    new ClosestIntSameBitCount(); // Chapter 5.4
//    new epi::chapter5::Multiply(); // Chapter 5.5
//    new Divide(); // Chapter 5.6
//    new Power(); // Chapter 5.7
//    new Reverse(); // Chapter 5.8
//    new IsPalindrome(); // Chapter 5.9
//    new UniformRandom(); // Chapter 5.10
//    new IntersectRectangle(); // Chapter 5.11
//
//    new DutchFlagPartition(); // Chapter 6.1
//    new PlusOne(); // Chapter 6.2
//    new epi::chapter6::Multiply(); // Chapter 6.3
//    new CanReachEnd(); // Chapter 6.4
//    new DeleteDuplicates(); // Chapter 6.5
//    new BuyAndSellStockOnce(); // Chapter 6.6
//    new BuyAndSellStockTwice(); // Chapter 6.7
//    new GeneratePrimes(); // Chapter 6.8
//    new ApplyPermutation(); // Chapter 6.9
//    new NextPermutation(); // Chapter 6.10
//    new RandomSampling(); // Chapter 6.11
//    new OnlineRandomSample(); // Chapter 6.12
//    new ComputeRandomPermutation(); // Chapter 6.13
//    new RandomSubset(); // Chapter 6.14
//    new NonuniformRandomNumberGeneration(); // Chapter 6.15
//    new IsValidSudoku(); // Chapter 6.16
//    new MatrixInSprialOrder(); // Chapter 6.17
//    new RotateMatrix(); // Chapter 6.18
//    new GeneratePascalTriangle(); // Chapter 6.19
//
    new InterconvertIntStr(); // Chapter 7.1
    new ConvertBase(); // Chapter 7.2

}

int main(int argc, char** argv)
{
    prepareSolutions();
    SolutionCollection::getInstance()->checkSolutions();

    cout << "**********\n" << "All done." << endl;
    return 0;
}

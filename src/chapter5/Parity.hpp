#ifndef SRC_CHAPTER5_PARITY_HPP_
#define SRC_CHAPTER5_PARITY_HPP_

namespace eip {
  namespace chapter5 {
    class Parity {
        public:
            void test_parity();
            short parityBruteForce(unsigned long);
            short parityEliminateLastOne(unsigned long);
            short parity(unsigned long);
        //private:
    };
  }
}

#endif /* SRC_CHAPTER5_PARITY_HPP_ */

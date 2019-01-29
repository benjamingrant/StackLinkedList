#include <iostream>
#include <queue>
#include <functional>
#include <Stack.h>

#include "gtest/gtest.h"

using namespace std;

TEST(TestStack, EmptyStackIsEmpty) {
   Stack s;
   ASSERT_TRUE(s.isEmpty());
}

TEST(TestStack, SizeIsZero) {
   Stack s;
   ASSERT_EQ(s.size(),0);
}

TEST(TestStack, IsEmptyAndSizeIsZero) {
   Stack s;
   ASSERT_TRUE(s.isEmpty());
   ASSERT_EQ(s.size(),0);
}

TEST(TestStack, StackHasSomethingInIt) {
   Stack s;
   s.push(3);
   ASSERT_GT(s.size(),0);
   //   ASSERT_TRUE(s.isEmpty()==false);
}

TEST(TestStack, Pushed) {
   Stack s;
   s.push(3);
   ASSERT_EQ(s.size(),1);
}

TEST(TestStack, Popped) {
   Stack s;
   s.push(2);
   ASSERT_EQ(s.pop(),2);
}

TEST(TestStack, PushPop) {
   Stack s;
   s.push(5);
  // s.pop();
   ASSERT_EQ(s.pop(),5);
   ASSERT_EQ(s.size(),0);
}

TEST(TestStack, Push2Pop1) {
   Stack s;
   s.push(5);
   s.push(3);
//   s.pop();
   ASSERT_EQ(s.pop(),3);
   ASSERT_EQ(s.size(),1);
}

TEST(TestStack, Peek) {
   Stack s;
   s.push(5);
   ASSERT_EQ(s.peek(),5);
}

TEST(TestStack, PushThreePopThree) {
   Stack s;
   s.push(3);
   s.push(4);
   s.push(6);
   s.pop();
   s.pop();
   s.pop();
   ASSERT_TRUE(s.isEmpty());
}

TEST(TestStack, SizeIsTwoAfterTwoPushes) {
   Stack s;
   s.push(60);
   s.push(99);
   ASSERT_EQ(s.size(),2);
}

TEST(TestStack, PushPopPeek) {
   Stack s;
   s.push(999);
   s.push(888);
   ASSERT_EQ(s.pop(),888);
   ASSERT_EQ(s.peek(),999);
}




TEST(TestStack, MGMEmptyStackIsEmpty) {
   Stack s;
   ASSERT_TRUE(s.isEmpty());
}

TEST(TestStack, MGMSizeIsZero) {
   Stack s;
   ASSERT_EQ(s.size(), 0);
}

TEST(TestStack, MGMSizeIsOne) {
   Stack s;
   s.push(2);
   ASSERT_EQ(s.pop(), 2);
}
TEST(TestStack, MGMSizeIsTwoAfterPushBackTwice) {
   Stack s;
   s.push(3);
   s.push(42);
   ASSERT_EQ(s.size(), 2);
}

TEST(TestStack, MGMPopReducesSizeOfStack) {
   Stack s;
   s.push(4);
   s.pop();
   ASSERT_EQ(s.size(), 0);
}

TEST(TestStack, MGMPopReturnsValue) {
   Stack s;
   s.push(43);
   ASSERT_EQ(s.pop(), 43);
}

TEST(TestStack, MGMPeekReturnsValueAndSizeDoesNotChange) {
   Stack s;
   s.push(45);
   s.push(33);
   ASSERT_EQ(s.peek(), 33);
   ASSERT_EQ(s.size(), 2);
}

TEST(TestStack, MGMPoppingAndPushingReturnsCorrectValue) {
   Stack s;
   s.push(45);
   s.push(33);
   s.pop();
   s.push(420);
   ASSERT_EQ(s.pop(), 420);
}

TEST(TestStack, MGMPeekingDoesntChangeSize) {
   Stack s;
   s.push(45);
   s.peek();
   ASSERT_EQ(s.size(), 1);
}


TEST(TestStack, MGMReturnsEmptyAfterEvents) {
   Stack s;
   s.push(45);
   s.push(33);
   s.pop();
   s.push(743);
   s.pop();
   s.pop();
   ASSERT_TRUE(s.isEmpty());
}

TEST(TestStack, MGMPeekingDoesntChangeValue) {
   Stack s;
   s.push(45);
   s.peek();
   ASSERT_EQ(s.pop(), 45);
}

TEST(TestStack, HNEmptyStackIsEmpty) {
   Stack s;
   ASSERT_TRUE(s.isEmpty());
}

TEST(TestStack, HNEmptySizeIsZero){
   Stack s;
   ASSERT_EQ(s.size(), 0);
}

TEST(TestStack, HNPushOneValueMakesSizeOne){
   Stack s;
   s.push(3);
   ASSERT_EQ(s.size(), 1);
}

TEST(TestStack, HNPushMakesTopPushValue){
   Stack s;
   s.push(3);
   ASSERT_EQ(s.peek(), 3);
}

TEST(TestStack, HNPushMakesSizeOneMore){
   Stack s;
   s.push(43);
   ASSERT_EQ(s.size(), 1);
}

TEST(TestStack, HNPopMakesSizeOneLess){
   Stack s;
   s.push(3);
   s.pop();
   ASSERT_EQ(s.size(), 0);
}

TEST(TestStack, HNPushPushPopPushPushPopPopPopPushValue){
   Stack s;
   s.push(3);
   s.push(75);
   s.pop();
   s.push(34);
   s.push(65);
   s.pop();
   s.pop();
   s.pop();
   s.push(24);
   ASSERT_EQ(s.peek(), 24);
}

TEST(TestStack, HNLastInFirstOut){
   Stack s;
   s.push(4);
   s.push(37);
   ASSERT_EQ(s.pop(), 37);
}

TEST(TestStack, HNStackWithStuffIsNotEmpty){
   Stack s;
   s.push(7);
   s.push(42);
   s.push(32);
   ASSERT_FALSE(s.isEmpty());
}

TEST(TestStack, HNValueAfterPopIsTheOneThatWasEnteredBefore){
   Stack s;
   s.push(826);
   s.push(472);
   s.pop();
   ASSERT_EQ(s.peek(), 826);
}

TEST(TestStack, HNSizeAfterLotsOfPushesAndPops){
   Stack s;
   s.push(45);
   s.push(46);
   s.pop();
   s.push(47);
   s.push(48);
   s.push(49);
   s.pop();
   ASSERT_EQ(s.size(), 3);
}

TEST(TestStack, HNPeekShowsTheTopValueAfterStuffHappens){
   Stack s;
   s.push(32);
   s.push(21);
   s.push(64);
   s.pop();
   s.push(26);
   s.pop();
   ASSERT_EQ(s.peek(), 21);
}


TEST(TestStack, BGPushAndCheckSize) { // push a number of 1's onto the stack then check that the size matches
   Stack s;
   int garbageVal = 1;
   int numPushes = 56;
   for(int i = 0; i < numPushes; i++){
       s.push(garbageVal);
   }

   ASSERT_EQ(s.size(), numPushes);
}

TEST(TestStack, BGPushAndPopAndGetSize) { // push a number of 1's, pop a number of 1's, then check that size is correct
   Stack s;
   int garbageVal = 1;

   int numPushes = 56;
   int numPops = 21;

   for(int i = 0; i < numPushes; i++){
       s.push(garbageVal);
   }
   for(int i = 0; i < numPops; i++){
       s.pop();
   }

   ASSERT_EQ(s.size(), (numPushes - numPops));
}

TEST(TestStack, BGPushAndIsntEmpty) { // checking s.push(8) actually increments the stack's size
   Stack s;
   s.push(8);
   ASSERT_FALSE(s.isEmpty());
}

TEST(TestStack, BGPushThenPeek) { // push an int then check if peek returns that int
   Stack s;
   int garbageVal = 8;

   s.push(garbageVal);

   ASSERT_EQ(s.peek(), garbageVal);
}

TEST(TestStack, BGAlternatingPushPopAndPeek) { // lots of pushing, peeking, popping, and checking equality
   Stack s;

   s.push(47);
   ASSERT_EQ(s.pop(), 47);

   s.push(35);
   s.push(66);
   s.push(43);
   ASSERT_EQ(s.peek(), 43);
   ASSERT_EQ(s.peek(), 43);
   ASSERT_EQ(s.pop(), 43);
   ASSERT_EQ(s.pop(), 66);
   ASSERT_EQ(s.peek(), 35);
   ASSERT_EQ(s.pop(), 35);
}

TEST(TestStack, BGThe10000Test) { // push ints 1-10000 onto the stack, then peek and pop them one by one, checking their values are right
   Stack s;
   for(int i = 1; i <= 10000; i++){
       s.push(i);
       ASSERT_EQ(i, s.peek());
   }
   for(int i = 10000; i >= 1; i--){
       ASSERT_EQ(i, s.peek());
       ASSERT_EQ(i, s.pop());
   }
}

TEST(TestStack, BGPopAndCheckReturnValue) {
   Stack s;
   int garbageVal = 8;

   s.push(garbageVal);

   ASSERT_EQ(s.pop(), garbageVal);
}

TEST(TestStack, BGPushTwiceAndCheckPops) {
   Stack s;
   s.push(1);
   s.push(2);
   ASSERT_NE(s.pop(), s.pop());
}

TEST(TestStack, BGCheckSizeIsChanging) {
   Stack s;
   s.push(6);
   int size1 = s.size();
   s.push(22);
   int size2 = s.size();
   ASSERT_NE(size1, size2);

   s.pop();
   size1 = s.size();
   s.pop();
   size2 = s.size();
   ASSERT_NE(size1, size2);
}

TEST(TestStack, BGICantThinkOfAnyMoreTests) {
   Stack s;

   s.push(1000);
   s.push(s.pop() - 47);

   ASSERT_EQ(s.peek(), 953);
}
TEST(TestVector, HLNewVectorIsEmpty) {
    Stack v;
    ASSERT_EQ(v.size(), 0);
}

TEST(TestVector, HLSizeIsOneAfterOnePushBack) {
    Stack v;
    v.push(37);
    ASSERT_EQ(v.size(), 1);
}

TEST(TestVector, HLCanRemovePushedValue){
    Stack v;
    v.push(37);
    v.pop();
    ASSERT_EQ(v.size(), 0);
}

TEST(TestVector, HLPopReturnsTopValue){
    Stack v;
    v.push(37);
    ASSERT_EQ(v.pop(), 37);
}
TEST(TestVector, HLPeekReturnsTopValue){
    Stack v;
    v.push(37);
    ASSERT_EQ(v.peek(), 37);
}

TEST(TestVector, HLPopAndPeekWorkTogether){
    Stack v;
    v.push(37);
    v.push(48);
    v.pop();
    ASSERT_EQ(v.peek(), 37);
}

TEST(TestVector, HLPopAndSizeWorkTogether){
    Stack v;
    v.push(37);
    v.push(48);
    v.push(59);
    v.pop();
    ASSERT_EQ(v.size(), 2);
}

TEST(TestVector, HLPeekAndSizeWorkTogether){
    Stack v;
    v.push(37);
    v.push(48);
    v.push(59);
    v.peek();
    ASSERT_EQ(v.size(), 3);
}

TEST(TestVector, HLIsEmptyWorksOnEmptyVector){
    Stack v;
    ASSERT_TRUE(v.isEmpty());
}

TEST(TestVector, HLIsEmptyWorksOnFullVector){
    Stack v;
    v.push(37);
    ASSERT_FALSE(v.isEmpty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

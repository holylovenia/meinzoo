#include "animal.h"
#include "aves/aves.h"
#include "aves/colibri.h"
#include "aves/duck.h"
#include "aves/eagle.h"
#include "aves/owl.h"
#include "aves/peacock.h"
#include "mammalia/mammalia.h"
#include "mammalia/elephant.h"
#include "mammalia/giraffe.h"
#include "mammalia/lion.h"
#include "mammalia/monkey.h"
#include "mammalia/tiger.h"
#include "mammalia/wolf.h"
#include "mammalia/zebra.h"
#include "pisces/pisces.h"
#include "pisces/barracuda.h"
#include "pisces/clownfish.h"
#include "pisces/shark.h"
#include "reptilia/reptilia.h"
#include "reptilia/chameleon.h"
#include "reptilia/crocodile.h"
#include "reptilia/iguana.h"
#include "reptilia/komodo.h"
#include "reptilia/python.h"
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

class AnimalTest : public ::testing::Test {
  protected:
    AnimalTest(){}
};

TEST(AnimalTest, GetTextMethod) {
    Colibri obj_colibri(2,4);
    ASSERT_EQ(true, obj_colibri.IsLandAnimal());
    ASSERT_EQ(false, obj_colibri.IsWaterAnimal());
    ASSERT_EQ(true, obj_colibri.IsAirAnimal());
    Point P1 = obj_colibri.GetPosition();
    ASSERT_EQ(2, P1.GetX());
    ASSERT_EQ(4, P1.GetY());
    ASSERT_EQ('O', obj_colibri.Render());
}
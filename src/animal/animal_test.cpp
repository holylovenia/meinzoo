#include "animal.h"
#include "aves/aves.h"
#include "aves/colibri.h"
#include "aves/duck.h"
#include "aves/eagle.h"
#include "aves/owl.h"
#include "aves/peacock.h"
#include "aves/wild_colibri.h"
#include "behavior/animal_behavior.h"
#include "behavior/behavior_tame.h"
#include "behavior/behavior_wild.h"
#include "diet/animal_diet.h"
#include "diet/carnivora.h"
#include "diet/herbivora.h"
#include "diet/omnivora.h"
#include "mammalia/mammalia.h"
#include "mammalia/elephant.h"
#include "mammalia/giraffe.h"
#include "mammalia/lion.h"
#include "mammalia/monkey.h"
#include "mammalia/tiger.h"
#include "mammalia/wild_bunny.h"
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
    Colibri obj_colibri(2,4,100);
    ASSERT_EQ(true, obj_colibri.IsLandAnimal());
    ASSERT_EQ(false, obj_colibri.IsWaterAnimal());
    ASSERT_EQ(true, obj_colibri.IsAirAnimal());
    ASSERT_EQ(true, obj_colibri.IsHerbivore());
    ASSERT_EQ(false, obj_colibri.IsCarnivore());
    ASSERT_EQ(false, obj_colibri.IsOmnivore());
    ASSERT_EQ(0, obj_colibri.GetReqMeat());
    ASSERT_EQ(60, obj_colibri.GetReqPlant());
    Point P1 = obj_colibri.GetPosition();
    ASSERT_EQ(2, P1.GetX());
    ASSERT_EQ(4, P1.GetY());
    ASSERT_EQ('O', obj_colibri.Render());

    WildColibri obj_wild_colibri(5,8,100);
    ASSERT_EQ(true, obj_wild_colibri.IsLandAnimal());
    ASSERT_EQ(false, obj_wild_colibri.IsWaterAnimal());
    ASSERT_EQ(true, obj_wild_colibri.IsAirAnimal());
    ASSERT_EQ(true, obj_wild_colibri.IsHerbivore());
    ASSERT_EQ(false, obj_wild_colibri.IsCarnivore());
    ASSERT_EQ(false, obj_wild_colibri.IsOmnivore());
    ASSERT_EQ(0, obj_wild_colibri.GetReqMeat());
    ASSERT_EQ(60, obj_wild_colibri.GetReqPlant());
    Point P2 = obj_wild_colibri.GetPosition();
    ASSERT_EQ(5, P2.GetX());
    ASSERT_EQ(8, P2.GetY());
    ASSERT_EQ('O', obj_wild_colibri.Render());
    ASSERT_EQ(false, obj_wild_colibri.IsEnemy(1));
    ASSERT_EQ(true, obj_wild_colibri.IsEnemy(19));
}
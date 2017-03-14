#include "cell.h"
#include "facility/facility.h"
#include "facility/park.h"
#include "facility/restaurant.h"
#include "facility/road.h"
#include "facility/road_entrance.h"
#include "facility/road_exit.h"
#include "habitat/habitat.h"
#include "habitat/air_habitat.h"
#include "habitat/land_habitat.h"
#include "habitat/water_habitat.h"
#include <gtest/gtest.h>

class CellTest : public ::testing::Test {
  protected:
    CellTest(){}
};

TEST(CellTest, Park) {
  Park obj_park(false, "Ji Sung");
  ASSERT_EQ(false, obj_park.IsAccessible());
  EXPECT_NE("",obj_park.GetParkName());
  ASSERT_EQ('*',obj_park.Render());
}
TEST(CellTest, Restaurant) {
  Restaurant obj_restaurant(false, "Queen");
  ASSERT_EQ(false, obj_restaurant.IsAccessible());
  EXPECT_NE("",obj_restaurant.GetRestaurantName());
  ASSERT_EQ('R',obj_restaurant.Render());
}
TEST(CellTest, Road) {
  Road obj_road(true);
  ASSERT_EQ(true, obj_road.IsAccessible());
  ASSERT_EQ(false, obj_road.IsEntrance());
  ASSERT_EQ(false, obj_road.IsExit());
  ASSERT_EQ('.',obj_road.Render());
}
TEST(CellTest, RoadEntrance) {
  RoadEntrance obj_road_entrance(true);
  ASSERT_EQ(true, obj_road_entrance.IsAccessible());
  ASSERT_EQ(true, obj_road_entrance.IsEntrance());
  ASSERT_EQ(false, obj_road_entrance.IsExit());
  ASSERT_EQ('.',obj_road_entrance.Render());
}
TEST(CellTest, RoadExit) {
  RoadExit obj_road_exit(true);
  ASSERT_EQ(true, obj_road_exit.IsAccessible());
  ASSERT_EQ(false, obj_road_exit.IsEntrance());
  ASSERT_EQ(true, obj_road_exit.IsExit());
  ASSERT_EQ('.',obj_road_exit.Render());
}
TEST(CellTest, AirHabitat) {
  AirHabitat* obj_air_habitat = new AirHabitat;
  ASSERT_EQ('a',obj_air_habitat->Render());
  delete obj_air_habitat;
}
TEST(CellTest, LandHabitat) {
  LandHabitat* obj_land_habitat = new LandHabitat;
  ASSERT_EQ('l',obj_land_habitat->Render());
  delete obj_land_habitat;
}
TEST(CellTest, WaterHabitat) {
  WaterHabitat* obj_water_habitat = new WaterHabitat;
  ASSERT_EQ('w',obj_water_habitat->Render());
  delete obj_water_habitat;
}
#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

/** @class AnimalDiet
  * Kelas AnimalDiet mendifinisikan jenis makanan hewan.
  */
class AnimalDiet {
  public:
    /** @brief Menentukan apakah hewan merupakan herbivora.
      * @return Nilai true/false hewan merupakan herbivora. 
      */
    bool IsHerbivore();
    /** @brief Menentukan apakah hewan merupakan carnivora.
      * @return Nilai true/false hewan merupakan carnivora. 
      */
    bool IsCarnivore();
    /** @brief Menentukan apakah hewan merupakan omnivora.
      * @return Nilai true/false hewan merupakan omnivora. 
      */
    bool IsOmnivore();
    /** @brief Pure virtual method
      * Didefinisikan pada kelas turunan.
      */
    virtual int GetReqMeat() = 0;
    /** @brief Pure virtual method
      * Didefinisikan pada kelas turunan.
      */
    virtual int GetReqPlant() = 0;
    /** @brief Getter nilai totalReqMeat.
      * @return Nilai totalReqMeat.
      */
    static int GetTotalMeat();
    /** @brief Getter nilai totalReqPlant.
      * @return Nilai totalReqPlant.
      */    
    static int GetTotalPlant();

  protected:
    int weight;
    bool eat_meat;
    bool eat_plant;
    int ratio_meat;
    int ratio_plant;
    static int total_req_meat;
    static int total_req_plant;
};

#endif
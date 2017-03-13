#ifndef ANIMAL_BEHAVIOR_H
#define ANIMAL_BEHAVIOR_H

/** @class AnimalBehavior
  * Kelas abstrak AnimalBehavior menentukan perilaku hewan.
  */
class AnimalBehavior {
  public:
    /** @brief Getter nilai isWild. 
      * @return Nilai isWild.
      */
    bool GetBehavior();
    /** @brief Pure virtual method
      * Menetapkan nilai perilaku hewan.
      */
    virtual void SetBehavior() = 0;

  protected:
    bool is_wild;
};

#endif
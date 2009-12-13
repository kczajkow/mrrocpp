// -------------------------------------------------------------------------
//                            sg_local.h
// Definicje struktur danych i metod dla procesu EDP mechatronika
//
// Ostatnia modyfikacja: 2006
// -------------------------------------------------------------------------



#ifndef __REGULATOR_IRP6M_H
#define __REGULATOR_IRP6M_H

#include "edp/common/edp.h"

#include "edp/common/regulator.h"

namespace mrrocpp {
namespace edp {
namespace irp6m {
class effector;
// numeracja od 2 ze wzgledu na analogie irp6_postument

// ograniczenia przyrostu PWM dla IRP6_MECHATRONIKA
#define IRP6_MECHATRONIKA_AXE2_MAX_PWM_INCREMENT	1000
#define IRP6_MECHATRONIKA_AXE3_MAX_PWM_INCREMENT	1000
#define IRP6_MECHATRONIKA_AXE4_MAX_PWM_INCREMENT	1000
#define IRP6_MECHATRONIKA_AXE5_MAX_PWM_INCREMENT	1000
#define IRP6_MECHATRONIKA_AXE6_MAX_PWM_INCREMENT	1000

// Stale dla celow synchronizacji IRP6_MECHATRONIKA
#define IRP6_MECHATRONIKA_SYNCHRO_STEP_COARSE -0.03
#define IRP6_MECHATRONIKA_SYNCHRO_STEP_FINE   -0.007

#define IRP6_MECHATRONIKA_AXIS_0_TO_5_INC_PER_REVOLUTION  2000.0  // Liczba impulsow enkodera na obrot walu - musi byc float

// os od ktorej startuje synchronizacja - numeracja od 0
#define IRP6M_SYN_INIT_AXE 1

// numeracja od 2 ze wzgledu na analogie irp6_postument

/*-----------------------------------------------------------------------*/
class NL_regulator_2_irp6m: public common::NL_regulator
{
    /* Klasa regulatorow konkretnych */
    // Obiekt z algorytmem regulacji

public:
    NL_regulator_2_irp6m (uint8_t reg_no, uint8_t reg_par_no,
                          double aa, double bb0, double bb1, double k_ff, common::manip_and_conv_effector &_master); // konstruktor

    virtual uint8_t compute_set_value ( void );
    // obliczenie nastepnej wartosci zadanej dla napedu - metoda konkretna

}; // end: class NL_regulator_2
// ----------------------------------------------------------------------

/*-----------------------------------------------------------------------*/
class NL_regulator_3_irp6m: public common::NL_regulator
{
    /* Klasa regulatorow konkretnych */
    // Obiekt z algorytmem regulacji

public:
    NL_regulator_3_irp6m (uint8_t reg_no, uint8_t reg_par_no,
                          double aa, double bb0, double bb1, double k_ff, common::manip_and_conv_effector &_master); // konstruktor

    virtual uint8_t compute_set_value ( void );
    // obliczenie nastepnej wartosci zadanej dla napedu - metoda konkretna

}; // end: class NL_regulator_3
// ----------------------------------------------------------------------

/*-----------------------------------------------------------------------*/
class NL_regulator_4_irp6m: public common::NL_regulator
{
    /* Klasa regulatorow konkretnych */
    // Obiekt z algorytmem regulacji

public:
    NL_regulator_4_irp6m (uint8_t reg_no, uint8_t reg_par_no,
                          double aa, double bb0, double bb1, double k_ff, common::manip_and_conv_effector &_master); // konstruktor

    virtual uint8_t compute_set_value ( void );
    // obliczenie nastepnej wartosci zadanej dla napedu - metoda konkretna

}; // end: class NL_regulator_4
// ----------------------------------------------------------------------


/*-----------------------------------------------------------------------*/
class NL_regulator_5_irp6m: public common::NL_regulator
{
    /* Klasa regulatorow konkretnych */
    // Obiekt z algorytmem regulacji

public:
    bool first;
    NL_regulator_5_irp6m (uint8_t reg_no, uint8_t reg_par_no,
                          double aa, double bb0, double bb1, double k_ff, common::manip_and_conv_effector &_master); // konstruktor

    virtual uint8_t compute_set_value ( void );
    // obliczenie nastepnej wartosci zadanej dla napedu - metoda konkretna

}; // end: class NL_regulator_5
// ----------------------------------------------------------------------


/*-----------------------------------------------------------------------*/
class NL_regulator_6_irp6m: public common::NL_regulator
{
    /* Klasa regulatorow konkretnych */
    // Obiekt z algorytmem regulacji

public:
    NL_regulator_6_irp6m (uint8_t reg_no, uint8_t reg_par_no,
                          double aa, double bb0, double bb1, double k_ff, common::manip_and_conv_effector &_master); // konstruktor

    virtual uint8_t compute_set_value ( void );
    // obliczenie nastepnej wartosci zadanej dla napedu - metoda konkretna

}; // end: class NL_regulator_6
// ----------------------------------------------------------------------


} // namespace common
} // namespace edp
} // namespace mrrocpp



#endif

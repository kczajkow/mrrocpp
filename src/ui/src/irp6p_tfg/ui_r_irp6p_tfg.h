// -------------------------------------------------------------------------
//                            ui_class.h
// Definicje klasy Ui
//
// Ostatnia modyfikacja: 2010
// -------------------------------------------------------------------------

#ifndef __UI_R_IRP6P_TFG_H
#define __UI_R_IRP6P_TFG_H

#include "ui/src/ui.h"
#include "ui/src/ui_robot.h"
#include "robot/irp6p_tfg/const_irp6p_tfg.h"

//
//
// KLASA UiRobotIrp6p_tfg
//
//


// super klasa agregujaca porozrzucane struktury

class Ui;
class ui_tfg_and_conv_robot;

class UiRobotIrp6p_tfg: public UiRobot {
private:

public:

	double irp6p_tfg_current_pos[lib::irp6p_tfg::NUM_OF_SERVOS];// pozycja biezaca
	double irp6p_tfg_desired_pos[lib::irp6p_tfg::NUM_OF_SERVOS]; // pozycja zadana


	bool is_wind_irp6p_tfg_moves_open; // informacja czy okno ruchow
	bool is_wind_irp6p_tfg_servo_algorithm_open; // informacja czy okno definicji kinematyki jest otwarte

	ui_tfg_and_conv_robot *ui_ecp_robot;

	UiRobotIrp6p_tfg(Ui& _ui);
	int reload_configuration();
	int manage_interface();
	int close_all_windows();
	int delete_ui_ecp_robot();
};

#endif


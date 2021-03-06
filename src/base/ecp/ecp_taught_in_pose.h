#if !defined(_ECP_TAUGHT_IN_POSE_H)
#define  _ECP_TAUGHT_IN_POSE_H

/*!
 * @file
 * @brief File contains ecp_taught_in_pose declaration
 * @author twiniars <twiniars@ia.pw.edu.pl>, Warsaw University of Technology
 *
 * @ingroup ecp
 */

#include "base/lib/com_buf.h"		// lib::POSE_SPECIFICATION
#include "base/lib/impconst.h"	// lib::MAX_SERVOS_NR
namespace mrrocpp {
namespace ecp {
namespace common {

class ecp_taught_in_pose
{
public:
	lib::ECP_POSE_SPECIFICATION arm_type;
	double motion_time;
	double coordinates[lib::MAX_SERVOS_NR];

	int extra_info; // by Y uzupelnienie struktury o dodatkowe pole, do dowolnego wykorzystania

	ecp_taught_in_pose(void);

	ecp_taught_in_pose(lib::ECP_POSE_SPECIFICATION at, double mt, const double c[lib::MAX_SERVOS_NR], int e_info = 0);
}; // end:class ecp_taught_in_pose

} // namespace common
} // namespace ecp
} // namespace mrrocpp

#endif /* _ECP_TAUGHT_IN_POSE_H */

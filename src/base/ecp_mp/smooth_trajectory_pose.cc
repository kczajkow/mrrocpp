/*!
 * @file
 * @brief smooth_trajectory_pose class and its methods definition
 * Contains bodies of the methods of smooth_trajectory_pose class.
 * @author lorenzo, Warsaw University of Technology
 *
 * @ingroup ecp_mp
 */

#include <cstring>

#include "base/ecp_mp/smooth_trajectory_pose.h"

namespace mrrocpp {
namespace ecp_mp {
namespace common {

smooth_trajectory_pose::smooth_trajectory_pose(void)
{
}

smooth_trajectory_pose::smooth_trajectory_pose(lib::ECP_POSE_SPECIFICATION at, const double* c, const double* vv, const double* aa)
{
	arm_type = at;
	memcpy(v, vv, lib::MAX_SERVOS_NR * sizeof(double));
	memcpy(a, aa, lib::MAX_SERVOS_NR * sizeof(double));
	memcpy(coordinates, c, lib::MAX_SERVOS_NR * sizeof(double));
}

} // namespace common
} // namespace ecp
} // namespace mrrocpp

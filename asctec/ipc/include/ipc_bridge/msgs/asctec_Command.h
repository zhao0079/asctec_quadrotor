/* automatically generated by xdrgen from xdr/asctec_Command.xdr
 * xdrgen cvs version: $Revision: 1.7 $ $Date: 2009/01/12 15:54:59 $
 * xdr/asctec_Command.xdr last modified: Mon Jul  4 18:34:54 2011
 */

#ifndef INCasctec_Command_h
#define INCasctec_Command_h



#include <cstring>
#include <ipc_bridge/msgs/rosgraph_msgs_Header.h>


struct asctec_Command {
  rosgraph_msgs_Header header;
  float thrust;
  float roll;
  float pitch;
  float yaw;
  float kp_roll;
  float kd_roll;
  float kp_pitch;
  float kd_pitch;
  float kp_yaw;
  float kd_yaw;
  float p;
  float q;
  float r;
  float z_correction;
  float r_correction;
  float p_correction;
#define asctec_Command_IPC_FORMAT "{" rosgraph_msgs_Header_IPC_FORMAT ",float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float}"
  static const char *getIPCFormat(void) {
    return asctec_Command_IPC_FORMAT;
  }


  asctec_Command()
  {
  }
  asctec_Command(const asctec_Command& msg)
  {
    header = msg.header;

    thrust = msg.thrust;
    roll = msg.roll;
    pitch = msg.pitch;
    yaw = msg.yaw;
    kp_roll = msg.kp_roll;
    kd_roll = msg.kd_roll;
    kp_pitch = msg.kp_pitch;
    kd_pitch = msg.kd_pitch;
    kp_yaw = msg.kp_yaw;
    kd_yaw = msg.kd_yaw;
    p = msg.p;
    q = msg.q;
    r = msg.r;
    z_correction = msg.z_correction;
    r_correction = msg.r_correction;
    p_correction = msg.p_correction;
  }
  ~asctec_Command()
  {
  }
  asctec_Command& operator= (const asctec_Command& msg)
  {
    header = msg.header;

    thrust = msg.thrust;
    roll = msg.roll;
    pitch = msg.pitch;
    yaw = msg.yaw;
    kp_roll = msg.kp_roll;
    kd_roll = msg.kd_roll;
    kp_pitch = msg.kp_pitch;
    kd_pitch = msg.kd_pitch;
    kp_yaw = msg.kp_yaw;
    kd_yaw = msg.kd_yaw;
    p = msg.p;
    q = msg.q;
    r = msg.r;
    z_correction = msg.z_correction;
    r_correction = msg.r_correction;
    p_correction = msg.p_correction;

    return *this;
  }

};


namespace ipc_bridge
{
    namespace asctec
    {
        typedef asctec_Command Command;
    }
}


#endif /* INCasctec_Command_h */

#include <gazebo/gazebo.hh>

namespace gazebo {
class WorldPluginOffice : public WorldPlugin {
 public:
  WorldPluginOffice() : WorldPlugin() { printf("Welcome to Thanh's World!\n"); }

 public:
  void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
};
GZ_REGISTER_WORLD_PLUGIN(WorldPluginOffice)
}  // namespace gazebo

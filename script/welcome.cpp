//print hello world as the simulation starts
#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin // creating plugin inherts from gazebo worldplugin class
  {
    public: WorldPluginMyRobot() : WorldPlugin() // the constractor of the gazebo class
            {
              printf("Welcome to Menna’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) //load function (mandatory) receives info from thwe world file
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot) //register the plugin with the simulator
}

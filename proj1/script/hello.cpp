#include<gazebo/gazebo.hh>


namespace gazebo 
{
    class WorldPluginMyProj1 : public WorldPlugin
    {
        public: WorldPluginMyProj1() : WorldPlugin()
        {
            printf("Welcome to Arpit's World!\n");
        }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyProj1)
}
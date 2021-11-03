//#line 2 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the opencv_apps package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __opencv_apps__EDGEDETECTIONCONFIG_H__
#define __opencv_apps__EDGEDETECTIONCONFIG_H__

#if __cplusplus >= 201103L
#define DYNAMIC_RECONFIGURE_FINAL final
#else
#define DYNAMIC_RECONFIGURE_FINAL
#endif

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace opencv_apps
{
  class EdgeDetectionConfigStatics;

  class EdgeDetectionConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }

      virtual void clamp(EdgeDetectionConfig &config, const EdgeDetectionConfig &max, const EdgeDetectionConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const EdgeDetectionConfig &config1, const EdgeDetectionConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, EdgeDetectionConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const EdgeDetectionConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, EdgeDetectionConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const EdgeDetectionConfig &config) const = 0;
      virtual void getValue(const EdgeDetectionConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template <class T>
    class ParamDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T EdgeDetectionConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T EdgeDetectionConfig::* field;

      virtual void clamp(EdgeDetectionConfig &config, const EdgeDetectionConfig &max, const EdgeDetectionConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const EdgeDetectionConfig &config1, const EdgeDetectionConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, EdgeDetectionConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const EdgeDetectionConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, EdgeDetectionConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const EdgeDetectionConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const EdgeDetectionConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, EdgeDetectionConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template<class T, class PT>
    class GroupDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, EdgeDetectionConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T PT::* field;
      std::vector<EdgeDetectionConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(EdgeDetectionConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("use_camera_info"==(*_i)->name){use_camera_info = boost::any_cast<bool>(val);}
        if("edge_type"==(*_i)->name){edge_type = boost::any_cast<int>(val);}
        if("canny_threshold1"==(*_i)->name){canny_threshold1 = boost::any_cast<int>(val);}
        if("canny_threshold2"==(*_i)->name){canny_threshold2 = boost::any_cast<int>(val);}
        if("apertureSize"==(*_i)->name){apertureSize = boost::any_cast<int>(val);}
        if("apply_blur_pre"==(*_i)->name){apply_blur_pre = boost::any_cast<bool>(val);}
        if("postBlurSize"==(*_i)->name){postBlurSize = boost::any_cast<int>(val);}
        if("postBlurSigma"==(*_i)->name){postBlurSigma = boost::any_cast<double>(val);}
        if("apply_blur_post"==(*_i)->name){apply_blur_post = boost::any_cast<bool>(val);}
        if("L2gradient"==(*_i)->name){L2gradient = boost::any_cast<bool>(val);}
      }
    }

    bool use_camera_info;
int edge_type;
int canny_threshold1;
int canny_threshold2;
int apertureSize;
bool apply_blur_pre;
int postBlurSize;
double postBlurSigma;
bool apply_blur_post;
bool L2gradient;

    bool state;
    std::string name;

    
}groups;



//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool use_camera_info;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int edge_type;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int canny_threshold1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int canny_threshold2;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int apertureSize;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool apply_blur_pre;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int postBlurSize;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double postBlurSigma;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool apply_blur_post;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool L2gradient;
//#line 228 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("EdgeDetectionConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const EdgeDetectionConfig &__max__ = __getMax__();
      const EdgeDetectionConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const EdgeDetectionConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const EdgeDetectionConfig &__getDefault__();
    static const EdgeDetectionConfig &__getMax__();
    static const EdgeDetectionConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const EdgeDetectionConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void EdgeDetectionConfig::ParamDescription<std::string>::clamp(EdgeDetectionConfig &config, const EdgeDetectionConfig &max, const EdgeDetectionConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class EdgeDetectionConfigStatics
  {
    friend class EdgeDetectionConfig;

    EdgeDetectionConfigStatics()
    {
EdgeDetectionConfig::GroupDescription<EdgeDetectionConfig::DEFAULT, EdgeDetectionConfig> Default("Default", "", 0, 0, true, &EdgeDetectionConfig::groups);
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.use_camera_info = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.use_camera_info = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.use_camera_info = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("use_camera_info", "bool", 0, "Indicates that the camera_info topic should be subscribed to to get the default input_frame_id. Otherwise the frame from the image message will be used.", "", &EdgeDetectionConfig::use_camera_info)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("use_camera_info", "bool", 0, "Indicates that the camera_info topic should be subscribed to to get the default input_frame_id. Otherwise the frame from the image message will be used.", "", &EdgeDetectionConfig::use_camera_info)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.edge_type = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.edge_type = 2;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.edge_type = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("edge_type", "int", 0, "Edge Detection Methods", "{'enum_description': 'An enum for Edge Detection Mehtods', 'enum': [{'srcline': 42, 'description': 'Sobel Derivatives', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Sobel'}, {'srcline': 43, 'description': 'Laplace Operator', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Laplace'}, {'srcline': 44, 'description': 'Canny Edge Detector', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Canny'}]}", &EdgeDetectionConfig::edge_type)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("edge_type", "int", 0, "Edge Detection Methods", "{'enum_description': 'An enum for Edge Detection Mehtods', 'enum': [{'srcline': 42, 'description': 'Sobel Derivatives', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Sobel'}, {'srcline': 43, 'description': 'Laplace Operator', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Laplace'}, {'srcline': 44, 'description': 'Canny Edge Detector', 'srcfile': '/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Canny'}]}", &EdgeDetectionConfig::edge_type)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.canny_threshold1 = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.canny_threshold1 = 500;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.canny_threshold1 = 100;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("canny_threshold1", "int", 0, "First threshold for the hysteresis procedure.", "", &EdgeDetectionConfig::canny_threshold1)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("canny_threshold1", "int", 0, "First threshold for the hysteresis procedure.", "", &EdgeDetectionConfig::canny_threshold1)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.canny_threshold2 = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.canny_threshold2 = 500;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.canny_threshold2 = 200;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("canny_threshold2", "int", 0, "Second threshold for the hysteresis procedure.", "", &EdgeDetectionConfig::canny_threshold2)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("canny_threshold2", "int", 0, "Second threshold for the hysteresis procedure.", "", &EdgeDetectionConfig::canny_threshold2)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.apertureSize = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.apertureSize = 10;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.apertureSize = 3;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("apertureSize", "int", 0, "Aperture size for the Sobel() operator.", "", &EdgeDetectionConfig::apertureSize)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("apertureSize", "int", 0, "Aperture size for the Sobel() operator.", "", &EdgeDetectionConfig::apertureSize)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.apply_blur_pre = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.apply_blur_pre = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.apply_blur_pre = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("apply_blur_pre", "bool", 0, "Flag, applying Blur() to input image", "", &EdgeDetectionConfig::apply_blur_pre)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("apply_blur_pre", "bool", 0, "Flag, applying Blur() to input image", "", &EdgeDetectionConfig::apply_blur_pre)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.postBlurSize = 3;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.postBlurSize = 31;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.postBlurSize = 13;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("postBlurSize", "int", 0, "Aperture size for the Blur() operator.", "", &EdgeDetectionConfig::postBlurSize)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<int>("postBlurSize", "int", 0, "Aperture size for the Blur() operator.", "", &EdgeDetectionConfig::postBlurSize)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.postBlurSigma = 0.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.postBlurSigma = 10.0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.postBlurSigma = 3.2;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<double>("postBlurSigma", "double", 0, "Sigma for the GaussianBlur() operator.", "", &EdgeDetectionConfig::postBlurSigma)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<double>("postBlurSigma", "double", 0, "Sigma for the GaussianBlur() operator.", "", &EdgeDetectionConfig::postBlurSigma)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.apply_blur_post = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.apply_blur_post = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.apply_blur_post = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("apply_blur_post", "bool", 0, "Flag, applying GaussianBlur() to output(edge) image", "", &EdgeDetectionConfig::apply_blur_post)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("apply_blur_post", "bool", 0, "Flag, applying GaussianBlur() to output(edge) image", "", &EdgeDetectionConfig::apply_blur_post)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.L2gradient = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.L2gradient = 1;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.L2gradient = 0;
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("L2gradient", "bool", 0, "Flag, indicating whether a more accurate  L_2 norm should be used to calculate the image gradient magnitude ( L2gradient=true ), or whether the default  L_1 norm is enough ( L2gradient=false ).", "", &EdgeDetectionConfig::L2gradient)));
//#line 291 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(EdgeDetectionConfig::AbstractParamDescriptionConstPtr(new EdgeDetectionConfig::ParamDescription<bool>("L2gradient", "bool", 0, "Flag, indicating whether a more accurate  L_2 norm should be used to calculate the image gradient magnitude ( L2gradient=true ), or whether the default  L_1 norm is enough ( L2gradient=false ).", "", &EdgeDetectionConfig::L2gradient)));
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 246 "/opt/ros/melodic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(EdgeDetectionConfig::AbstractGroupDescriptionConstPtr(new EdgeDetectionConfig::GroupDescription<EdgeDetectionConfig::DEFAULT, EdgeDetectionConfig>(Default)));
//#line 366 "/opt/ros/melodic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<EdgeDetectionConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<EdgeDetectionConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<EdgeDetectionConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    EdgeDetectionConfig __max__;
    EdgeDetectionConfig __min__;
    EdgeDetectionConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const EdgeDetectionConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static EdgeDetectionConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &EdgeDetectionConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const EdgeDetectionConfig &EdgeDetectionConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const EdgeDetectionConfig &EdgeDetectionConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const EdgeDetectionConfig &EdgeDetectionConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<EdgeDetectionConfig::AbstractParamDescriptionConstPtr> &EdgeDetectionConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<EdgeDetectionConfig::AbstractGroupDescriptionConstPtr> &EdgeDetectionConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const EdgeDetectionConfigStatics *EdgeDetectionConfig::__get_statics__()
  {
    const static EdgeDetectionConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = EdgeDetectionConfigStatics::get_instance();

    return statics;
  }

//#line 42 "/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg"
      const int EdgeDetection_Sobel = 0;
//#line 43 "/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg"
      const int EdgeDetection_Laplace = 1;
//#line 44 "/home/codbot/codbot_ws/src/camera_projects/opencv_apps/cfg/EdgeDetection.cfg"
      const int EdgeDetection_Canny = 2;
}

#undef DYNAMIC_RECONFIGURE_FINAL

#endif // __EDGEDETECTIONRECONFIGURATOR_H__

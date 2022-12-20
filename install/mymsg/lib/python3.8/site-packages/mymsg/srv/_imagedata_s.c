// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mymsg:srv/Imagedata.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mymsg/srv/detail/imagedata__struct.h"
#include "mymsg/srv/detail/imagedata__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mymsg__srv__imagedata__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mymsg.srv._imagedata.Imagedata_Request", full_classname_dest, 38) == 0);
  }
  mymsg__srv__Imagedata_Request * ros_message = _ros_message;
  {  // input_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_data");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->input_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // input_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input_count = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsg__srv__imagedata__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Imagedata_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsg.srv._imagedata");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Imagedata_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsg__srv__Imagedata_Request * ros_message = (mymsg__srv__Imagedata_Request *)raw_ros_message;
  {  // input_data
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->input_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_count
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->input_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mymsg/srv/detail/imagedata__struct.h"
// already included above
// #include "mymsg/srv/detail/imagedata__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__image__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mymsg__srv__imagedata__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mymsg.srv._imagedata.Imagedata_Response", full_classname_dest, 39) == 0);
  }
  mymsg__srv__Imagedata_Response * ros_message = _ros_message;
  {  // output_cut
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_cut");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->output_cut = (Py_True == field);
    Py_DECREF(field);
  }
  {  // output_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->output_count = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // output_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_data");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__image__convert_from_py(field, &ros_message->output_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mymsg__srv__imagedata__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Imagedata_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mymsg.srv._imagedata");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Imagedata_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mymsg__srv__Imagedata_Response * ros_message = (mymsg__srv__Imagedata_Response *)raw_ros_message;
  {  // output_cut
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->output_cut ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_cut", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_count
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->output_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_data
    PyObject * field = NULL;
    field = sensor_msgs__msg__image__convert_to_py(&ros_message->output_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsg:srv/Imagedata.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Imagedata_Request(type):
    """Metaclass of message 'Imagedata_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Imagedata_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imagedata__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imagedata__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imagedata__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imagedata__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imagedata__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imagedata_Request(metaclass=Metaclass_Imagedata_Request):
    """Message class 'Imagedata_Request'."""

    __slots__ = [
        '_input_data',
        '_input_count',
    ]

    _fields_and_field_types = {
        'input_data': 'sensor_msgs/Image',
        'input_count': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.input_data = kwargs.get('input_data', Image())
        self.input_count = kwargs.get('input_count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.input_data != other.input_data:
            return False
        if self.input_count != other.input_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def input_data(self):
        """Message field 'input_data'."""
        return self._input_data

    @input_data.setter
    def input_data(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'input_data' field must be a sub message of type 'Image'"
        self._input_data = value

    @property
    def input_count(self):
        """Message field 'input_count'."""
        return self._input_count

    @input_count.setter
    def input_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'input_count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._input_count = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Imagedata_Response(type):
    """Metaclass of message 'Imagedata_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Imagedata_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imagedata__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imagedata__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imagedata__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imagedata__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imagedata__response

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imagedata_Response(metaclass=Metaclass_Imagedata_Response):
    """Message class 'Imagedata_Response'."""

    __slots__ = [
        '_output_cut',
        '_output_count',
        '_output_data',
    ]

    _fields_and_field_types = {
        'output_cut': 'boolean',
        'output_count': 'int64',
        'output_data': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.output_cut = kwargs.get('output_cut', bool())
        self.output_count = kwargs.get('output_count', int())
        from sensor_msgs.msg import Image
        self.output_data = kwargs.get('output_data', Image())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.output_cut != other.output_cut:
            return False
        if self.output_count != other.output_count:
            return False
        if self.output_data != other.output_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def output_cut(self):
        """Message field 'output_cut'."""
        return self._output_cut

    @output_cut.setter
    def output_cut(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'output_cut' field must be of type 'bool'"
        self._output_cut = value

    @property
    def output_count(self):
        """Message field 'output_count'."""
        return self._output_count

    @output_count.setter
    def output_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'output_count' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'output_count' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._output_count = value

    @property
    def output_data(self):
        """Message field 'output_data'."""
        return self._output_data

    @output_data.setter
    def output_data(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'output_data' field must be a sub message of type 'Image'"
        self._output_data = value


class Metaclass_Imagedata(type):
    """Metaclass of service 'Imagedata'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Imagedata')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__imagedata

            from mymsg.srv import _imagedata
            if _imagedata.Metaclass_Imagedata_Request._TYPE_SUPPORT is None:
                _imagedata.Metaclass_Imagedata_Request.__import_type_support__()
            if _imagedata.Metaclass_Imagedata_Response._TYPE_SUPPORT is None:
                _imagedata.Metaclass_Imagedata_Response.__import_type_support__()


class Imagedata(metaclass=Metaclass_Imagedata):
    from mymsg.srv._imagedata import Imagedata_Request as Request
    from mymsg.srv._imagedata import Imagedata_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from server_demo:srv/Myimage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Myimage_Request(type):
    """Metaclass of message 'Myimage_Request'."""

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
            module = import_type_support('server_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_demo.srv.Myimage_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__myimage__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__myimage__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__myimage__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__myimage__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__myimage__request

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


class Myimage_Request(metaclass=Metaclass_Myimage_Request):
    """Message class 'Myimage_Request'."""

    __slots__ = [
        '_client_image',
    ]

    _fields_and_field_types = {
        'client_image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.client_image = kwargs.get('client_image', Image())

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
        if self.client_image != other.client_image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def client_image(self):
        """Message field 'client_image'."""
        return self._client_image

    @client_image.setter
    def client_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'client_image' field must be a sub message of type 'Image'"
        self._client_image = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Myimage_Response(type):
    """Metaclass of message 'Myimage_Response'."""

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
            module = import_type_support('server_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_demo.srv.Myimage_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__myimage__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__myimage__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__myimage__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__myimage__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__myimage__response

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


class Myimage_Response(metaclass=Metaclass_Myimage_Response):
    """Message class 'Myimage_Response'."""

    __slots__ = [
        '_server_image',
    ]

    _fields_and_field_types = {
        'server_image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.server_image = kwargs.get('server_image', Image())

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
        if self.server_image != other.server_image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def server_image(self):
        """Message field 'server_image'."""
        return self._server_image

    @server_image.setter
    def server_image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'server_image' field must be a sub message of type 'Image'"
        self._server_image = value


class Metaclass_Myimage(type):
    """Metaclass of service 'Myimage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('server_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'server_demo.srv.Myimage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__myimage

            from server_demo.srv import _myimage
            if _myimage.Metaclass_Myimage_Request._TYPE_SUPPORT is None:
                _myimage.Metaclass_Myimage_Request.__import_type_support__()
            if _myimage.Metaclass_Myimage_Response._TYPE_SUPPORT is None:
                _myimage.Metaclass_Myimage_Response.__import_type_support__()


class Myimage(metaclass=Metaclass_Myimage):
    from server_demo.srv._myimage import Myimage_Request as Request
    from server_demo.srv._myimage import Myimage_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

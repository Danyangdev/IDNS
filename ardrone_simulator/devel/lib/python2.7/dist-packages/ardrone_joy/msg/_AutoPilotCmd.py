# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ardrone_joy/AutoPilotCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class AutoPilotCmd(genpy.Message):
  _md5sum = "55b6eb0541581563846f8e0c40c709a5"
  _type = "ardrone_joy/AutoPilotCmd"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool autopilot_breaker_state
float64[] newpos
float64[] neworientation
int8 no_of_points
string autopilot_mode
"""
  __slots__ = ['autopilot_breaker_state','newpos','neworientation','no_of_points','autopilot_mode']
  _slot_types = ['bool','float64[]','float64[]','int8','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       autopilot_breaker_state,newpos,neworientation,no_of_points,autopilot_mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AutoPilotCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.autopilot_breaker_state is None:
        self.autopilot_breaker_state = False
      if self.newpos is None:
        self.newpos = []
      if self.neworientation is None:
        self.neworientation = []
      if self.no_of_points is None:
        self.no_of_points = 0
      if self.autopilot_mode is None:
        self.autopilot_mode = ''
    else:
      self.autopilot_breaker_state = False
      self.newpos = []
      self.neworientation = []
      self.no_of_points = 0
      self.autopilot_mode = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.autopilot_breaker_state))
      length = len(self.newpos)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.newpos))
      length = len(self.neworientation)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.neworientation))
      buff.write(_get_struct_b().pack(self.no_of_points))
      _x = self.autopilot_mode
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.autopilot_breaker_state,) = _get_struct_B().unpack(str[start:end])
      self.autopilot_breaker_state = bool(self.autopilot_breaker_state)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.newpos = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.neworientation = struct.unpack(pattern, str[start:end])
      start = end
      end += 1
      (self.no_of_points,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.autopilot_mode = str[start:end].decode('utf-8')
      else:
        self.autopilot_mode = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.autopilot_breaker_state))
      length = len(self.newpos)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.newpos.tostring())
      length = len(self.neworientation)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.neworientation.tostring())
      buff.write(_get_struct_b().pack(self.no_of_points))
      _x = self.autopilot_mode
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.autopilot_breaker_state,) = _get_struct_B().unpack(str[start:end])
      self.autopilot_breaker_state = bool(self.autopilot_breaker_state)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.newpos = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.neworientation = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 1
      (self.no_of_points,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.autopilot_mode = str[start:end].decode('utf-8')
      else:
        self.autopilot_mode = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b

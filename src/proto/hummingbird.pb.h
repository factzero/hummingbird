// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hummingbird.proto

#ifndef PROTOBUF_hummingbird_2eproto__INCLUDED
#define PROTOBUF_hummingbird_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace jaguar {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_hummingbird_2eproto();
void protobuf_InitDefaults_hummingbird_2eproto();
void protobuf_AssignDesc_hummingbird_2eproto();
void protobuf_ShutdownFile_hummingbird_2eproto();

class BlobShape;
class Datum;
class LayerParameter;

enum Phase {
  TRAIN = 0,
  TEST = 1
};
bool Phase_IsValid(int value);
const Phase Phase_MIN = TRAIN;
const Phase Phase_MAX = TEST;
const int Phase_ARRAYSIZE = Phase_MAX + 1;

const ::google::protobuf::EnumDescriptor* Phase_descriptor();
inline const ::std::string& Phase_Name(Phase value) {
  return ::google::protobuf::internal::NameOfEnum(
    Phase_descriptor(), value);
}
inline bool Phase_Parse(
    const ::std::string& name, Phase* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Phase>(
    Phase_descriptor(), name, value);
}
// ===================================================================

class BlobShape : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jaguar.BlobShape) */ {
 public:
  BlobShape();
  virtual ~BlobShape();

  BlobShape(const BlobShape& from);

  inline BlobShape& operator=(const BlobShape& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobShape& default_instance();

  static const BlobShape* internal_default_instance();

  void Swap(BlobShape* other);

  // implements Message ----------------------------------------------

  inline BlobShape* New() const { return New(NULL); }

  BlobShape* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobShape& from);
  void MergeFrom(const BlobShape& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BlobShape* other);
  void UnsafeMergeFrom(const BlobShape& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 dim = 1 [packed = true];
  int dim_size() const;
  void clear_dim();
  static const int kDimFieldNumber = 1;
  ::google::protobuf::int64 dim(int index) const;
  void set_dim(int index, ::google::protobuf::int64 value);
  void add_dim(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      dim() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_dim();

  // @@protoc_insertion_point(class_scope:jaguar.BlobShape)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > dim_;
  mutable int _dim_cached_byte_size_;
  friend void  protobuf_InitDefaults_hummingbird_2eproto_impl();
  friend void  protobuf_AddDesc_hummingbird_2eproto_impl();
  friend void protobuf_AssignDesc_hummingbird_2eproto();
  friend void protobuf_ShutdownFile_hummingbird_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<BlobShape> BlobShape_default_instance_;

// -------------------------------------------------------------------

class Datum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jaguar.Datum) */ {
 public:
  Datum();
  virtual ~Datum();

  Datum(const Datum& from);

  inline Datum& operator=(const Datum& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Datum& default_instance();

  static const Datum* internal_default_instance();

  void Swap(Datum* other);

  // implements Message ----------------------------------------------

  inline Datum* New() const { return New(NULL); }

  Datum* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Datum& from);
  void MergeFrom(const Datum& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Datum* other);
  void UnsafeMergeFrom(const Datum& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 channels = 1;
  bool has_channels() const;
  void clear_channels();
  static const int kChannelsFieldNumber = 1;
  ::google::protobuf::int32 channels() const;
  void set_channels(::google::protobuf::int32 value);

  // optional int32 height = 2;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::int32 height() const;
  void set_height(::google::protobuf::int32 value);

  // optional int32 width = 3;
  bool has_width() const;
  void clear_width();
  static const int kWidthFieldNumber = 3;
  ::google::protobuf::int32 width() const;
  void set_width(::google::protobuf::int32 value);

  // optional bytes data = 4;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 4;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // optional int32 label = 5;
  bool has_label() const;
  void clear_label();
  static const int kLabelFieldNumber = 5;
  ::google::protobuf::int32 label() const;
  void set_label(::google::protobuf::int32 value);

  // repeated float float_data = 6;
  int float_data_size() const;
  void clear_float_data();
  static const int kFloatDataFieldNumber = 6;
  float float_data(int index) const;
  void set_float_data(int index, float value);
  void add_float_data(float value);
  const ::google::protobuf::RepeatedField< float >&
      float_data() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_float_data();

  // optional bool encoded = 7 [default = false];
  bool has_encoded() const;
  void clear_encoded();
  static const int kEncodedFieldNumber = 7;
  bool encoded() const;
  void set_encoded(bool value);

  // @@protoc_insertion_point(class_scope:jaguar.Datum)
 private:
  inline void set_has_channels();
  inline void clear_has_channels();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_width();
  inline void clear_has_width();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_label();
  inline void clear_has_label();
  inline void set_has_encoded();
  inline void clear_has_encoded();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< float > float_data_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::int32 channels_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 width_;
  ::google::protobuf::int32 label_;
  bool encoded_;
  friend void  protobuf_InitDefaults_hummingbird_2eproto_impl();
  friend void  protobuf_AddDesc_hummingbird_2eproto_impl();
  friend void protobuf_AssignDesc_hummingbird_2eproto();
  friend void protobuf_ShutdownFile_hummingbird_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Datum> Datum_default_instance_;

// -------------------------------------------------------------------

class LayerParameter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jaguar.LayerParameter) */ {
 public:
  LayerParameter();
  virtual ~LayerParameter();

  LayerParameter(const LayerParameter& from);

  inline LayerParameter& operator=(const LayerParameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LayerParameter& default_instance();

  static const LayerParameter* internal_default_instance();

  void Swap(LayerParameter* other);

  // implements Message ----------------------------------------------

  inline LayerParameter* New() const { return New(NULL); }

  LayerParameter* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LayerParameter& from);
  void MergeFrom(const LayerParameter& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LayerParameter* other);
  void UnsafeMergeFrom(const LayerParameter& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // repeated string bottom = 3;
  int bottom_size() const;
  void clear_bottom();
  static const int kBottomFieldNumber = 3;
  const ::std::string& bottom(int index) const;
  ::std::string* mutable_bottom(int index);
  void set_bottom(int index, const ::std::string& value);
  void set_bottom(int index, const char* value);
  void set_bottom(int index, const char* value, size_t size);
  ::std::string* add_bottom();
  void add_bottom(const ::std::string& value);
  void add_bottom(const char* value);
  void add_bottom(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& bottom() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_bottom();

  // repeated string top = 4;
  int top_size() const;
  void clear_top();
  static const int kTopFieldNumber = 4;
  const ::std::string& top(int index) const;
  ::std::string* mutable_top(int index);
  void set_top(int index, const ::std::string& value);
  void set_top(int index, const char* value);
  void set_top(int index, const char* value, size_t size);
  ::std::string* add_top();
  void add_top(const ::std::string& value);
  void add_top(const char* value);
  void add_top(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& top() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_top();

  // optional .jaguar.Phase phase = 10;
  bool has_phase() const;
  void clear_phase();
  static const int kPhaseFieldNumber = 10;
  ::jaguar::Phase phase() const;
  void set_phase(::jaguar::Phase value);

  // @@protoc_insertion_point(class_scope:jaguar.LayerParameter)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_phase();
  inline void clear_has_phase();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> bottom_;
  ::google::protobuf::RepeatedPtrField< ::std::string> top_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  int phase_;
  friend void  protobuf_InitDefaults_hummingbird_2eproto_impl();
  friend void  protobuf_AddDesc_hummingbird_2eproto_impl();
  friend void protobuf_AssignDesc_hummingbird_2eproto();
  friend void protobuf_ShutdownFile_hummingbird_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<LayerParameter> LayerParameter_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BlobShape

// repeated int64 dim = 1 [packed = true];
inline int BlobShape::dim_size() const {
  return dim_.size();
}
inline void BlobShape::clear_dim() {
  dim_.Clear();
}
inline ::google::protobuf::int64 BlobShape::dim(int index) const {
  // @@protoc_insertion_point(field_get:jaguar.BlobShape.dim)
  return dim_.Get(index);
}
inline void BlobShape::set_dim(int index, ::google::protobuf::int64 value) {
  dim_.Set(index, value);
  // @@protoc_insertion_point(field_set:jaguar.BlobShape.dim)
}
inline void BlobShape::add_dim(::google::protobuf::int64 value) {
  dim_.Add(value);
  // @@protoc_insertion_point(field_add:jaguar.BlobShape.dim)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
BlobShape::dim() const {
  // @@protoc_insertion_point(field_list:jaguar.BlobShape.dim)
  return dim_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
BlobShape::mutable_dim() {
  // @@protoc_insertion_point(field_mutable_list:jaguar.BlobShape.dim)
  return &dim_;
}

inline const BlobShape* BlobShape::internal_default_instance() {
  return &BlobShape_default_instance_.get();
}
// -------------------------------------------------------------------

// Datum

// optional int32 channels = 1;
inline bool Datum::has_channels() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Datum::set_has_channels() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Datum::clear_has_channels() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Datum::clear_channels() {
  channels_ = 0;
  clear_has_channels();
}
inline ::google::protobuf::int32 Datum::channels() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.channels)
  return channels_;
}
inline void Datum::set_channels(::google::protobuf::int32 value) {
  set_has_channels();
  channels_ = value;
  // @@protoc_insertion_point(field_set:jaguar.Datum.channels)
}

// optional int32 height = 2;
inline bool Datum::has_height() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Datum::set_has_height() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Datum::clear_has_height() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Datum::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline ::google::protobuf::int32 Datum::height() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.height)
  return height_;
}
inline void Datum::set_height(::google::protobuf::int32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:jaguar.Datum.height)
}

// optional int32 width = 3;
inline bool Datum::has_width() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Datum::set_has_width() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Datum::clear_has_width() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Datum::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline ::google::protobuf::int32 Datum::width() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.width)
  return width_;
}
inline void Datum::set_width(::google::protobuf::int32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:jaguar.Datum.width)
}

// optional bytes data = 4;
inline bool Datum::has_data() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Datum::set_has_data() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Datum::clear_has_data() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Datum::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
inline const ::std::string& Datum::data() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jaguar.Datum.data)
}
inline void Datum::set_data(const char* value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jaguar.Datum.data)
}
inline void Datum::set_data(const void* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jaguar.Datum.data)
}
inline ::std::string* Datum::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:jaguar.Datum.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Datum::release_data() {
  // @@protoc_insertion_point(field_release:jaguar.Datum.data)
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Datum::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:jaguar.Datum.data)
}

// optional int32 label = 5;
inline bool Datum::has_label() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Datum::set_has_label() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Datum::clear_has_label() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Datum::clear_label() {
  label_ = 0;
  clear_has_label();
}
inline ::google::protobuf::int32 Datum::label() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.label)
  return label_;
}
inline void Datum::set_label(::google::protobuf::int32 value) {
  set_has_label();
  label_ = value;
  // @@protoc_insertion_point(field_set:jaguar.Datum.label)
}

// repeated float float_data = 6;
inline int Datum::float_data_size() const {
  return float_data_.size();
}
inline void Datum::clear_float_data() {
  float_data_.Clear();
}
inline float Datum::float_data(int index) const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.float_data)
  return float_data_.Get(index);
}
inline void Datum::set_float_data(int index, float value) {
  float_data_.Set(index, value);
  // @@protoc_insertion_point(field_set:jaguar.Datum.float_data)
}
inline void Datum::add_float_data(float value) {
  float_data_.Add(value);
  // @@protoc_insertion_point(field_add:jaguar.Datum.float_data)
}
inline const ::google::protobuf::RepeatedField< float >&
Datum::float_data() const {
  // @@protoc_insertion_point(field_list:jaguar.Datum.float_data)
  return float_data_;
}
inline ::google::protobuf::RepeatedField< float >*
Datum::mutable_float_data() {
  // @@protoc_insertion_point(field_mutable_list:jaguar.Datum.float_data)
  return &float_data_;
}

// optional bool encoded = 7 [default = false];
inline bool Datum::has_encoded() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Datum::set_has_encoded() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Datum::clear_has_encoded() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Datum::clear_encoded() {
  encoded_ = false;
  clear_has_encoded();
}
inline bool Datum::encoded() const {
  // @@protoc_insertion_point(field_get:jaguar.Datum.encoded)
  return encoded_;
}
inline void Datum::set_encoded(bool value) {
  set_has_encoded();
  encoded_ = value;
  // @@protoc_insertion_point(field_set:jaguar.Datum.encoded)
}

inline const Datum* Datum::internal_default_instance() {
  return &Datum_default_instance_.get();
}
// -------------------------------------------------------------------

// LayerParameter

// optional string name = 1;
inline bool LayerParameter::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LayerParameter::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LayerParameter::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LayerParameter::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& LayerParameter::name() const {
  // @@protoc_insertion_point(field_get:jaguar.LayerParameter.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LayerParameter::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jaguar.LayerParameter.name)
}
inline void LayerParameter::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jaguar.LayerParameter.name)
}
inline void LayerParameter::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jaguar.LayerParameter.name)
}
inline ::std::string* LayerParameter::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:jaguar.LayerParameter.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LayerParameter::release_name() {
  // @@protoc_insertion_point(field_release:jaguar.LayerParameter.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LayerParameter::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:jaguar.LayerParameter.name)
}

// optional string type = 2;
inline bool LayerParameter::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LayerParameter::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LayerParameter::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LayerParameter::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_type();
}
inline const ::std::string& LayerParameter::type() const {
  // @@protoc_insertion_point(field_get:jaguar.LayerParameter.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LayerParameter::set_type(const ::std::string& value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jaguar.LayerParameter.type)
}
inline void LayerParameter::set_type(const char* value) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jaguar.LayerParameter.type)
}
inline void LayerParameter::set_type(const char* value, size_t size) {
  set_has_type();
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jaguar.LayerParameter.type)
}
inline ::std::string* LayerParameter::mutable_type() {
  set_has_type();
  // @@protoc_insertion_point(field_mutable:jaguar.LayerParameter.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LayerParameter::release_type() {
  // @@protoc_insertion_point(field_release:jaguar.LayerParameter.type)
  clear_has_type();
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LayerParameter::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    set_has_type();
  } else {
    clear_has_type();
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:jaguar.LayerParameter.type)
}

// repeated string bottom = 3;
inline int LayerParameter::bottom_size() const {
  return bottom_.size();
}
inline void LayerParameter::clear_bottom() {
  bottom_.Clear();
}
inline const ::std::string& LayerParameter::bottom(int index) const {
  // @@protoc_insertion_point(field_get:jaguar.LayerParameter.bottom)
  return bottom_.Get(index);
}
inline ::std::string* LayerParameter::mutable_bottom(int index) {
  // @@protoc_insertion_point(field_mutable:jaguar.LayerParameter.bottom)
  return bottom_.Mutable(index);
}
inline void LayerParameter::set_bottom(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:jaguar.LayerParameter.bottom)
  bottom_.Mutable(index)->assign(value);
}
inline void LayerParameter::set_bottom(int index, const char* value) {
  bottom_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:jaguar.LayerParameter.bottom)
}
inline void LayerParameter::set_bottom(int index, const char* value, size_t size) {
  bottom_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:jaguar.LayerParameter.bottom)
}
inline ::std::string* LayerParameter::add_bottom() {
  // @@protoc_insertion_point(field_add_mutable:jaguar.LayerParameter.bottom)
  return bottom_.Add();
}
inline void LayerParameter::add_bottom(const ::std::string& value) {
  bottom_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:jaguar.LayerParameter.bottom)
}
inline void LayerParameter::add_bottom(const char* value) {
  bottom_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:jaguar.LayerParameter.bottom)
}
inline void LayerParameter::add_bottom(const char* value, size_t size) {
  bottom_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:jaguar.LayerParameter.bottom)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LayerParameter::bottom() const {
  // @@protoc_insertion_point(field_list:jaguar.LayerParameter.bottom)
  return bottom_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LayerParameter::mutable_bottom() {
  // @@protoc_insertion_point(field_mutable_list:jaguar.LayerParameter.bottom)
  return &bottom_;
}

// repeated string top = 4;
inline int LayerParameter::top_size() const {
  return top_.size();
}
inline void LayerParameter::clear_top() {
  top_.Clear();
}
inline const ::std::string& LayerParameter::top(int index) const {
  // @@protoc_insertion_point(field_get:jaguar.LayerParameter.top)
  return top_.Get(index);
}
inline ::std::string* LayerParameter::mutable_top(int index) {
  // @@protoc_insertion_point(field_mutable:jaguar.LayerParameter.top)
  return top_.Mutable(index);
}
inline void LayerParameter::set_top(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:jaguar.LayerParameter.top)
  top_.Mutable(index)->assign(value);
}
inline void LayerParameter::set_top(int index, const char* value) {
  top_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:jaguar.LayerParameter.top)
}
inline void LayerParameter::set_top(int index, const char* value, size_t size) {
  top_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:jaguar.LayerParameter.top)
}
inline ::std::string* LayerParameter::add_top() {
  // @@protoc_insertion_point(field_add_mutable:jaguar.LayerParameter.top)
  return top_.Add();
}
inline void LayerParameter::add_top(const ::std::string& value) {
  top_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:jaguar.LayerParameter.top)
}
inline void LayerParameter::add_top(const char* value) {
  top_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:jaguar.LayerParameter.top)
}
inline void LayerParameter::add_top(const char* value, size_t size) {
  top_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:jaguar.LayerParameter.top)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LayerParameter::top() const {
  // @@protoc_insertion_point(field_list:jaguar.LayerParameter.top)
  return top_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LayerParameter::mutable_top() {
  // @@protoc_insertion_point(field_mutable_list:jaguar.LayerParameter.top)
  return &top_;
}

// optional .jaguar.Phase phase = 10;
inline bool LayerParameter::has_phase() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LayerParameter::set_has_phase() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LayerParameter::clear_has_phase() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LayerParameter::clear_phase() {
  phase_ = 0;
  clear_has_phase();
}
inline ::jaguar::Phase LayerParameter::phase() const {
  // @@protoc_insertion_point(field_get:jaguar.LayerParameter.phase)
  return static_cast< ::jaguar::Phase >(phase_);
}
inline void LayerParameter::set_phase(::jaguar::Phase value) {
  assert(::jaguar::Phase_IsValid(value));
  set_has_phase();
  phase_ = value;
  // @@protoc_insertion_point(field_set:jaguar.LayerParameter.phase)
}

inline const LayerParameter* LayerParameter::internal_default_instance() {
  return &LayerParameter_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace jaguar

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::jaguar::Phase> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::jaguar::Phase>() {
  return ::jaguar::Phase_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hummingbird_2eproto__INCLUDED
// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_UUID_MOD_PROTO_H_
#define FLATBUFFERS_GENERATED_UUID_MOD_PROTO_H_

#include "flatbuffers/flatbuffers.h"

#include "uuid_addition.h"

namespace Mod {
namespace proto {

struct UUID;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) UUID FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t v_[16];

 public:
  UUID() {
    memset(static_cast<void *>(this), 0, sizeof(UUID));
  }
  const flatbuffers::Array<uint8_t, 16> *v() const {
    return reinterpret_cast<const flatbuffers::Array<uint8_t, 16> *>(v_);
  }
};
FLATBUFFERS_STRUCT_END(UUID, 16);

}  // namespace proto
}  // namespace Mod

#endif  // FLATBUFFERS_GENERATED_UUID_MOD_PROTO_H_
#ifndef LEGOPATHACTOR_H
#define LEGOPATHACTOR_H

#include "legoactor.h"
#include "mxtypes.h"

// VTABLE 0x100d6e28
// SIZE 0x154 (from inlined construction at 0x1000a346)
class LegoPathActor : public LegoActor
{
public:
  LegoPathActor();

  virtual ~LegoPathActor() override;

  // OFFSET: LEGO1 0x1000c430
  inline const char *ClassName() const override // vtable+0xc
  {
    // 0x100f0114
    return "LegoPathActor";
  }

  // OFFSET: LEGO1 0x1000c440
  inline MxBool IsA(const char *name) const override // vtable+0x10
  {
    return !strcmp(name, LegoPathActor::ClassName()) || LegoActor::IsA(name);
  }

  // TODO: the types. Pizza needs this as public:
  undefined unk78[0xc4];
  MxS32 m_unk13c;
  undefined unk140[0x14];
};

#endif // LEGOPATHACTOR_H

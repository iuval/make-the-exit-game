#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t29;
struct t29_marshaled;
struct t33;
struct t14;
#include "t385.h"
#include "t77.h"

 void m2566 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t29 * m2567 (t14 * __this, t29 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2568 (t14 * __this, t29 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m65 (t14 * __this, t29 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2569 (t14 * __this, t29 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1843 (t14 * __this, t29 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t33* m1413 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1932 (t29 * __this, t33* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1799 (t29 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t33* m52 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m49 (t29 * __this, t14 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m51 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2570 (t14 * __this, t29 * p0, t29 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2571 (t14 * __this, t29 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2572 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t77 m2573 (t29 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2574 (t14 * __this, t14 * p0, t33* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m46 (t14 * __this, t29 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m107 (t14 * __this, t29 * p0, t29 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m108 (t14 * __this, t29 * p0, t29 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t29_marshal(const t29& unmarshaled, t29_marshaled& marshaled);
void t29_marshal_back(const t29_marshaled& marshaled, t29& unmarshaled);
void t29_marshal_cleanup(t29_marshaled& marshaled);

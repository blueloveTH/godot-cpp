#pragma once

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/binder_common.hpp>

namespace godot {

class pkpy : public Object {
    GDCLASS(pkpy, Object);
protected:
    static void _bind_methods();
public:

    static void _delete(std::intptr_t p);
    static std::intptr_t _new_repl(std::intptr_t vm);
    static bool _repl_input(std::intptr_t r, String line);
    static std::intptr_t _new_vm(bool use_stdio);
    static void _vm_add_module(std::intptr_t vm, String name, String source);
    static void _vm_bind_None__(std::intptr_t vm, String mod, String name, __f_None__ f);
    static void _vm_bind_None__bool(std::intptr_t vm, String mod, String name, __f_None__bool f);
    static void _vm_bind_None__bool_bool(std::intptr_t vm, String mod, String name, __f_None__bool_bool f);
    static void _vm_bind_None__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_None__bool_bool_bool f);
    static void _vm_bind_None__bool_float(std::intptr_t vm, String mod, String name, __f_None__bool_float f);
    static void _vm_bind_None__bool_int(std::intptr_t vm, String mod, String name, __f_None__bool_int f);
    static void _vm_bind_None__bool_str(std::intptr_t vm, String mod, String name, __f_None__bool_str f);
    static void _vm_bind_None__float(std::intptr_t vm, String mod, String name, __f_None__float f);
    static void _vm_bind_None__float_bool(std::intptr_t vm, String mod, String name, __f_None__float_bool f);
    static void _vm_bind_None__float_float(std::intptr_t vm, String mod, String name, __f_None__float_float f);
    static void _vm_bind_None__float_float_float(std::intptr_t vm, String mod, String name, __f_None__float_float_float f);
    static void _vm_bind_None__float_int(std::intptr_t vm, String mod, String name, __f_None__float_int f);
    static void _vm_bind_None__float_str(std::intptr_t vm, String mod, String name, __f_None__float_str f);
    static void _vm_bind_None__int(std::intptr_t vm, String mod, String name, __f_None__int f);
    static void _vm_bind_None__int_bool(std::intptr_t vm, String mod, String name, __f_None__int_bool f);
    static void _vm_bind_None__int_float(std::intptr_t vm, String mod, String name, __f_None__int_float f);
    static void _vm_bind_None__int_int(std::intptr_t vm, String mod, String name, __f_None__int_int f);
    static void _vm_bind_None__int_int_int(std::intptr_t vm, String mod, String name, __f_None__int_int_int f);
    static void _vm_bind_None__int_str(std::intptr_t vm, String mod, String name, __f_None__int_str f);
    static void _vm_bind_None__str(std::intptr_t vm, String mod, String name, __f_None__str f);
    static void _vm_bind_None__str_bool(std::intptr_t vm, String mod, String name, __f_None__str_bool f);
    static void _vm_bind_None__str_float(std::intptr_t vm, String mod, String name, __f_None__str_float f);
    static void _vm_bind_None__str_int(std::intptr_t vm, String mod, String name, __f_None__str_int f);
    static void _vm_bind_None__str_str(std::intptr_t vm, String mod, String name, __f_None__str_str f);
    static void _vm_bind_None__str_str_str(std::intptr_t vm, String mod, String name, __f_None__str_str_str f);
    static void _vm_bind_bool__(std::intptr_t vm, String mod, String name, __f_bool__ f);
    static void _vm_bind_bool__bool(std::intptr_t vm, String mod, String name, __f_bool__bool f);
    static void _vm_bind_bool__bool_bool(std::intptr_t vm, String mod, String name, __f_bool__bool_bool f);
    static void _vm_bind_bool__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_bool__bool_bool_bool f);
    static void _vm_bind_bool__bool_float(std::intptr_t vm, String mod, String name, __f_bool__bool_float f);
    static void _vm_bind_bool__bool_int(std::intptr_t vm, String mod, String name, __f_bool__bool_int f);
    static void _vm_bind_bool__bool_str(std::intptr_t vm, String mod, String name, __f_bool__bool_str f);
    static void _vm_bind_bool__float(std::intptr_t vm, String mod, String name, __f_bool__float f);
    static void _vm_bind_bool__float_bool(std::intptr_t vm, String mod, String name, __f_bool__float_bool f);
    static void _vm_bind_bool__float_float(std::intptr_t vm, String mod, String name, __f_bool__float_float f);
    static void _vm_bind_bool__float_float_float(std::intptr_t vm, String mod, String name, __f_bool__float_float_float f);
    static void _vm_bind_bool__float_int(std::intptr_t vm, String mod, String name, __f_bool__float_int f);
    static void _vm_bind_bool__float_str(std::intptr_t vm, String mod, String name, __f_bool__float_str f);
    static void _vm_bind_bool__int(std::intptr_t vm, String mod, String name, __f_bool__int f);
    static void _vm_bind_bool__int_bool(std::intptr_t vm, String mod, String name, __f_bool__int_bool f);
    static void _vm_bind_bool__int_float(std::intptr_t vm, String mod, String name, __f_bool__int_float f);
    static void _vm_bind_bool__int_int(std::intptr_t vm, String mod, String name, __f_bool__int_int f);
    static void _vm_bind_bool__int_int_int(std::intptr_t vm, String mod, String name, __f_bool__int_int_int f);
    static void _vm_bind_bool__int_str(std::intptr_t vm, String mod, String name, __f_bool__int_str f);
    static void _vm_bind_bool__str(std::intptr_t vm, String mod, String name, __f_bool__str f);
    static void _vm_bind_bool__str_bool(std::intptr_t vm, String mod, String name, __f_bool__str_bool f);
    static void _vm_bind_bool__str_float(std::intptr_t vm, String mod, String name, __f_bool__str_float f);
    static void _vm_bind_bool__str_int(std::intptr_t vm, String mod, String name, __f_bool__str_int f);
    static void _vm_bind_bool__str_str(std::intptr_t vm, String mod, String name, __f_bool__str_str f);
    static void _vm_bind_bool__str_str_str(std::intptr_t vm, String mod, String name, __f_bool__str_str_str f);
    static void _vm_bind_float__(std::intptr_t vm, String mod, String name, __f_float__ f);
    static void _vm_bind_float__bool(std::intptr_t vm, String mod, String name, __f_float__bool f);
    static void _vm_bind_float__bool_bool(std::intptr_t vm, String mod, String name, __f_float__bool_bool f);
    static void _vm_bind_float__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_float__bool_bool_bool f);
    static void _vm_bind_float__bool_float(std::intptr_t vm, String mod, String name, __f_float__bool_float f);
    static void _vm_bind_float__bool_int(std::intptr_t vm, String mod, String name, __f_float__bool_int f);
    static void _vm_bind_float__bool_str(std::intptr_t vm, String mod, String name, __f_float__bool_str f);
    static void _vm_bind_float__float(std::intptr_t vm, String mod, String name, __f_float__float f);
    static void _vm_bind_float__float_bool(std::intptr_t vm, String mod, String name, __f_float__float_bool f);
    static void _vm_bind_float__float_float(std::intptr_t vm, String mod, String name, __f_float__float_float f);
    static void _vm_bind_float__float_float_float(std::intptr_t vm, String mod, String name, __f_float__float_float_float f);
    static void _vm_bind_float__float_int(std::intptr_t vm, String mod, String name, __f_float__float_int f);
    static void _vm_bind_float__float_str(std::intptr_t vm, String mod, String name, __f_float__float_str f);
    static void _vm_bind_float__int(std::intptr_t vm, String mod, String name, __f_float__int f);
    static void _vm_bind_float__int_bool(std::intptr_t vm, String mod, String name, __f_float__int_bool f);
    static void _vm_bind_float__int_float(std::intptr_t vm, String mod, String name, __f_float__int_float f);
    static void _vm_bind_float__int_int(std::intptr_t vm, String mod, String name, __f_float__int_int f);
    static void _vm_bind_float__int_int_int(std::intptr_t vm, String mod, String name, __f_float__int_int_int f);
    static void _vm_bind_float__int_str(std::intptr_t vm, String mod, String name, __f_float__int_str f);
    static void _vm_bind_float__str(std::intptr_t vm, String mod, String name, __f_float__str f);
    static void _vm_bind_float__str_bool(std::intptr_t vm, String mod, String name, __f_float__str_bool f);
    static void _vm_bind_float__str_float(std::intptr_t vm, String mod, String name, __f_float__str_float f);
    static void _vm_bind_float__str_int(std::intptr_t vm, String mod, String name, __f_float__str_int f);
    static void _vm_bind_float__str_str(std::intptr_t vm, String mod, String name, __f_float__str_str f);
    static void _vm_bind_float__str_str_str(std::intptr_t vm, String mod, String name, __f_float__str_str_str f);
    static void _vm_bind_int__(std::intptr_t vm, String mod, String name, __f_int__ f);
    static void _vm_bind_int__bool(std::intptr_t vm, String mod, String name, __f_int__bool f);
    static void _vm_bind_int__bool_bool(std::intptr_t vm, String mod, String name, __f_int__bool_bool f);
    static void _vm_bind_int__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_int__bool_bool_bool f);
    static void _vm_bind_int__bool_float(std::intptr_t vm, String mod, String name, __f_int__bool_float f);
    static void _vm_bind_int__bool_int(std::intptr_t vm, String mod, String name, __f_int__bool_int f);
    static void _vm_bind_int__bool_str(std::intptr_t vm, String mod, String name, __f_int__bool_str f);
    static void _vm_bind_int__float(std::intptr_t vm, String mod, String name, __f_int__float f);
    static void _vm_bind_int__float_bool(std::intptr_t vm, String mod, String name, __f_int__float_bool f);
    static void _vm_bind_int__float_float(std::intptr_t vm, String mod, String name, __f_int__float_float f);
    static void _vm_bind_int__float_float_float(std::intptr_t vm, String mod, String name, __f_int__float_float_float f);
    static void _vm_bind_int__float_int(std::intptr_t vm, String mod, String name, __f_int__float_int f);
    static void _vm_bind_int__float_str(std::intptr_t vm, String mod, String name, __f_int__float_str f);
    static void _vm_bind_int__int(std::intptr_t vm, String mod, String name, __f_int__int f);
    static void _vm_bind_int__int_bool(std::intptr_t vm, String mod, String name, __f_int__int_bool f);
    static void _vm_bind_int__int_float(std::intptr_t vm, String mod, String name, __f_int__int_float f);
    static void _vm_bind_int__int_int(std::intptr_t vm, String mod, String name, __f_int__int_int f);
    static void _vm_bind_int__int_int_int(std::intptr_t vm, String mod, String name, __f_int__int_int_int f);
    static void _vm_bind_int__int_str(std::intptr_t vm, String mod, String name, __f_int__int_str f);
    static void _vm_bind_int__str(std::intptr_t vm, String mod, String name, __f_int__str f);
    static void _vm_bind_int__str_bool(std::intptr_t vm, String mod, String name, __f_int__str_bool f);
    static void _vm_bind_int__str_float(std::intptr_t vm, String mod, String name, __f_int__str_float f);
    static void _vm_bind_int__str_int(std::intptr_t vm, String mod, String name, __f_int__str_int f);
    static void _vm_bind_int__str_str(std::intptr_t vm, String mod, String name, __f_int__str_str f);
    static void _vm_bind_int__str_str_str(std::intptr_t vm, String mod, String name, __f_int__str_str_str f);
    static void _vm_bind_str__(std::intptr_t vm, String mod, String name, __f_str__ f);
    static void _vm_bind_str__bool(std::intptr_t vm, String mod, String name, __f_str__bool f);
    static void _vm_bind_str__bool_bool(std::intptr_t vm, String mod, String name, __f_str__bool_bool f);
    static void _vm_bind_str__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_str__bool_bool_bool f);
    static void _vm_bind_str__bool_float(std::intptr_t vm, String mod, String name, __f_str__bool_float f);
    static void _vm_bind_str__bool_int(std::intptr_t vm, String mod, String name, __f_str__bool_int f);
    static void _vm_bind_str__bool_str(std::intptr_t vm, String mod, String name, __f_str__bool_str f);
    static void _vm_bind_str__float(std::intptr_t vm, String mod, String name, __f_str__float f);
    static void _vm_bind_str__float_bool(std::intptr_t vm, String mod, String name, __f_str__float_bool f);
    static void _vm_bind_str__float_float(std::intptr_t vm, String mod, String name, __f_str__float_float f);
    static void _vm_bind_str__float_float_float(std::intptr_t vm, String mod, String name, __f_str__float_float_float f);
    static void _vm_bind_str__float_int(std::intptr_t vm, String mod, String name, __f_str__float_int f);
    static void _vm_bind_str__float_str(std::intptr_t vm, String mod, String name, __f_str__float_str f);
    static void _vm_bind_str__int(std::intptr_t vm, String mod, String name, __f_str__int f);
    static void _vm_bind_str__int_bool(std::intptr_t vm, String mod, String name, __f_str__int_bool f);
    static void _vm_bind_str__int_float(std::intptr_t vm, String mod, String name, __f_str__int_float f);
    static void _vm_bind_str__int_int(std::intptr_t vm, String mod, String name, __f_str__int_int f);
    static void _vm_bind_str__int_int_int(std::intptr_t vm, String mod, String name, __f_str__int_int_int f);
    static void _vm_bind_str__int_str(std::intptr_t vm, String mod, String name, __f_str__int_str f);
    static void _vm_bind_str__str(std::intptr_t vm, String mod, String name, __f_str__str f);
    static void _vm_bind_str__str_bool(std::intptr_t vm, String mod, String name, __f_str__str_bool f);
    static void _vm_bind_str__str_float(std::intptr_t vm, String mod, String name, __f_str__str_float f);
    static void _vm_bind_str__str_int(std::intptr_t vm, String mod, String name, __f_str__str_int f);
    static void _vm_bind_str__str_str(std::intptr_t vm, String mod, String name, __f_str__str_str f);
    static void _vm_bind_str__str_str_str(std::intptr_t vm, String mod, String name, __f_str__str_str_str f);
    static Variant _vm_eval(std::intptr_t vm, String source);
    static void _vm_exec(std::intptr_t vm, String source);
    static Variant _vm_get_global(std::intptr_t vm, String name);
    static Variant _vm_read_output(std::intptr_t vm);
};

} // namespace Godot

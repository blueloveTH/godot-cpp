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
    static Variant _vm_eval(std::intptr_t vm, String source);
    static void _vm_exec(std::intptr_t vm, String source);
    static Variant _vm_get_global(std::intptr_t vm, String name);
    static Variant _vm_read_output(std::intptr_t vm);
};

} // namespace Godot

#pragma once

#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/viewport.hpp>

#include <godot_cpp/core/binder_common.hpp>

namespace godot {

class pkpy : public RefCounted {
    GDCLASS(pkpy, RefCounted);
protected:
    static void _bind_methods();
public:

    static void _delete(std::intptr_t p);
    static std::intptr_t _new_repl(std::intptr_t vm);
    static int _repl_input(std::intptr_t r, String line);
    static std::intptr_t _new_tvm(bool use_stdio);
    static bool _tvm_exec_async(std::intptr_t vm, String source);
    static int _tvm_get_state(std::intptr_t vm);
    static Variant _tvm_read_jsonrpc_request(std::intptr_t vm);
    static void _tvm_reset_state(std::intptr_t vm);
    static void _tvm_terminate(std::intptr_t vm);
    static void _tvm_write_jsonrpc_response(std::intptr_t vm, String value);
    static std::intptr_t _new_vm(bool use_stdio);
    static bool _vm_add_module(std::intptr_t vm, String name, String source);
    static Variant _vm_eval(std::intptr_t vm, String source);
    static bool _vm_exec(std::intptr_t vm, String source);
    static Variant _vm_get_global(std::intptr_t vm, String name);
    static Variant _vm_read_output(std::intptr_t vm);
};

} // namespace Godot

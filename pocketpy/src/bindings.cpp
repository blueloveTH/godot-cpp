
#include <cstdint>
#include "pocketpy.h"
#include "bindings.h"

namespace godot {
void pkpy::_delete(std::intptr_t p){
    pkpy_delete(reinterpret_cast<void*>(p));
}

void pkpy::_setup_callbacks(f_int_t f_int, f_float_t f_float, f_bool_t f_bool, f_str_t f_str, f_None_t f_None){
    pkpy_setup_callbacks(f_int, f_float, f_bool, f_str, f_None);
}

std::intptr_t pkpy::_new_repl(std::intptr_t vm){
    REPL* ret = pkpy_new_repl(reinterpret_cast<VM*>(vm));
    return reinterpret_cast<std::intptr_t>(ret);
}

bool pkpy::_repl_input(std::intptr_t r, String line){
    bool ret = pkpy_repl_input(reinterpret_cast<REPL*>(r), line.utf8().get_data());
    return ret;
}

std::intptr_t pkpy::_new_vm(bool use_stdio){
    VM* ret = pkpy_new_vm(use_stdio);
    return reinterpret_cast<std::intptr_t>(ret);
}

void pkpy::_vm_add_module(std::intptr_t vm, String name, String source){
    pkpy_vm_add_module(reinterpret_cast<VM*>(vm), name.utf8().get_data(), source.utf8().get_data());
}

Variant pkpy::_vm_eval(std::intptr_t vm, String source){
    char* ret = pkpy_vm_eval(reinterpret_cast<VM*>(vm), source.utf8().get_data());
    if (ret == nullptr) return Variant();
    String s = String::utf8(ret);
    delete ret;
    return s;
}

void pkpy::_vm_exec(std::intptr_t vm, String source){
    pkpy_vm_exec(reinterpret_cast<VM*>(vm), source.utf8().get_data());
}

Variant pkpy::_vm_get_global(std::intptr_t vm, String name){
    char* ret = pkpy_vm_get_global(reinterpret_cast<VM*>(vm), name.utf8().get_data());
    if (ret == nullptr) return Variant();
    String s = String::utf8(ret);
    delete ret;
    return s;
}

Variant pkpy::_vm_read_output(std::intptr_t vm){
    char* ret = pkpy_vm_read_output(reinterpret_cast<VM*>(vm));
    if (ret == nullptr) return Variant();
    String s = String::utf8(ret);
    delete ret;
    return s;
}

void pkpy::_bind_methods(){
    ClassDB::bind_static_method("pkpy", D_METHOD("delete", "p"), &pkpy::_delete);
    ClassDB::bind_static_method("pkpy", D_METHOD("setup_callbacks", "f_int", "f_float", "f_bool", "f_str", "f_None"), &pkpy::_setup_callbacks);
    ClassDB::bind_static_method("pkpy", D_METHOD("new_repl", "vm"), &pkpy::_new_repl);
    ClassDB::bind_static_method("pkpy", D_METHOD("repl_input", "r", "line"), &pkpy::_repl_input);
    ClassDB::bind_static_method("pkpy", D_METHOD("new_vm", "use_stdio"), &pkpy::_new_vm);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_add_module", "vm", "name", "source"), &pkpy::_vm_add_module);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_eval", "vm", "source"), &pkpy::_vm_eval);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_exec", "vm", "source"), &pkpy::_vm_exec);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_get_global", "vm", "name"), &pkpy::_vm_get_global);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_read_output", "vm"), &pkpy::_vm_read_output);
}


}
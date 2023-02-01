
#include <cstdint>
#include "pocketpy.h"
#include "bindings.h"

namespace godot {
void pkpy::_delete(std::intptr_t p){
    pkpy_delete(reinterpret_cast<void*>(p));
}

std::intptr_t pkpy::_new_repl(std::intptr_t vm){
    REPL* ret = pkpy_new_repl(reinterpret_cast<VM*>(vm));
    return reinterpret_cast<std::intptr_t>(ret);
}

int pkpy::_repl_input(std::intptr_t r, String line){
    int ret = pkpy_repl_input(reinterpret_cast<REPL*>(r), line.utf8().get_data());
    return ret;
}

std::intptr_t pkpy::_new_vm(bool use_stdio){
    VM* ret = pkpy_new_vm(use_stdio);
    return reinterpret_cast<std::intptr_t>(ret);
}

void pkpy::_vm_add_module(std::intptr_t vm, String name, String source){
    pkpy_vm_add_module(reinterpret_cast<VM*>(vm), name.utf8().get_data(), source.utf8().get_data());
}

void pkpy::_vm_bind__f_None__(std::intptr_t vm, String mod, String name, __f_None__ f){
    pkpy_vm_bind__f_None__(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool(std::intptr_t vm, String mod, String name, __f_None__bool f){
    pkpy_vm_bind__f_None__bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool_bool(std::intptr_t vm, String mod, String name, __f_None__bool_bool f){
    pkpy_vm_bind__f_None__bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_None__bool_bool_bool f){
    pkpy_vm_bind__f_None__bool_bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool_float(std::intptr_t vm, String mod, String name, __f_None__bool_float f){
    pkpy_vm_bind__f_None__bool_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool_int(std::intptr_t vm, String mod, String name, __f_None__bool_int f){
    pkpy_vm_bind__f_None__bool_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__bool_str(std::intptr_t vm, String mod, String name, __f_None__bool_str f){
    pkpy_vm_bind__f_None__bool_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float(std::intptr_t vm, String mod, String name, __f_None__float f){
    pkpy_vm_bind__f_None__float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float_bool(std::intptr_t vm, String mod, String name, __f_None__float_bool f){
    pkpy_vm_bind__f_None__float_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float_float(std::intptr_t vm, String mod, String name, __f_None__float_float f){
    pkpy_vm_bind__f_None__float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float_float_float(std::intptr_t vm, String mod, String name, __f_None__float_float_float f){
    pkpy_vm_bind__f_None__float_float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float_int(std::intptr_t vm, String mod, String name, __f_None__float_int f){
    pkpy_vm_bind__f_None__float_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__float_str(std::intptr_t vm, String mod, String name, __f_None__float_str f){
    pkpy_vm_bind__f_None__float_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int(std::intptr_t vm, String mod, String name, __f_None__int f){
    pkpy_vm_bind__f_None__int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int_bool(std::intptr_t vm, String mod, String name, __f_None__int_bool f){
    pkpy_vm_bind__f_None__int_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int_float(std::intptr_t vm, String mod, String name, __f_None__int_float f){
    pkpy_vm_bind__f_None__int_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int_int(std::intptr_t vm, String mod, String name, __f_None__int_int f){
    pkpy_vm_bind__f_None__int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int_int_int(std::intptr_t vm, String mod, String name, __f_None__int_int_int f){
    pkpy_vm_bind__f_None__int_int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__int_str(std::intptr_t vm, String mod, String name, __f_None__int_str f){
    pkpy_vm_bind__f_None__int_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str(std::intptr_t vm, String mod, String name, __f_None__str f){
    pkpy_vm_bind__f_None__str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str_bool(std::intptr_t vm, String mod, String name, __f_None__str_bool f){
    pkpy_vm_bind__f_None__str_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str_float(std::intptr_t vm, String mod, String name, __f_None__str_float f){
    pkpy_vm_bind__f_None__str_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str_int(std::intptr_t vm, String mod, String name, __f_None__str_int f){
    pkpy_vm_bind__f_None__str_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str_str(std::intptr_t vm, String mod, String name, __f_None__str_str f){
    pkpy_vm_bind__f_None__str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_None__str_str_str(std::intptr_t vm, String mod, String name, __f_None__str_str_str f){
    pkpy_vm_bind__f_None__str_str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__(std::intptr_t vm, String mod, String name, __f_bool__ f){
    pkpy_vm_bind__f_bool__(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool(std::intptr_t vm, String mod, String name, __f_bool__bool f){
    pkpy_vm_bind__f_bool__bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool_bool(std::intptr_t vm, String mod, String name, __f_bool__bool_bool f){
    pkpy_vm_bind__f_bool__bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_bool__bool_bool_bool f){
    pkpy_vm_bind__f_bool__bool_bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool_float(std::intptr_t vm, String mod, String name, __f_bool__bool_float f){
    pkpy_vm_bind__f_bool__bool_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool_int(std::intptr_t vm, String mod, String name, __f_bool__bool_int f){
    pkpy_vm_bind__f_bool__bool_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__bool_str(std::intptr_t vm, String mod, String name, __f_bool__bool_str f){
    pkpy_vm_bind__f_bool__bool_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float(std::intptr_t vm, String mod, String name, __f_bool__float f){
    pkpy_vm_bind__f_bool__float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float_bool(std::intptr_t vm, String mod, String name, __f_bool__float_bool f){
    pkpy_vm_bind__f_bool__float_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float_float(std::intptr_t vm, String mod, String name, __f_bool__float_float f){
    pkpy_vm_bind__f_bool__float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float_float_float(std::intptr_t vm, String mod, String name, __f_bool__float_float_float f){
    pkpy_vm_bind__f_bool__float_float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float_int(std::intptr_t vm, String mod, String name, __f_bool__float_int f){
    pkpy_vm_bind__f_bool__float_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__float_str(std::intptr_t vm, String mod, String name, __f_bool__float_str f){
    pkpy_vm_bind__f_bool__float_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int(std::intptr_t vm, String mod, String name, __f_bool__int f){
    pkpy_vm_bind__f_bool__int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int_bool(std::intptr_t vm, String mod, String name, __f_bool__int_bool f){
    pkpy_vm_bind__f_bool__int_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int_float(std::intptr_t vm, String mod, String name, __f_bool__int_float f){
    pkpy_vm_bind__f_bool__int_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int_int(std::intptr_t vm, String mod, String name, __f_bool__int_int f){
    pkpy_vm_bind__f_bool__int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int_int_int(std::intptr_t vm, String mod, String name, __f_bool__int_int_int f){
    pkpy_vm_bind__f_bool__int_int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__int_str(std::intptr_t vm, String mod, String name, __f_bool__int_str f){
    pkpy_vm_bind__f_bool__int_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str(std::intptr_t vm, String mod, String name, __f_bool__str f){
    pkpy_vm_bind__f_bool__str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str_bool(std::intptr_t vm, String mod, String name, __f_bool__str_bool f){
    pkpy_vm_bind__f_bool__str_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str_float(std::intptr_t vm, String mod, String name, __f_bool__str_float f){
    pkpy_vm_bind__f_bool__str_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str_int(std::intptr_t vm, String mod, String name, __f_bool__str_int f){
    pkpy_vm_bind__f_bool__str_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str_str(std::intptr_t vm, String mod, String name, __f_bool__str_str f){
    pkpy_vm_bind__f_bool__str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_bool__str_str_str(std::intptr_t vm, String mod, String name, __f_bool__str_str_str f){
    pkpy_vm_bind__f_bool__str_str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__(std::intptr_t vm, String mod, String name, __f_float__ f){
    pkpy_vm_bind__f_float__(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool(std::intptr_t vm, String mod, String name, __f_float__bool f){
    pkpy_vm_bind__f_float__bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool_bool(std::intptr_t vm, String mod, String name, __f_float__bool_bool f){
    pkpy_vm_bind__f_float__bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_float__bool_bool_bool f){
    pkpy_vm_bind__f_float__bool_bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool_float(std::intptr_t vm, String mod, String name, __f_float__bool_float f){
    pkpy_vm_bind__f_float__bool_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool_int(std::intptr_t vm, String mod, String name, __f_float__bool_int f){
    pkpy_vm_bind__f_float__bool_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__bool_str(std::intptr_t vm, String mod, String name, __f_float__bool_str f){
    pkpy_vm_bind__f_float__bool_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float(std::intptr_t vm, String mod, String name, __f_float__float f){
    pkpy_vm_bind__f_float__float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float_bool(std::intptr_t vm, String mod, String name, __f_float__float_bool f){
    pkpy_vm_bind__f_float__float_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float_float(std::intptr_t vm, String mod, String name, __f_float__float_float f){
    pkpy_vm_bind__f_float__float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float_float_float(std::intptr_t vm, String mod, String name, __f_float__float_float_float f){
    pkpy_vm_bind__f_float__float_float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float_int(std::intptr_t vm, String mod, String name, __f_float__float_int f){
    pkpy_vm_bind__f_float__float_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__float_str(std::intptr_t vm, String mod, String name, __f_float__float_str f){
    pkpy_vm_bind__f_float__float_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int(std::intptr_t vm, String mod, String name, __f_float__int f){
    pkpy_vm_bind__f_float__int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int_bool(std::intptr_t vm, String mod, String name, __f_float__int_bool f){
    pkpy_vm_bind__f_float__int_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int_float(std::intptr_t vm, String mod, String name, __f_float__int_float f){
    pkpy_vm_bind__f_float__int_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int_int(std::intptr_t vm, String mod, String name, __f_float__int_int f){
    pkpy_vm_bind__f_float__int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int_int_int(std::intptr_t vm, String mod, String name, __f_float__int_int_int f){
    pkpy_vm_bind__f_float__int_int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__int_str(std::intptr_t vm, String mod, String name, __f_float__int_str f){
    pkpy_vm_bind__f_float__int_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str(std::intptr_t vm, String mod, String name, __f_float__str f){
    pkpy_vm_bind__f_float__str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str_bool(std::intptr_t vm, String mod, String name, __f_float__str_bool f){
    pkpy_vm_bind__f_float__str_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str_float(std::intptr_t vm, String mod, String name, __f_float__str_float f){
    pkpy_vm_bind__f_float__str_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str_int(std::intptr_t vm, String mod, String name, __f_float__str_int f){
    pkpy_vm_bind__f_float__str_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str_str(std::intptr_t vm, String mod, String name, __f_float__str_str f){
    pkpy_vm_bind__f_float__str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_float__str_str_str(std::intptr_t vm, String mod, String name, __f_float__str_str_str f){
    pkpy_vm_bind__f_float__str_str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__(std::intptr_t vm, String mod, String name, __f_int__ f){
    pkpy_vm_bind__f_int__(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool(std::intptr_t vm, String mod, String name, __f_int__bool f){
    pkpy_vm_bind__f_int__bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool_bool(std::intptr_t vm, String mod, String name, __f_int__bool_bool f){
    pkpy_vm_bind__f_int__bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_int__bool_bool_bool f){
    pkpy_vm_bind__f_int__bool_bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool_float(std::intptr_t vm, String mod, String name, __f_int__bool_float f){
    pkpy_vm_bind__f_int__bool_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool_int(std::intptr_t vm, String mod, String name, __f_int__bool_int f){
    pkpy_vm_bind__f_int__bool_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__bool_str(std::intptr_t vm, String mod, String name, __f_int__bool_str f){
    pkpy_vm_bind__f_int__bool_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float(std::intptr_t vm, String mod, String name, __f_int__float f){
    pkpy_vm_bind__f_int__float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float_bool(std::intptr_t vm, String mod, String name, __f_int__float_bool f){
    pkpy_vm_bind__f_int__float_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float_float(std::intptr_t vm, String mod, String name, __f_int__float_float f){
    pkpy_vm_bind__f_int__float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float_float_float(std::intptr_t vm, String mod, String name, __f_int__float_float_float f){
    pkpy_vm_bind__f_int__float_float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float_int(std::intptr_t vm, String mod, String name, __f_int__float_int f){
    pkpy_vm_bind__f_int__float_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__float_str(std::intptr_t vm, String mod, String name, __f_int__float_str f){
    pkpy_vm_bind__f_int__float_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int(std::intptr_t vm, String mod, String name, __f_int__int f){
    pkpy_vm_bind__f_int__int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int_bool(std::intptr_t vm, String mod, String name, __f_int__int_bool f){
    pkpy_vm_bind__f_int__int_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int_float(std::intptr_t vm, String mod, String name, __f_int__int_float f){
    pkpy_vm_bind__f_int__int_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int_int(std::intptr_t vm, String mod, String name, __f_int__int_int f){
    pkpy_vm_bind__f_int__int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int_int_int(std::intptr_t vm, String mod, String name, __f_int__int_int_int f){
    pkpy_vm_bind__f_int__int_int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__int_str(std::intptr_t vm, String mod, String name, __f_int__int_str f){
    pkpy_vm_bind__f_int__int_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str(std::intptr_t vm, String mod, String name, __f_int__str f){
    pkpy_vm_bind__f_int__str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str_bool(std::intptr_t vm, String mod, String name, __f_int__str_bool f){
    pkpy_vm_bind__f_int__str_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str_float(std::intptr_t vm, String mod, String name, __f_int__str_float f){
    pkpy_vm_bind__f_int__str_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str_int(std::intptr_t vm, String mod, String name, __f_int__str_int f){
    pkpy_vm_bind__f_int__str_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str_str(std::intptr_t vm, String mod, String name, __f_int__str_str f){
    pkpy_vm_bind__f_int__str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_int__str_str_str(std::intptr_t vm, String mod, String name, __f_int__str_str_str f){
    pkpy_vm_bind__f_int__str_str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__(std::intptr_t vm, String mod, String name, __f_str__ f){
    pkpy_vm_bind__f_str__(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool(std::intptr_t vm, String mod, String name, __f_str__bool f){
    pkpy_vm_bind__f_str__bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool_bool(std::intptr_t vm, String mod, String name, __f_str__bool_bool f){
    pkpy_vm_bind__f_str__bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool_bool_bool(std::intptr_t vm, String mod, String name, __f_str__bool_bool_bool f){
    pkpy_vm_bind__f_str__bool_bool_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool_float(std::intptr_t vm, String mod, String name, __f_str__bool_float f){
    pkpy_vm_bind__f_str__bool_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool_int(std::intptr_t vm, String mod, String name, __f_str__bool_int f){
    pkpy_vm_bind__f_str__bool_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__bool_str(std::intptr_t vm, String mod, String name, __f_str__bool_str f){
    pkpy_vm_bind__f_str__bool_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float(std::intptr_t vm, String mod, String name, __f_str__float f){
    pkpy_vm_bind__f_str__float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float_bool(std::intptr_t vm, String mod, String name, __f_str__float_bool f){
    pkpy_vm_bind__f_str__float_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float_float(std::intptr_t vm, String mod, String name, __f_str__float_float f){
    pkpy_vm_bind__f_str__float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float_float_float(std::intptr_t vm, String mod, String name, __f_str__float_float_float f){
    pkpy_vm_bind__f_str__float_float_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float_int(std::intptr_t vm, String mod, String name, __f_str__float_int f){
    pkpy_vm_bind__f_str__float_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__float_str(std::intptr_t vm, String mod, String name, __f_str__float_str f){
    pkpy_vm_bind__f_str__float_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int(std::intptr_t vm, String mod, String name, __f_str__int f){
    pkpy_vm_bind__f_str__int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int_bool(std::intptr_t vm, String mod, String name, __f_str__int_bool f){
    pkpy_vm_bind__f_str__int_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int_float(std::intptr_t vm, String mod, String name, __f_str__int_float f){
    pkpy_vm_bind__f_str__int_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int_int(std::intptr_t vm, String mod, String name, __f_str__int_int f){
    pkpy_vm_bind__f_str__int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int_int_int(std::intptr_t vm, String mod, String name, __f_str__int_int_int f){
    pkpy_vm_bind__f_str__int_int_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__int_str(std::intptr_t vm, String mod, String name, __f_str__int_str f){
    pkpy_vm_bind__f_str__int_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str(std::intptr_t vm, String mod, String name, __f_str__str f){
    pkpy_vm_bind__f_str__str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str_bool(std::intptr_t vm, String mod, String name, __f_str__str_bool f){
    pkpy_vm_bind__f_str__str_bool(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str_float(std::intptr_t vm, String mod, String name, __f_str__str_float f){
    pkpy_vm_bind__f_str__str_float(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str_int(std::intptr_t vm, String mod, String name, __f_str__str_int f){
    pkpy_vm_bind__f_str__str_int(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str_str(std::intptr_t vm, String mod, String name, __f_str__str_str f){
    pkpy_vm_bind__f_str__str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
}

void pkpy::_vm_bind__f_str__str_str_str(std::intptr_t vm, String mod, String name, __f_str__str_str_str f){
    pkpy_vm_bind__f_str__str_str_str(reinterpret_cast<VM*>(vm), mod.utf8().get_data(), name.utf8().get_data(), f);
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
    ClassDB::bind_static_method("pkpy", D_METHOD("new_repl", "vm"), &pkpy::_new_repl);
    ClassDB::bind_static_method("pkpy", D_METHOD("repl_input", "r", "line"), &pkpy::_repl_input);
    ClassDB::bind_static_method("pkpy", D_METHOD("new_vm", "use_stdio"), &pkpy::_new_vm);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_add_module", "vm", "name", "source"), &pkpy::_vm_add_module);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool_bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool_bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__bool_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__bool_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float_float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float_float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__float_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__float_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int_int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int_int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__int_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__int_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_None__str_str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_None__str_str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool_bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool_bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__bool_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__bool_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float_float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float_float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__float_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__float_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int_int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int_int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__int_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__int_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_bool__str_str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_bool__str_str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool_bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool_bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__bool_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__bool_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float_float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float_float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__float_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__float_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int_int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int_int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__int_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__int_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_float__str_str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_float__str_str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool_bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool_bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__bool_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__bool_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float_float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float_float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__float_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__float_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int_int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int_int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__int_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__int_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_int__str_str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_int__str_str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool_bool_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool_bool_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__bool_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__bool_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float_float_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float_float_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__float_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__float_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int_int_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int_int_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__int_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__int_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str_bool", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str_bool);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str_float", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str_float);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str_int", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str_int);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_bind__f_str__str_str_str", "vm", "mod", "name", "f"), &pkpy::_vm_bind__f_str__str_str_str);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_eval", "vm", "source"), &pkpy::_vm_eval);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_exec", "vm", "source"), &pkpy::_vm_exec);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_get_global", "vm", "name"), &pkpy::_vm_get_global);
    ClassDB::bind_static_method("pkpy", D_METHOD("vm_read_output", "vm"), &pkpy::_vm_read_output);
}


}
@tool
extends EditorPlugin

var repl;

func _enter_tree():
	self.repl = load("res://addons/pocketpy/pocketpy_repl.tscn").instantiate()
	self.add_control_to_bottom_panel(self.repl, "Python REPL")

func _exit_tree():
	self.remove_control_from_bottom_panel(self.repl)
	self.repl.queue_free()
	self.repl = null

extends Node

func _ready():
	# Create a virtual machine
	var vm = pkpy.new_vm(false)

	# Run a script
	pkpy.vm_exec(vm, "print('Hello World!')")

	# Read the output
	var _o = pkpy.vm_read_output(vm)

	# Parse the output
	var res = JSON.parse_string(_o)

	# Print the output
	print(res["stdout"])    # "Hello World!\n"

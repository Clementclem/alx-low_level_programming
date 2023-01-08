import ctypes

# Load the dynamic library
operations = ctypes.cdll.LoadLibrary("100-operations.so")

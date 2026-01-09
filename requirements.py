import subprocess
import sys
from sys import platform

pipRequirements = (
    "scons==4.10.1"
)

# Makes the virtual environment
subprocess.call("python -m venv venv")

# Activates the virtual environment
if platform == "linux" or platform == "linux2":
    subprocess.call("source venv/bin/activate")
elif platform == "win32":                                                       # Tries both commands
    subprocess.call("venv/bin/Activate.bat")
    subprocess.call("venv/bin/Activate.ps1")
else:
    # OS is unsupported                                                         print(f"ERROR: OS is not supported, manually create virtual environment of name \'venv\' and pip install:\n{str(pipRequirements)}")

# Loops through each requirement                                            for lib in pipRequirements:
    subprocess.call(f"pip install {lib}")
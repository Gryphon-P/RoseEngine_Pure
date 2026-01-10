import subprocess
from sys import platform

pip_requirements = [
    "scons==4.10.1"
]

# Makes the virtual environment


# Checks what OS the user has
if platform == "linux" or platform == "linux2":
    subprocess.call("python3 -m venv venv") # Creates venv
    subprocess.call("source venv/bin/activate") # Activates venv
elif platform == "win32":
    subprocess.call("python -m venv venv") # Creates venv
    subprocess.call("powershell venv/Scripts/activate.ps1") # Activates venv
else:
    # OS is unsupported
    print(f"ERROR: OS is not supported, manually create virtual environment of name \'venv\' and pip install:\n{str(pip_requirements)}")

# Loops through each requirement
for lib in pip_requirements:
    subprocess.call(f"pip install {lib}")
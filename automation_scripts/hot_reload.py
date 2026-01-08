"""
This file is meant to:.
1. Detect changes in code files.
2. Recompile changed modules.
3. Inject code into project if it is running.
4. If the project cannot be run by only recompiling one file, we recompile the entire project.

Do I use .dll and .so files to hot reload?
"""

import os
import time

def detect_file_changes(file_path, interval=1):
    # https://www.geeksforgeeks.org/python/how-to-detect-file-changes-using-python/
    # # Usage
    # detect_file_changes("file.txt")
    last_modified = os.path.getmtime(file_path)
    while True:
        current_modified = os.path.getmtime(file_path)
        if current_modified != last_modified:
            print("File has changed!")
            last_modified = current_modified
        time.sleep(interval)

while True:
    # Main Loop




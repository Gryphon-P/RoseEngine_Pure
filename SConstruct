"""
SCons file for creating various rose_engine builds.
https://scons.org/doc/production/PDF/scons-user.pdf
Build type types:
    - Hot reloading
    - Scene editor
    - Simple build (also to be used for release)
"""

import sys

# Creates the SCons env
env = Environment()


STANDARD_BUILD_KEYWORDS = ["standard", "st", "std"]
HOT_RELOAD_BUILD_KEYWORDS = ["hot-reload", "hr"]
SCENE_EDITOR_BUILD_KEYWORDS = ["scene-editor", "se"]



# Gets the type of build we will be doing
build_type_keyword = ARGUMENTS.get("bt", "standard")
if (build_type_keyword in STANDARD_BUILD_KEYWORDS):
    """
    STANDARD BUILD
    """
    print("Starting Build...\n\n")

elif (build_type_keyword in HOT_RELOAD_BUILD_KEYWORDS):
    """
    HOT RELOAD BUILD
    """
    print("Starting Hot Reloading...\n\n")

elif (build_type_keyword in SCENE_EDITOR_BUILD_KEYWORDS):
    """
    SCENE EDITOR BUILD
    """
    print("Starting Scene Editor...\n\n")
else:
    raise Exception(
    "Invalid build type keyword. Valid build keywords are: \n" \
    "Build Project: 'standard' / 'st' / 'std'\n" \
    "Start Hot Reloading: 'hot-reload' / 'hr'\n" \
    "Open Scene Ediotor: 'scene-editor' / 'se'\n\n" \
    "Example: scons bt=hot-reload"
    )







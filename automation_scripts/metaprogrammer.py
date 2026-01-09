"""
The purpose of this file is to create a set of functions that will be able to find and replace certain sections in the game's C++ files.
"""

def SetEntityTransform(entityName: str, transform: str, sceneName: str):
    pass # TODO
    """
    Find the scene called {sceneName},
    At the end of the scene's Init() function, write a comment "// Generated from Scene Editor"
and below that, put all the transforms. something along the lines of f"exampleScene.GetEntityByName(\"{entityName}\").transform = {transform};"
we will also have to remove all the code below the comment beforehand so that we're not writing it twice.
    """
    
    
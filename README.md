# Iris
Iris will eventually be a C++ game engine with Lua baked in for easy prototyping and "hot reloading" of code.  Right now it's not much more than a print statement, but we all have to start somewhere, right?

Below is pulled from my design doc.  I will be updating this README as necessary.  Though I am prone to forgetting, so if this gets out of sync... oops.  Sorry.

## Roadmap
* Get Core Application Loop running via `Application.Run()`
	* Do not touch rendering or anything lower to start.  Just the Application loop going.
* Develop Layer system.  Provide a vector of pointers to each layer, and have the Application itself decide what layers to load.
	* Templates will play a big part in this as well as OOP stuff.
		* Take Inspiration from Cherno.  They explained the Layer system better than anyone, and Iris should be able to build off of it in it's own way. 
	* Lua will be a provided via a Lua Layer from within Iris.  With it we will provide a wrapper to load user scripts that control entities.
* Develop Lua integration.
	* With Lua, we should have a state table that requires at least two functions.  `onLoad()` and `onUpdate()`.  Other features can come later.
* Get basic rendering and texture handling done.  Possibly add this into a separate layer from the Application layer so that can we multithread this in the future. 
* The Gameplay Layer is planned to be mostly base classes that are meant to be overridden by the game prototypes.
	* Provide some basic functionality to access the layers above but keep things simple.  Functionality should be decided on a per-project basis rather than hard coded into Iris.
		* Only hardcode when necessary or to prototype.  Try not to make those permanent.
## Fork
This fork instroduces the depth aware Lucas Kanade algorithm which can be used as a more accurate version of the regular LK algorithm when depth data is available.

Documentation for this algorithm can be found in its associated paper here (no link yet, its not done)

A demonstrative video can be found [here](https://youtu.be/6jGBeI2OWnw?si=SpVBJumBO1WtfrI3)

**Important note**: No hardware optimization have been implemented for the depth aware Lucas-Kanade algorithm. If this algorithm is to be used in pratice it is recommended these be implemented. 

## OpenCV: Open Source Computer Vision Library

### Resources

* Homepage: <https://opencv.org>
  * Courses: <https://opencv.org/courses>
* Docs: <https://docs.opencv.org/4.x/>
* Q&A forum: <https://forum.opencv.org>
  * previous forum (read only): <http://answers.opencv.org>
* Issue tracking: <https://github.com/opencv/opencv/issues>
* Additional OpenCV functionality: <https://github.com/opencv/opencv_contrib> 


### Contributing

Please read the [contribution guidelines](https://github.com/opencv/opencv/wiki/How_to_contribute) before starting work on a pull request.

#### Summary of the guidelines:

* One pull request per issue;
* Choose the right base branch;
* Include tests and documentation;
* Clean up "oops" commits before submitting;
* Follow the [coding style guide](https://github.com/opencv/opencv/wiki/Coding_Style_Guide).

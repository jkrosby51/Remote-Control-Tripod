# Remote-Control-Tripod

### Description
  This project is a portable self controlled tripod to be used for taking quality and well aimed pictures on your own from up to 30ft away from the camera. It is capable of turning on all axes to aim a phone camera mounted at the top. It is controlled by an IR Universal Remote and an Arduino Uno.
  
### Smart Goal
  Selfie sticks and other ways to take pictures from far away lack enough control in how you pose and are less practical overall. By Feb 1st we will construct a tripod mounted robot, controlled by an IR remote in order to take good pictures from a variety of angles. In order to achieve this, the robot must have 180 degree control in all directions. This project is meant to cover the inconvenience of a regular tripod of not being able to re-adjust while posing.

### Criteria 
- 180 degree rotation of x, y, and z axes
- Remote controlled easily from a potentially large distance
- Has universal phone mount
- Tri-pod itself has a 1/4" female thread on the bottom

### Constraints
- Lack of knowledge on IR remotes
- Missing research on different arm types
- Small budget; Must create most/all ourselves
- Missing design for phone mount
- Must be finished before Feb 14, 2022

### Research
**Arm Types**
- Articulate Arm
  - Could aim the phone in any direction and could have depth
  - Fairly easy to design and build
- Polar Arm
  - Simpler and much easier to design and build
  - Less depth
  - Less material
  - More portable
- Rotating Plate
  - Simple design
  - Significantly less rotation range

**IR Remotes**
- GE Universal Remote [Amazon Link](https://www.amazon.com/GE-Lighting-Device-Universal-Remote/dp/B076QDZZF9?ref_=ast_sto_dp)
  - 30ft range

### Design
- First Design  
  - Articulate Arm
  - Allowed for large range in the position of the camera
- Second Design
  - Polar Arm
  - Allowed for full range in rotation and camera aim
  - Removed the ability for depth and range for camera position
  - Much simpler design
- Final Design: Polar Arm.
  Much more simple to build and design compared to articulate arm, the added depth would not make enough of a difference for longer ranged shots which the project is designed for. The first design is also less portable and uses more material to build.
### Materials
- Arduino Uno w/ prototyping shield || ~$36
- IR Remote and IR Reciever         || ~$12.50
- 3x 180 Servo                      || ~$2 per servo
- Acrylic sheets for laser cutting  || ~$4 to $9 per square foot
- Plastic for 3D printing           || ~$15 to $25 per kilogram
### Proof of Concept
Controlling LEDs with IR Remote & Reciever

<img src="https://github.com/jkrosby51/Remote-Control-Tripod/blob/main/Images/ProofOfConcept.gif" width="330" height="500" />

### Progress
 - The controller code is complete other than servo names which will be added once the project is assembled. [Link to code](https://github.com/jkrosby51/Remote-Control-Tripod/blob/main/IR_Controller.ino)
 - The phone holder is cut and assembled. [Link to Onshape document](https://cvilleschools.onshape.com/documents/a7888a055488cb7f7019fd47/w/7918e3e407033a13bde2e391/e/3e339f62e41d628ddd532f2c?renderMode=0&uiState=621ce594adf80343b1ccd3d9)
 - The main box and servo is modeled but not printed/cut and assembled. [Link to Onshape document](https://cvilleschools.onshape.com/documents/0842ea0297681654ed9ec6e5/w/2f2d596c173ecd37bdb8c60e/e/162fdac466993b0e6825e891?renderMode=0&uiState=621ce5c5873721518c4a4997)
 
### Problems
 - Time management -- The project was not fully printed/cut and assembled by the due date.
 - Over Complication -- Rather than making sure the project was assembled and working, we complicated things by adding more features or solving *potential* problems.
 
### Reflection
 - We made our project overly complicated in some parts, especially the phone holder, which took up a lot of our time and prevented us from finishing everything on time.
 - We didn't quite complete our full design as we intended, but we got a majority of the project designed and ready for printing/cutting and assembling.
 - If we had more time to complete this project, we would have focused on finishing touches and getting the project assembled, then seeing what actual problems come up, rather than spending time to work on potential problems.

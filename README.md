<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/ad9a5aed-4b72-4bbe-9cf6-185ff3bbadf9" alt="ElephantEye-logo">
</div>
<br>
<p align="center">
<img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/b341099e-cb8f-4023-a1ae-97adc3d2ea12" alt="TF" height="30" width="30">
<img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/5e3292b3-1368-4005-996f-b3550690e9da" alt="RaspPi" height="30" width="30">
<img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/8f70bf8c-77a2-4bc6-9f54-52a235e0d0a1" alt="RaspPi" height="30" width="30">
<img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/ee266613-5047-4b19-9bb8-9ec20b2a2447" alt="RaspPi" height="30" width="30">
<img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/1625ed8e-58cd-4359-af30-d891fbc4fb3f" alt="RaspPi" height="30" width="30">

</p>






<br>

# Introduction

<p> Elephant-Eye is an innovative project designed to address the critical issue of human-elephant conflict in areas where humans and elephants share habitats. The project aims to detect elephants in proximity to human settlements using advanced technology and promptly notify the relevant authorities for timely intervention.</p>

# Architecture
<br>
<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/f462a64c-91fe-437b-bd32-5408ee8f3d6a" alt="ElephantEye-logo">
</div>

# Working
<br>
<p>For elephant detection, TensorFlow Lite is implemented on a Raspberry Pi equipped with a Pi Camera. The real-time object detection is facilitated by the MobileNet SSD model, allowing efficient and accurate identification of elephants in the captured images. Upon detecting an elephant, the first Raspberry Pi (R1) initiates communication with another Raspberry Pi (R2) over Wi-Fi. R2 serves as a central hub, coordinating alert actions. It triggers an Arduino Uno microcontroller through I2C communication, which, in turn, activates a GSM module. The GSM module sends alert messages to the relevant authorities, promptly notifying them of the detected elephant and potential risks. Additionally, the Arduino Uno triggers a siren or buzzer, providing an audible warning to nearby residents and discouraging elephants from approaching populated areas. </p>
<br>
<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/dd039f1f-e684-4422-b51a-4183f900e6a7" alt="ElephantEye">
</div>

<br>

# Results
<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/f7563bdb-d4c8-4ddc-b1d6-c042201082b6" alt="Result1">
</div>
<p align="center">Result-1 through the webcam on live video</p>
<br>
<br>
<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/4638d2ae-37c4-4ece-ad46-ebcb19398fa2" alt="Result2">
</div>
<p align="center">Result-2 through the webcam on image</p>
<br>
<br>
<div align="center">
  <img src="https://github.com/NitinSingh99/Elephant-Eye/assets/140099756/4e7fa3fb-2273-4377-9744-f67385a16317" alt="output">
</div>
<p align="center">Output messsage to the user</p>




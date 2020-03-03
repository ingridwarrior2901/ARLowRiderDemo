# ARLowRiderDemo


# AR Demo Video

https://drive.google.com/file/d/15qpuINM2EVnfsRbogLfQFNU2p-AsRMXz/view?usp=sharing

## Blueprints

> To use the Trackable AR planes we must add UARTrackableNotify component to our Pawn, then we can implement the following delegate methods OnAddTrackedPlane and OnUpdateTrackedPlane. 

>If you see the code inside those delegates on UE4 you will notice that OnAddTrackedPlane and OnUpdateTrackedPlane will handle the ARKit delegate method didAddNode (https://developer.apple.com/documentation/arkit/arscnviewdelegate/2865794-renderer?language=objc) and didUpdateNode (https://developer.apple.com/documentation/arkit/arscnviewdelegate/2865799-renderer?language=objc)

![Test Image 3](/Images/img1.png)

> UE4 has a component (ApplicationLifecycleComponent) that we can check if our game/app goes to the background or foreground, this is very useful if we want to pause AR Session and prevent the game consumes memory when we don't need it.

![Test Image 3](/Images/img2.png)

> This method will verify if a raycast hits a custom plane. 

![Test Image 3](/Images/img3.png)

> Here we initialize the ARSession in the begin play method.

![Test Image 3](/Images/img4.png)



<a href="https://www.buymeacoffee.com/ingridguerrero2901" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" style="height: 41px !important;width: 174px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;" ></a>

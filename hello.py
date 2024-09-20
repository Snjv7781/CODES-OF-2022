import cv2
from cvzone.HandTrackingModule import HandDetector

# Initialize the detector with a specific confidence level
detector = HandDetector(detectionCon=0.8, maxHands=2)

# Read the image
image_path = r'C:\Users\ranja\OneDrive\Pictures\sanjeev.jpg'
img = cv2.imread(image_path)

# Detect hands in the image
hands, img = detector.findHands(img)  # hands is a list of dictionaries containing hand landmarks

# Check if any hands are detected
if hands:
    for hand in hands:
        # Get landmarks of the hand
        lmList = hand['lmList']  # List of 21 landmarks in the format [x, y, z]
        
        # Print the landmarks
        print("Landmarks:", lmList)
        
        # Get the hand type (Left or Right)
        handType = hand['type']
        print("Hand Type:", handType)
        
        # Determine which fingers are up
        fingers = detector.fingersUp(hand)
        print(f'Number of fingers up: {fingers.count(1)}')
else:
    print("No hands detected.")

# Show the annotated image (optional)
cv2.imshow("Image", img)
cv2.waitKey(0)
cv2.destroyAllWindows()

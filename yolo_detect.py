import cv2
import numpy as np
import torch

import pathlib
from pathlib import Path
pathlib.PosixPath = pathlib.WindowsPath

model = torch.hub.load("yolov5", "custom", path="best.pt",source="local", force_reload = True)  # local model
cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    if not ret:
        print("Failed to grab frame")
        break

    results = model(frame)
    
    detections = results.pred[0].cpu().numpy()
    
    if len(detections) > 0:
        # Get highest confidence detection
        highest_confidence_index = np.argmax(detections[:, 4])
        x1, y1, x2, y2, conf = detections[highest_confidence_index][:5]
        x1, y1, x2, y2 = map(int, [x1, y1, x2, y2])
        
        # Draw bounding box
        cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)
        cv2.putText(frame, f'Conf: {conf:.2f}', (x1, y1 - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        
    cv2.imshow("Camera Feed", frame)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()

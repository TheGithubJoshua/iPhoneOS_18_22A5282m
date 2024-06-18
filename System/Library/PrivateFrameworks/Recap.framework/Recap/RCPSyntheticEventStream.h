@class CAMediaTimingFunction, RCPEventSenderProperties, RCPPointerTrackingChildEventStream, NSString, NSMutableArray;

@interface RCPSyntheticEventStream : RCPEventStream <RCPEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPCrownEventStreamComposer, RCPPointerEventStreamComposer, RCPNaturalInputCollectionEventStreamComposer> {
    NSMutableArray *_processingEventBuffer;
    double _currentTimeOffset;
    long long _generationCount;
}

@property (readonly, nonatomic) struct { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; unsigned char x4; unsigned int x5; BOOL x6; } *activePoints;
@property (nonatomic) unsigned long long activePointCount;
@property (readonly, nonatomic) struct CGSize { double width; double height; } screenSize;
@property (nonatomic) struct CGSize { double width; double height; } gsScreenPointSize;
@property (nonatomic) double gsScreenScaleFactor;
@property (nonatomic) unsigned int transducerType;
@property (retain, nonatomic) RCPPointerTrackingChildEventStream *pointerChildEventStream;
@property (nonatomic) long long touchFrequency;
@property (retain, nonatomic) CAMediaTimingFunction *touchCurveFunction;
@property (readonly, nonatomic) double defaultPressure;
@property (readonly, nonatomic) double defaultRadius;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double pointerFrequency;
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic) BOOL scalePointerPhaseScrollToPixels;

+ (id)eventStreamWithEventActions:(id /* block */)a0;
+ (id)eventStreamWithCLIArguments:(id)a0;

- (void)liftUp:(struct CGPoint { double x0; double x1; })a0;
- (void)stylusBarrelDoubleTap;
- (void)_moveLastTouchPoint:(struct CGPoint { double x0; double x1; })a0 eventMask:(unsigned long long)a1;
- (void)pointerScale:(double)a0 duration:(double)a1 frequency:(long long)a2;
- (void)pointerPhasedScroll:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (id)init;
- (void)_updateTouchPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (void)sendUnicodeString:(id)a0 synthesizePerCharacterEvents:(BOOL)a1 durationBetweenEvents:(double)a2;
- (void)knobNudge:(struct CGVector { double x0; double x1; })a0 buttonMask:(unsigned int)a1 duration:(double)a2;
- (void)vendorEventWithPage:(id)a0 withUsage:(id)a1 withVersion:(unsigned char)a2 withData:(id)a3;
- (void)liftUpAtAllActivePoints;
- (id)_splitStringIntoArrayOfCharacters:(id)a0;
- (struct __IOHIDEvent { } *)_createIOHIDWithEventType:(long long)a0;
- (void)edgeOrb:(struct CGPoint { double x0; double x1; })a0;
- (void)hoverAtLocation:(struct CGPoint { double x0; double x1; })a0 withDuration:(double)a1 withZPosition:(double)a2;
- (void)_finalizePointerButtonMasks;
- (unsigned long long)_currentMachTime;
- (void)composeNavigationGestureInMotion:(unsigned short)a0 frequency:(unsigned long long)a1 actionBlock:(id /* block */)a2;
- (void)doubleTap:(struct CGPoint { double x0; double x1; })a0;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0;
- (void)beginButtonPressWithPage:(unsigned long long)a0 usage:(unsigned long long)a1;
- (void)doubleFingerTap:(struct CGPoint { double x0; double x1; })a0;
- (void)pointerMoveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)pressDiscreteGameControllerButton:(long long)a0 duration:(double)a1;
- (void)_setMajorRadiusForAllPoints:(double)a0;
- (void)tapToWakeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)pointerEndPressingButton:(long long)a0;
- (void)_finalizeHomeButtonEvents;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (void)_withPointerEventStreamAtFrequency:(long long)a0 perform:(id /* block */)a1;
- (void)dragWithStartPoint:(struct CGPoint { double x0; double x1; })a0 mask:(unsigned long long)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 mask:(unsigned long long)a3 duration:(double)a4;
- (struct __IOHIDEvent { } *)_createIOSButtonHIDEventWithButtonType:(long long)a0 down:(BOOL)a1;
- (void)vendorEventWithPage:(id)a0 withUsage:(id)a1 withVersion:(unsigned char)a2;
- (void)_pressButtonEventForIndex:(long long)a0 down:(BOOL)a1;
- (void)_flickWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void)hover:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1;
- (void)withExclusiveChildStream:(id)a0 perform:(id /* block */)a1;
- (void)multifingerDragWithPointArray:(struct CGPoint { double x0; double x1; } *)a0 numPoints:(unsigned long long)a1 duration:(double)a2 numFingers:(unsigned long long)a3;
- (void)pointerRotation:(double)a0 duration:(double)a1 frequency:(long long)a2;
- (void)flipRingerSwitchToValue:(BOOL)a0;
- (void)pointerTranslatation:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void)edgeOrbSwipe:(struct CGPoint { double x0; double x1; })a0 withEndLocation:(struct CGPoint { double x0; double x1; })a1 withDuration:(double)a2;
- (void)advanceTime:(double)a0;
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent { } *)a0;
- (void)composeDockGestureOfFlavor:(unsigned short)a0 motion:(unsigned short)a1 frequency:(unsigned long long)a2 actionBlock:(id /* block */)a3;
- (void)pinchOpenWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void)_initScreenProperties;
- (void)pointerPhasedScroll:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void)pressButtons:(id)a0 duration:(double)a1;
- (void)pinchCloseWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2 duration:(double)a3;
- (struct __IOHIDEvent { } *)_createIOSButtonHIDEventWithPage:(unsigned int)a0 usage:(unsigned int)a1 down:(BOOL)a2;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2 duration:(double)a3 radius:(double)a4;
- (void)_touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2 radius:(double)a3 edgeMaskOptions:(const struct { unsigned int x0; BOOL x1; } *)a4;
- (void)hoverToTapAtLocation:(struct CGPoint { double x0; double x1; })a0 withDuration:(double)a1;
- (void)_wrapInPointerParentAndAddToProcessingBuffer:(struct __IOHIDEvent { } *)a0;
- (void)hoverAtLocation:(struct CGPoint { double x0; double x1; })a0 withDuration:(double)a1;
- (void)pointerBeginPressingButton:(long long)a0;
- (void)_setPressureForAllPoints:(double)a0;
- (void)pointerDiscreteGesture:(id)a0 duration:(double)a1 frequency:(long long)a2;
- (void)_hoverAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2 radius:(double)a3 edgeMaskOptions:(const struct { unsigned int x0; BOOL x1; } *)a4 withEventType:(long long)a5 withZPosition:(double)a6;
- (void)pointerMoveDelta:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void).cxx_destruct;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2;
- (struct __IOHIDEvent { } *)_parentZeroPointerEvent;
- (void)sendFlickWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void)_initScreenPropertiesForScreen:(id)a0;
- (void)dragWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 tapAndWait:(double)a3 lift:(BOOL)a4;
- (void)peekAndPop:(struct CGPoint { double x0; double x1; })a0 commit:(BOOL)a1 duration:(double)a2;
- (void)endButtonPressWithPage:(unsigned long long)a0 usage:(unsigned long long)a1;
- (void)composeWithSender:(id)a0 actionBlock:(id /* block */)a1;
- (void)sendUnicodeStringByCharacters:(id)a0 durationBetweenEvents:(double)a1;
- (void)liftUp:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (void)sendUnicodeString:(id)a0;
- (void)_finalizeProcessingEventBuffer;
- (void)moveToPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 duration:(double)a2;
- (void)tap:(struct CGPoint { double x0; double x1; })a0;
- (double)touchMoveInterval;
- (void)touchTapDown:(struct CGPoint { double x0; double x1; })a0;
- (void)pointerDiscreteScroll:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)rotateCrown:(double)a0 direction:(long long)a1 duration:(double)a2;
- (void)hoverToTap:(struct CGPoint { double x0; double x1; })a0 withZPosition:(double)a1;
- (void)liftUpActivePointsByIndex:(id)a0;
- (void)composeDockGestureInMotion:(unsigned short)a0 frequency:(unsigned long long)a1 actionBlock:(id /* block */)a2;
- (void)_knobEventForOffset:(struct CGVector { double x0; double x1; })a0 buttonMask:(unsigned int)a1 oldButtonMask:(unsigned int)a2;
- (void)dealloc;
- (void)hoverToTapAtLocation:(struct CGPoint { double x0; double x1; })a0 withDuration:(double)a1 withZPosition:(double)a2;
- (void)pointerPhasedFlick:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)_dragWithStartPoint:(struct CGPoint { double x0; double x1; })a0 mask:(unsigned long long)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 mask:(unsigned long long)a3 duration:(double)a4 tapAndWait:(double)a5 lift:(BOOL)a6;
- (void)pointerPhasedFlick:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void)touchDownAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1 pressure:(double)a2 radius:(double)a3;
- (void)_delayBetweenMove:(int)a0 elapsedTime:(double)a1;
- (void)pointerDiscreteScroll:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void)pressButtonsWithPages:(id)a0 usages:(id)a1 duration:(double)a2;
- (void)rotate:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 rotation:(double)a2 duration:(double)a3 touchCount:(unsigned long long)a4;
- (struct CGPoint { double x0; double x1; })_normalizePoint:(struct CGPoint { double x0; double x1; })a0;
- (void)taps:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 withNumberOfTouches:(unsigned long long)a2;
- (void)dragWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2;
- (void)touchDown:(struct CGPoint { double x0; double x1; })a0 touchCount:(unsigned long long)a1;
- (void)pointerMoveByDelta:(struct CGVector { double x0; double x1; })a0 duration:(double)a1;
- (void)pointerSetAbsolutePosition:(struct CGPoint { double x0; double x1; })a0;
- (void)liftUpAtPoints:(struct CGPoint { double x0; double x1; } *)a0 touchCount:(unsigned long long)a1;
- (struct __IOHIDEvent { } *)_createIOHIDGameControllerEventForDpadButton:(long long)a0;
- (void)pointerMoveFromOriginPoint:(struct CGPoint { double x0; double x1; })a0 toDestinationPoint:(struct CGPoint { double x0; double x1; })a1 duration:(double)a2 frequency:(long long)a3;
- (void)_tap:(struct CGPoint { double x0; double x1; })a0 withPressure:(double)a1;
- (void)liftUpAtAllActivePointsWithEventType:(long long)a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (BOOL)_isEdgePoint:(struct CGPoint { double x0; double x1; })a0 getMask:(unsigned int *)a1;
- (void)tapsNoLift:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 withNumberOfTouches:(unsigned long long)a2;

@end
@class NSMapTable, NSMutableSet;

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
    NSMutableSet *_touchesWithOutstandingUpdates;
    double _maximumPositionZ;
    double _hoverAzimuthAngle;
    double _hoverAltitudeAngle;
    double _positionZ;
}

@property (readonly, nonatomic) BOOL hasOutstandingUpdates;
@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked;

- (id)_windows;
- (void)setHoverTouch:(id)a0 forContextId:(unsigned int)a1 pathIndex:(long long)a2;
- (long long)subtype;
- (void)_cancelAllGestureRecognizersAndRemoveAllHoverTouches;
- (void)removeHoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (id)touchesForView:(id)a0;
- (id)_gestureRecognizersForWindow:(id)a0;
- (id)_init;
- (id)allTouches;
- (void)_resetHasOutstandingUpdateTouches;
- (void)setNeedsUpdateForWindow:(id)a0;
- (unsigned long long)_inputPrecision;
- (void)_addHasOutstandingUpdateTouch:(id)a0;
- (void)_windowDidDetachContext:(id)a0;
- (void)setNeedsHitTestResetForWindow:(id)a0;
- (void)removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (id)touchesForWindow:(id)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)a0;
- (id)hoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (void)_removeAllHoverTouchesForContextId:(unsigned int)a0;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (void)_completelyRemoveHoverTouchesForWindow:(id)a0 contextIdNumber:(id)a1 withCancellation:(BOOL)a2;
- (void)dealloc;
- (void)_windowDidBecomeHidden:(id)a0;
- (id)_touchesByContextId:(unsigned int)a0 createIfNeeded:(BOOL)a1;
- (long long)type;
- (void)_cancelAllGestureRecognizers;
- (id)touchesForGestureRecognizer:(id)a0;
- (void)_pointerStateDidChange:(id)a0;
- (void)_setNeedsUpdateForWindow:(id)a0 forcingHitTest:(BOOL)a1;

@end

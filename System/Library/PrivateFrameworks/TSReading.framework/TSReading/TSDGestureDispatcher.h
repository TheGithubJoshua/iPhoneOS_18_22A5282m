@class TSDInteractiveCanvasController, NSString, TSUNoCopyDictionary, NSMutableArray;

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate> {
    NSMutableArray *_simultaneitySets;
    TSUNoCopyDictionary *_priorityMap;
    BOOL _runningTargetHandleGesture;
    NSMutableArray *_gesturesInFlight;
    NSMutableArray *_targetsInFlight;
    BOOL _gestureDidFire;
}

@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handleGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)teardown;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)a0;
- (void)allowSimultaneousRecognitionByRecognizers:(id)a0;
- (void)didReset:(id)a0;
- (BOOL)gestureActionShouldBegin:(id)a0;
- (void)gestureRemovedFromView:(id)a0;
- (BOOL)handleGesture:(id)a0 withTarget:(id)a1;
- (void)p_gestureNoLongerInFlight:(id)a0;
- (id)p_getGestureTarget:(id)a0;
- (void)prioritizeRecognizer:(id)a0 overRecognizer:(id)a1;

@end

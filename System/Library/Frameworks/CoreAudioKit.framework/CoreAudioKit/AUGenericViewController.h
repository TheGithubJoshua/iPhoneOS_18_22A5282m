@class AUAudioUnit, _TtC12CoreAudioKit21AUGenericViewInternal;

@interface AUGenericViewController : UIViewController

@property (readonly) _TtC12CoreAudioKit21AUGenericViewInternal *genericView;
@property (retain, nonatomic) AUAudioUnit *auAudioUnit;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)addGestureObservers;
- (void)genericViewBeginGestureMessageReceived:(id)a0;
- (void)genericViewEndGestureMessageReceived:(id)a0;
- (void)genericViewNotificationMessageReceived:(id)a0;
- (id)getAuAudioUnit;

@end

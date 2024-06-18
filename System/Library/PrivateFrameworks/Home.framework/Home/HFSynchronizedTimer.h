@class NSTimer, NSMapTable;

@interface HFSynchronizedTimer : NSObject

@property (retain, nonatomic) NSTimer *activeTimer;
@property (readonly, nonatomic) NSMapTable *observers;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_timerDidFire;
- (void)_updateTimerState;

@end

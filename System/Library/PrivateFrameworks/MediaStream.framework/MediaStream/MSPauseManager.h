@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject {
    NSMutableDictionary *_UUIDToTimerMap;
}

@property (weak, nonatomic) id<MSPauseManagerDelegate> delegate;

+ (id)sharedManager;

- (id)init;
- (void)_addPauseUUID:(id)a0;
- (void)pingPauseUUID:(id)a0;
- (void).cxx_destruct;
- (void)unpauseUUID:(id)a0;
- (void)_removeTimerUUID:(id)a0;
- (void)dealloc;
- (BOOL)isPaused;
- (void)_timerDidFire:(id)a0;

@end

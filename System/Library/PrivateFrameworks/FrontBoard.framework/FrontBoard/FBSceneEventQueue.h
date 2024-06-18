@protocol FBSceneEventQueueDelegate;

@interface FBSceneEventQueue : BSEventQueue

@property (weak, nonatomic) id<FBSceneEventQueueDelegate> delegate;

- (void)_noteQueueDidDrain;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void).cxx_destruct;
- (void)_noteQueueDidUnlock;

@end

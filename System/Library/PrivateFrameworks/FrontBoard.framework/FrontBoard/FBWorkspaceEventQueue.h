@interface FBWorkspaceEventQueue : BSEventQueue

+ (id)sharedInstance;

- (void)_noteWillExecuteEvent:(id)a0;
- (BOOL)_shouldProcessEvent:(id)a0 enqueuedDuringExecutionOfEvent:(id)a1;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidUnlock;
- (void)executeOrPrependEvent:(id)a0;
- (void)executeOrAppendEvent:(id)a0;
- (void)_noteQueueDidLock;
- (void)_noteWillCancelEventsWithName:(id)a0 count:(unsigned long long)a1;
- (void)executeOrPrependEvents:(id)a0;

@end

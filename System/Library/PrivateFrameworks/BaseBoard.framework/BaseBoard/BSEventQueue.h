@class NSString, NSArray, BSEventQueueEvent, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    BOOL _processingEvents;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *pendingEvents;
@property (readonly, nonatomic) BSEventQueueEvent *executingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)flushEvents:(id)a0;
- (void)cancelEventsWithName:(id)a0;
- (void)_noteQueueDidDrain;
- (id)succinctDescription;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)flushPendingEvents;
- (BOOL)_shouldProcessEvent:(id)a0 enqueuedDuringExecutionOfEvent:(id)a1;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)_noteQueueDidUnlock;
- (void)executeOrInsertEvent:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidLock;
- (void)executeOrInsertEvents:(id)a0 atPosition:(int)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)hasEventWithName:(id)a0;
- (id)initWithName:(id)a0 onQueue:(id)a1;
- (void)_noteWillCancelEventsWithName:(id)a0 count:(unsigned long long)a1;
- (id)acquireLockForReason:(id)a0;
- (void)flushAllEvents;
- (BOOL)hasEventWithPrefix:(id)a0;
- (void)relinquishLock:(id)a0;

@end

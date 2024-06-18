@class NSArray, IDSBaseMessage, CUTDeferredTaskQueue, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id<FTMessageQueueDelegate> delegate;

- (id)init;
- (void)_timeoutHit;
- (void)removeAllMessages;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (id)dequeueTopMessage;
- (void)_clearTimeout;
- (void)_setTimeout;
- (id)messageForUniqueID:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)addMessage:(id)a0;
- (BOOL)removeMessage:(id)a0;

@end

@class NSMutableArray;
@protocol VSMessageQueueDelegate;

@interface VSMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id<VSMessageQueueDelegate> delegate;

- (id)init;
- (id)removeAllMessages;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;

@end

@class NSURLQueueNode;

@interface NSURLQueue : NSObject {
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;

- (BOOL)remove:(id)a0;
- (id)init;
- (id)peek;
- (void)clear;
- (BOOL)isEmpty;
- (void)dealloc;
- (unsigned long long)count;
- (id)peekAt:(unsigned long long)a0;
- (long long)indexOf:(id)a0;
- (void)put:(id)a0;
- (void)setWaitOnTake:(BOOL)a0;
- (id)take;
- (BOOL)waitOnTake;

@end

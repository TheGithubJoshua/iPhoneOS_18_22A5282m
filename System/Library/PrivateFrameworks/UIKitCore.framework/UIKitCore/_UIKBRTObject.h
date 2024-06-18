@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKBRTObject : NSObject {
    NSMutableArray *_owner;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)setOwner:(id)a0;
- (id)owner;
- (void).cxx_destruct;
- (id)nextEntry;
- (id)previousEntry;

@end

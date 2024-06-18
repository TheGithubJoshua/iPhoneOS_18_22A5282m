@class NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSMutableArray *receivers;

- (id)init;
- (BOOL)hasReceiver:(id)a0;
- (void)disconnect;
- (void).cxx_destruct;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;
- (void)addReceiverIfMissing:(id)a0;
- (void)distributeBlock:(id /* block */)a0;
- (void)dropAllTargets;
- (void)suspendDuringBlock:(id /* block */)a0;

@end

@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy {
    id<MSPReplicaRecord> _record;
}

- (id)contents;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)_initWithRecord:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)contentsTimestamp;

@end

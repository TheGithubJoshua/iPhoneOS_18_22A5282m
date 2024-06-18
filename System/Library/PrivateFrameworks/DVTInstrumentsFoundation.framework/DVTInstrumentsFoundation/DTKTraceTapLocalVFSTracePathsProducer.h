@interface DTKTraceTapLocalVFSTracePathsProducer : NSObject <DTKTraceTapLocalEventProducer>

+ (BOOL)supportsConfig:(id)a0;

- (id)init;
- (void)pause;
- (void)stop;
- (void)start;
- (void)unpause;
- (void)_emitVFSDump;

@end

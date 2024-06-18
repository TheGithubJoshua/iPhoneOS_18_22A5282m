@interface BWSourceNode : BWNode

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;

- (BOOL)stop:(id *)a0;
- (BOOL)start:(id *)a0;
- (id)nodeType;
- (void)makeOutputsLiveIfNeeded;

@end

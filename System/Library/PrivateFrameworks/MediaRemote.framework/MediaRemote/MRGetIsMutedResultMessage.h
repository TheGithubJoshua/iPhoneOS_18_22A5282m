@interface MRGetIsMutedResultMessage : MRProtocolMessage

@property (readonly, nonatomic, getter=isMuted) BOOL muted;

- (id)initWithIsMuted:(BOOL)a0;
- (unsigned long long)type;

@end

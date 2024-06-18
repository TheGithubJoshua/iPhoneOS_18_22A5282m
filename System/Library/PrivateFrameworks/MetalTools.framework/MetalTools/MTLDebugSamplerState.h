@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor;

- (id)description;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithSamplerState:(id)a0 descriptor:(id)a1 device:(id)a2;

@end

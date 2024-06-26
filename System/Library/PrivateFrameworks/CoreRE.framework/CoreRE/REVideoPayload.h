@interface REVideoPayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned char audioInputMode;
@property (readonly, nonatomic) float reverbSendLevel;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAudioInputMode:(unsigned char)a0 reverbSendLevel:(float)a1;

@end

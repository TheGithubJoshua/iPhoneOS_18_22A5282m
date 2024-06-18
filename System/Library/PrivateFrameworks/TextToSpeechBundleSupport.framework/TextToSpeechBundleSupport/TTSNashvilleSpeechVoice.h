@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) BOOL overrideDefault;
@property (nonatomic) BOOL overrideFallbackDefault;
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isDefault;
- (BOOL)isFallbackDefault;
- (BOOL)isCombinedFootprint;
- (BOOL)excludeInAvailableVoiceList;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSystemVoice;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

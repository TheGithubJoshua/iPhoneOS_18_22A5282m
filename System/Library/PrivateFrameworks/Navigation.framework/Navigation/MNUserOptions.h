@class NSString;

@interface MNUserOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long drivingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long walkingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long cyclingVoiceGuidanceLevel;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) BOOL useHFP;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL chimeBeforeInstruction;
@property (nonatomic) BOOL muteSpeechOverride;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (readonly, nonatomic) NSString *voiceLanguage;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)changeTransportType:(int)a0 toVoiceGuidanceLevel:(unsigned long long)a1;
- (unsigned long long)guidanceLevelForTransportType:(int)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

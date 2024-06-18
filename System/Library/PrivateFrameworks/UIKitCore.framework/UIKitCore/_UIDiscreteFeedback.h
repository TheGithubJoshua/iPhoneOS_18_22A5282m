@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>

@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)discreteFeedbackForType:(long long)a0;

- (id)dictionaryRepresentation;
- (BOOL)isPlaying;
- (id)_debugDictionary;
- (unsigned int)_effectiveSystemSoundID;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_effectiveEventType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_playableProtocol;

@end

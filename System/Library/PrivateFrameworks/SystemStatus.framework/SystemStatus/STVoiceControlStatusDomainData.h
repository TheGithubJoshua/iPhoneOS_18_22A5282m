@class NSString;

@interface STVoiceControlStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isVoiceControlActive) BOOL voiceControlActive;
@property (readonly, nonatomic) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end

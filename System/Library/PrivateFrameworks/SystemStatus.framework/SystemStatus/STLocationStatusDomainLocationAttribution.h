@class NSString, STActivityAttribution;

@interface STLocationStatusDomainLocationAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long locationState;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly, nonatomic) unsigned long long eligibleDisplayModes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithLocationState:(unsigned long long)a0 activityAttribution:(id)a1;
- (id)initWithLocationState:(unsigned long long)a0 activityAttribution:(id)a1 eligibleDisplayModes:(unsigned long long)a2;

@end

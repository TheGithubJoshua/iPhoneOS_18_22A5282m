@class SBFTraitsParticipant, NSString;

@interface SBFTraitsPreferencesTreeNodeSpecification : NSObject <NSCopying, BSDescriptionProviding>

@property (retain, nonatomic) SBFTraitsParticipant *participant;
@property (retain, nonatomic) SBFTraitsParticipant *parentParticipant;
@property (nonatomic) double order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithParticipant:(id)a0 parentParticipant:(id)a1;

@end

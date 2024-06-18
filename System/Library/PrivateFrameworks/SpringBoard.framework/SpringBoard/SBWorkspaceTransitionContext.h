@class SBWorkspaceTransitionRequest, NSSet, NSString, NSMutableDictionary, NSMutableArray, BSAnimationSettings;

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding> {
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    NSMutableArray *_finalizeBlocks;
}

@property (weak, nonatomic) SBWorkspaceTransitionRequest *request;
@property (readonly, copy, nonatomic) NSSet *entities;
@property (readonly, copy, nonatomic) NSSet *previousEntities;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;
@property (nonatomic) BOOL animationDisabled;
@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)context;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)entityForKey:(id)a0;
- (id)previousEntityForKey:(id)a0;
- (void)setPreviousEntity:(id)a0 forKey:(id)a1;
- (id)entityForIdentifier:(id)a0;
- (id)previousEntityForIdentifier:(id)a0;
- (void)setEntity:(id)a0 forKey:(id)a1;
- (void)addFinalizeBlock:(id /* block */)a0;
- (id)succinctDescription;
- (void)finalize;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)a0;

@end

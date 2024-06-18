@class NSString;

@interface SBSBackgroundContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 clientBundleIdentifier:(id)a1;

@end

@class NSDictionary, NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding>

@property (nonatomic) long long interfaceOrientation;
@property (copy, nonatomic) NSDictionary *interfaceOrientationByLayoutElementIdentifier;
@property (readonly, nonatomic) NSSet *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isMeaningfullyDifferentFromLayoutState:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)_defaultInterfaceOrientation;
- (long long)interfaceOrientationForLayoutElement:(id)a0;
- (BOOL)isEqual:(id)a0 withRole:(long long)a1;
- (id)floatingAppLayout;
- (long long)_interfaceOrientationForElementIdentifier:(id)a0 unknownAllowed:(BOOL)a1;
- (id)succinctDescription;
- (void)invalidateAppLayout;
- (id)elementWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (long long)interfaceOrientationForElementIdentifier:(id)a0;
- (id)appLayout;
- (long long)interfaceOrientationForLayoutRole:(long long)a0;
- (void)invalidateFloatingAppLayout;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 interfaceOrientationByLayoutElement:(id)a2;
- (BOOL)layoutContainsRole:(long long)a0;
- (long long)interfaceOrientationForLayoutElement:(id)a0 unknownAllowed:(BOOL)a1;
- (id)elementWithRole:(long long)a0;

@end

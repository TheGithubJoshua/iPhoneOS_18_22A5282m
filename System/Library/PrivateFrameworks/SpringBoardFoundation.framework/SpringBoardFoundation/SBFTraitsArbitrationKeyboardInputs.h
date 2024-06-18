@class NSString, UIKBArbiterClientFocusContext;

@interface SBFTraitsArbitrationKeyboardInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) UIKBArbiterClientFocusContext *keyboardFocusContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithKeyboardFocusContext:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTraitsArbitrationKeyboardInputs:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end

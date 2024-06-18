@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } suggestedContentInsets;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end

@class SBSwitcherShelf;

@interface SBShelfIconBounceTransitionModifier : SBTransitionSwitcherModifier {
    SBSwitcherShelf *_shelf;
}

- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)bounceIconBundleIdentifier;
- (void).cxx_destruct;
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounceIconInitialFrame;
- (id)initWithTransitionID:(id)a0 shelf:(id)a1;

@end

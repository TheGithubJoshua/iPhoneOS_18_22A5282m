@class NSArray, NSOrderedSet;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
    NSOrderedSet *_continuousExposeIdentifiers;
}

- (id)appLayouts;
- (void)setState:(long long)a0;
- (void)didMoveToParentModifier:(id)a0;
- (unsigned long long)appLayoutsGenerationCount;
- (void).cxx_destruct;
- (id)initWithAppLayouts:(id)a0;

@end

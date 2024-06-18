@class _UIMenuBuilder;

@interface UIMenuSystem : NSObject {
    _UIMenuBuilder *_defaultBuilder;
}

@property (class, readonly, nonatomic) UIMenuSystem *mainSystem;
@property (class, readonly, nonatomic) UIMenuSystem *contextSystem;

- (void).cxx_destruct;
- (void)setNeedsRebuild;
- (BOOL)_buildMenuWithBuilder:(id)a0 fromResponderChain:(id)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inCoordinateSpace:(id)a3;
- (id)_newBuilderFromResponderChain:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (void)_setInitialBuildingResponder:(id)a0;
- (id)initWithRootMenuChildren:(id)a0;
- (void)setNeedsRevalidate;

@end

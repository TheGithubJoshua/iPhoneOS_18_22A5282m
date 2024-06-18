@class UIView;

@interface _SBRootFolderLayoutWrapperView : SBFTouchPassThroughView

@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic) double headerOffset;
@property (nonatomic) struct CGSize { double width; double height; } extendedSize;
@property (retain, nonatomic) UIView *wrappedView;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (void)_updateLayout;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)layoutSubviews;

@end

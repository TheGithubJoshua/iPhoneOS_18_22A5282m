@class UIView, NSLayoutConstraint, UIBarButtonItem;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {
    UIBarButtonItem *_item;
    UIView *_spacer;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_minimumSize;
    NSLayoutConstraint *_equalSize;
    BOOL _flexible;
}

@property (readonly, nonatomic) long long spacerType;

+ (id)spacerForLayoutMetrics:(id)a0 betweenLayout:(id)a1 andLayout:(id)a2;
+ (long long)typeOfSpacerBetweenLayout:(id)a0 andLayout:(id)a1;
+ (id)_updateSpacer:(id)a0 layoutMetrics:(id)a1 spacerType:(long long)a2;

- (BOOL)suppressSpacing;
- (void)_configure;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)a0;
- (void)_addConstraintsToActivate:(id)a0 toDeactivate:(id)a1;
- (BOOL)isSpaceLayout;
- (void)_addLayoutViews:(id)a0;
- (id)initWithLayoutMetrics:(id)a0;
- (id)barButtonItem;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLayoutMetrics:(id)a0 barButtonItem:(id)a1;

@end

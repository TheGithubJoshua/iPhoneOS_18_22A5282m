@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementWrapper : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_actualPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (id)initWithCoder:(id)a0;
- (BOOL)inputViewWillAppear;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (double)alpha;
- (BOOL)isInteractive;
- (BOOL)showsInputOrAssistantViews;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)showsKeyboard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)accessoryViewWillAppear;
- (BOOL)showsEditItems;
- (BOOL)isVisible;
- (BOOL)showsInputViews;
- (id)applicatorInfoForOwner:(id)a0;
- (unsigned long long)computeComparisonMask;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (void)setDirty;
- (id)subPlacements;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;

@end

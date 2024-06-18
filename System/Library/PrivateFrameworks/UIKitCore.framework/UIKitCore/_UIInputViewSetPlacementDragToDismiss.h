@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double offset;
@property (nonatomic) BOOL dismissKeyboardOnly;

+ (id)placementWithOffset:(double)a0 dismissKeyboardOnly:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

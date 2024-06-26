@class NSArray;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_60C465D0E37117769FC505C04DE5239A24UIKitFocusableFillerItem : UIKitFocusableViewResponderItemBase <UIFocusItem> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ axis;
    void /* unknown type, empty encoding */ logicalFrame;
    void /* unknown type, empty encoding */ focusableFrame;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) id<UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id<UIFocusItemContainer> focusItemContainer;

- (id)init;
- (void)setNeedsFocusUpdate;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)updateFocusIfNeeded;
- (void).cxx_destruct;

@end

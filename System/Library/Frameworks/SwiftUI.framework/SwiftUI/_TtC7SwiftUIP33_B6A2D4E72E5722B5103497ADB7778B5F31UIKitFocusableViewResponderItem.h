@class NSString, NSArray, UIFocusEffect;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F31UIKitFocusableViewResponderItem : UIKitFocusableViewResponderItemBase <UIFocusItem, _UIFocusItemPrivate> {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ contentPath;
}

@property (nonatomic) void /* unknown type, empty encoding */ frame;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSString *swiftui_focusGroupIdentifier;
@property (nonatomic, readonly) id<UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) id<UIFocusItemContainer> focusItemContainer;
@property (nonatomic, readonly) UIFocusEffect *focusEffect;

- (id)init;
- (void)setNeedsFocusUpdate;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)updateFocusIfNeeded;
- (void).cxx_destruct;

@end

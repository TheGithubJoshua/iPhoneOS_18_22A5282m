@class UIView, UIGestureRecognizer, NSArray, NSString, CALayer, UIDragInteraction, CNContact, CNContactListStyleApplier, CNContactStore, NSLayoutConstraint, UILabel, CNContactFormatter;
@protocol CNContactListBannerViewDelegate;

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate>

@property (readonly, nonatomic) CNContactFormatter *formatter;
@property (retain, nonatomic) CNContact *meContact;
@property (readonly, nonatomic) UIGestureRecognizer *longPress;
@property (retain, nonatomic) UIView *avatarView;
@property (readonly, nonatomic) UIView *avatarViewContainer;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIView *footnoteContainer;
@property (readonly, nonatomic) UILabel *footnoteLabel;
@property (readonly, nonatomic) UILabel *footnoteValueLabel;
@property (readonly, nonatomic) CALayer *topSeparator;
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint;
@property (retain, nonatomic) NSArray *constraintsPendingActivation;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id<CNContactListBannerViewDelegate> delegate;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (readonly, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void)copy:(id)a0;
- (void)cellWasSingleTapped:(id)a0;
- (void)applyStyle;
- (void)setMeContact:(id)a0 footnoteTitle:(id)a1 footnoteValue:(id)a2;
- (void)activatePendingConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)menuDidHide:(id)a0;
- (void)showMenu;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setTopSeparatorWithInset:(double)a0 andLength:(double)a1;
- (void)updateFontRelatedConstraints;
- (void)dealloc;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)displaysContactInfo;
- (void)cellWasLongPressed:(id)a0;
- (void)configureDragInteraction;

@end

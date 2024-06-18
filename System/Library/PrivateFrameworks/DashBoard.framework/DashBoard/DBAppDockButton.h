@class NSString, UIImageView, DBLeafIcon, NSLayoutConstraint;
@protocol DBIconProviding;

@interface DBAppDockButton : DBStatusBarButton <SBLeafIconObserver, NSCopying>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *iconFocusRingImageView;
@property (retain, nonatomic) UIImageView *iconFocusRingUnreadImageView;
@property (weak, nonatomic) id<DBIconProviding> iconProvider;
@property (retain, nonatomic) DBLeafIcon *icon;
@property (retain, nonatomic) UIImageView *badgeView;
@property (nonatomic) BOOL showBadge;
@property (retain, nonatomic) NSLayoutConstraint *iconFocusRingUnreadImageViewCenterConstraint;
@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithIconProvider:(id)a0;
- (void)setFocusHighlightColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)iconImageDidUpdate:(id)a0;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (void)setBadgeHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupImagesIfNecessary;
- (void)_updateCenterXConstraintConstant;
- (void)_updateFocusRings;
- (void)_updateImageForBundleIdentifier:(BOOL)a0 crossfade:(BOOL)a1;
- (void)setBundleIdentifier:(id)a0 animated:(BOOL)a1;
- (void)setShowBadge:(BOOL)a0 animated:(BOOL)a1;

@end

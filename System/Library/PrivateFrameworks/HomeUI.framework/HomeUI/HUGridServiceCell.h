@class UILabel, UIView, HUVisualEffectContainerView, HFItem, HUGridServiceCellTextView, UIImageView, HUGridServiceCellLayoutOptions, UIColor, NSString, UIVisualEffectView, UIActivityIndicatorView, HUIconView;
@protocol NACancelable;

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol, HUIconRenouncing>

@property (retain, nonatomic) HUGridServiceCellTextView *serviceTextView;
@property (retain, nonatomic) UILabel *coloredDescriptionLabel;
@property (retain, nonatomic) UIVisualEffectView *descriptionLabelEffectView;
@property (nonatomic) BOOL hasUpdatedUISinceLastReuse;
@property (nonatomic) BOOL showingUpdatingState;
@property (nonatomic) BOOL showUpdatingStateAfterDelay;
@property (retain, nonatomic) id<NACancelable> showUpdatingStateAfterDelayToken;
@property (nonatomic) BOOL showingProgressIndicator;
@property (nonatomic) BOOL showProgressIndicatorAfterDelay;
@property (retain, nonatomic) id<NACancelable> showProgressIndicatorAfterDelayToken;
@property (retain, nonatomic) UIView *overrideAccessoryView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) HUVisualEffectContainerView *exclamationView;
@property (retain, nonatomic) HUVisualEffectContainerView *firmwareUpdateView;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UIImageView *supplementaryImageView;
@property (retain, nonatomic) HFItem *serviceItem;
@property (retain, nonatomic) HUGridServiceCellLayoutOptions *layoutOptions;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL shouldColorDescription;
@property (retain, nonatomic) UIColor *defaultNameTextColor;
@property (retain, nonatomic) UIColor *defaultDescriptionColor;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic) BOOL shouldShowLoadingState;
@property (nonatomic) BOOL shouldShowRoomName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_iconTintColor;
+ (Class)layoutOptionsClass;

- (id)initWithCoder:(id)a0;
- (void)setItem:(id)a0;
- (void)_updateAccessoryView;
- (id)item;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateText;
- (void)dragStateDidChange:(long long)a0;
- (id)_backgroundColorForSupplementaryIcon;
- (void)_createExclamationViewIfNecessary;
- (void)_createFirmwareUpdateViewIfNecessary;
- (id)_descriptionTextAttributesWithColor:(id)a0;
- (void)_setupCommonServiceCell;
- (void)_setupServiceCell;
- (id)_textConfiguration;
- (void)_updateExclamationViewColor;
- (void)_updateIconAnimated:(BOOL)a0;
- (void)_updateSecondaryContentDisplayStyle;
- (void)_updateSupplementaryImageViewIfNecessary;
- (void)displayStyleDidChange;
- (void)layoutOptionsDidChange;
- (void)reclaimIconIfPossible;
- (void)renounceIcon;
- (void)updateUIWithAnimation:(BOOL)a0;

@end

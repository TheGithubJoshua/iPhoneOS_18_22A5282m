@class SFContactImage;

@interface SearchUIContactsThumbnailView : CNAvatarView

@property (retain, nonatomic) SFContactImage *contactImage;
@property (nonatomic) BOOL useCompactDisplay;
@property (nonatomic) BOOL forcePressViewIsEntireEnclosingCell;
@property (nonatomic) BOOL usesCompactWidth;

+ (id)avatarSettings;
+ (void)clearAvatarSettings;

- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setContactImage:(id)a0 useCompactDisplay:(BOOL)a1;
- (void)updateForcePressView;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;

@end

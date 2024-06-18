@class UIView, NSString, NSArray, UIImage, TabBar, UIImageView, UIButton, UIHoverGestureRecognizer, SFAvatarStackView, SFUnreadIndicator, UIVisualEffectView, UILabel;

@interface TabBarItemView : UIView {
    UIVisualEffectView *_contentEffectsView;
    UIVisualEffectView *_borderEffectsView;
    UIVisualEffectView *_closeButtonEffectsView;
    UIView *_iconClipperView;
    UIView *_titleClipperView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    NSString *_titleText;
    TabBar *_tabBar;
    NSString *_truncatedTitleText;
    struct CGSize { double width; double height; } _truncatedTitleTextSize;
    BOOL _titleWasTruncated;
    UIImageView *_closeButtonImageView;
    UIView *_highlightView;
    UIHoverGestureRecognizer *_hoverRecognizer;
    SFAvatarStackView *_participantsView;
    SFUnreadIndicator *_unreadIndicator;
}

@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIButton *mediaStateMuteButton;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSArray *shareParticipants;
@property (nonatomic) long long visibleEdge;
@property (nonatomic) BOOL hidesTitleText;
@property (nonatomic) double titleLayoutWidth;
@property (nonatomic) long long titleAnchorEdge;
@property (nonatomic) double titleAnchorAdditionalOffset;
@property (nonatomic) double contentOffset;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutTitleLabel;
- (void)setTitleText:(id)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTabBar:(id)a0;
- (void)_hover:(id)a0;
- (BOOL)_hasRoomForIconAndCloseButton;
- (BOOL)_showsCloseButton;
- (BOOL)_isHovering;
- (BOOL)_canUseCachedTitleTruncationOnBoundsChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_closeButtonFrame;
- (double)_contentWidthIgnoringCollaborationViews;
- (long long)_iconPosition;
- (BOOL)_isHoveringOverCloseButton;
- (BOOL)_isPinnedAndNarrow;
- (void)_layOutParticipantsView;
- (void)_layOutUnreadIndicator;
- (void)_layoutCloseButton;
- (void)_layoutEdges;
- (void)_layoutMediaStateIndicator;
- (void)_layoutTitleClipperView;
- (void)_layoutTitleLabelUsingCachedTruncation;
- (long long)_physicalEdgeForLogicalEdge:(long long)a0;
- (void)_showOrHideCloseButton;
- (BOOL)_showsParticipants;
- (BOOL)_showsUnreadIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleBoundingBox;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleBounds;
- (id)_truncatedTitleWithFont:(id)a0 desiredWidth:(double)a1 truncatedSize:(struct CGSize { double x0; double x1; } *)a2;
- (void)_updateCloseButtonAlpha;
- (void)_updateCloseButtonEffect;
- (void)_updateCloseButtonImage;
- (void)_updateHighlightAlpha;
- (void)_updateIconViewVisibility;
- (void)_updateMediaStateButtonButtonAlpha;
- (void)_updateMediaStateIndicator;
- (void)_updateShowsParticipants;
- (void)_updateShowsUnreadIndicator;
- (void)configureForDragPreview;
- (void)updateTabBarStyle;
- (void)updateTitleTruncation;

@end
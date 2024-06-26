@class UIColor, NSString, PXRoundedCornerOverlayView, PXCMMPosterHeaderView, UIActivityIndicatorView, PXUpdater, PXCMMPosterBannerView;

@interface PXCMMPosterUIView : UIView {
    struct _NSRange { unsigned long long location; unsigned long long length; } _bannerHeadlineBoldRange;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    PXCMMPosterHeaderView *_headerView;
    long long _actionButtonType;
    id /* block */ _actionButtonAction;
    UIActivityIndicatorView *_activityIndicatorView;
    PXUpdater *_updater;
}

@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *statusString;
@property (copy, nonatomic) NSString *bannerHeadline;
@property (copy, nonatomic) NSString *bannerSubheadline;
@property (copy, nonatomic) UIColor *opaqueAncestorBackgroundColor;
@property (nonatomic) unsigned long long cornersToRound;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL needsBannerView;
@property (readonly, nonatomic) PXCMMPosterBannerView *bannerView;
@property (nonatomic) long long selectedCount;
@property (nonatomic) long long totalCount;
@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)willMoveToWindow:(id)a0;
- (id)_fontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1;
- (void)_updateBannerActionButton;
- (void)_updateBannerTitles;
- (void)_updateBannerView;
- (void)_updateCorners;
- (void)setActionButtonWithType:(long long)a0 actionBlock:(id /* block */)a1;
- (void)setAsset:(id)a0 mediaProvider:(id)a1;
- (void)setBannerHeadline:(id)a0 boldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end

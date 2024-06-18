@class SBIconProgressView, NSString, CAFilter, SBIcon, SBIconView, SBHIconImageCache, UIImage;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBHIconImageCacheObserver, SBReusableView, SBCrossfadingIconImageSource, BSDescriptionProviding> {
    CAFilter *_multiplyFilter;
    SBIconProgressView *_progressView;
    struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } _iconImageInfo;
    BOOL _hasSetIconImageInfo;
}

@property (copy, nonatomic) NSString *location;
@property (nonatomic) double overlayAlpha;
@property (readonly, nonatomic) SBIcon *icon;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) UIImage *displayedImage;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL showsSquareCorners;
@property (nonatomic, getter=isJittering) BOOL jittering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)didEndAsynchronousImageLoadForIcon:(id)a0;
- (id)_generateSquareContentsImage;
- (void)iconImageCache:(id)a0 didUpdateImageForIcon:(id)a1;
- (void)iconViewFolderIconImageCacheDidChange;
- (void)setProgressAlpha:(double)a0;
- (void)_updateOverlayAlpha;
- (void)iconViewLegibilitySettingsDidChange;
- (void)setProgressState:(long long)a0 paused:(BOOL)a1 percent:(double)a2 animated:(BOOL)a3;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (void)progressViewCanBeRemoved:(id)a0;
- (void)_updateProgressMask;
- (id)snapshot;
- (void)_clearProgressView;
- (void)updateImageAnimated:(BOOL)a0;
- (void)clearCachedImages;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)succinctDescription;
- (id)sourceView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)contentsImage;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)squareContentsImage;
- (void)prepareForReuse;
- (void)willBeginAsynchronousImageLoadForIcon:(id)a0;
- (void)iconImageDidUpdate:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)hasOpaqueImage;
- (void)dealloc;
- (void)clearIconImageInfo;
- (void)layoutSubviews;

@end

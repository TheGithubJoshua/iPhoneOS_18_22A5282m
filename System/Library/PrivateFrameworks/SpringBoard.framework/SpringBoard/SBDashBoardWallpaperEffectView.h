@class NSString, SBUIBackgroundView;

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView> {
    SBUIBackgroundView *_backgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (void)setCoverSheetWallpaperStyle:(long long)a0;
- (void)didAddSubview:(id)a0;
- (void)layoutSubviews;
- (id)initWithWallpaperVariant:(long long)a0 transformOptions:(unsigned long long)a1;

@end

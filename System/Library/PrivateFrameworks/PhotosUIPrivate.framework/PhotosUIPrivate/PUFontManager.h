@class UIFont;

@interface PUFontManager : PXObservable

@property (retain, nonatomic) UIFont *albumListTitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont;

- (id)init;
- (id)mutableChangeObject;
- (void)_setNeedsUpdate;
- (void)invalidateFonts;
- (void)_preferredContentSizeChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class UIImageView;

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UIImageView *_imageView;
}

- (void).cxx_destruct;
- (id)contentView;
- (double)loadingProgress;
- (long long)playbackStyle;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;

@end

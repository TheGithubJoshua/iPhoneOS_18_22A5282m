@class LPLinkView;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) LPLinkView *linkView;
@property (nonatomic) BOOL photosCarouselMode;
@property (nonatomic) BOOL customButtonMode;
@property (nonatomic) BOOL isCloseButtonOnLeadingEdge;

- (void)_updateContent;
- (void)contentDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)preferredContentSizeForSize:(long long)a0;

@end

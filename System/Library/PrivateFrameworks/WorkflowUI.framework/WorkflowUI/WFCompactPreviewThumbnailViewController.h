@class WFContentItem, UIView;

@interface WFCompactPreviewThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) WFContentItem *contentItem;
@property (weak, nonatomic) UIView *hostedView;

- (void)loadView;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)preferredContentMode;
- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0;
- (double)contentHeightForWidth:(double)a0;

@end

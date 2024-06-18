@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView

@property (readonly, nonatomic) SXGalleryItem *galleryItem;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithGalleryItem:(id)a0 imageResource:(id)a1 resourceDataSource:(id)a2 reachabilityProvider:(id)a3;

@end

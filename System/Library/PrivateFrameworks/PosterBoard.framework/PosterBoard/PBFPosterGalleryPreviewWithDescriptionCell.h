@class NSString, UILabel, PBFPosterGalleryViewSpec, PBFPosterGalleryPreviewView;
@protocol PBFPosterPreview;

@interface PBFPosterGalleryPreviewWithDescriptionCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    UILabel *_posterDescriptionLabel;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterViewFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterDescriptionLabelFrame; struct CGSize { double width; double height; } intrinsicContentSize; } _metrics;
    PBFPosterGalleryViewSpec *_spec;
}

@property (retain, nonatomic) NSString *posterDescription;
@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (id)spec;
- (void)layoutSubviews;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGSize { double x0; double x1; } x2; })metrics;
- (id)posterDescriptionLabel;

@end

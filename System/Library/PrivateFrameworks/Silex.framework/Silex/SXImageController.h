@class SXColumnLayout, NSMutableDictionary, NSDictionary, NSMutableOrderedSet, SXDocumentController;

@interface SXImageController : NSObject

@property (readonly, weak, nonatomic) SXDocumentController *documentController;
@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) NSDictionary *imageResourcesGroupedByImageIdentifier;
@property (readonly, nonatomic) NSDictionary *image2ResourcesGroupedByImageIdentifier;
@property (readonly, nonatomic) NSMutableOrderedSet *optimalImageResources;
@property (readonly, nonatomic) NSMutableDictionary *optimalImageResourcesByID;

- (void)prepareImageResources;
- (id)imageResourceForImageFill:(id)a0;
- (id)imageResourcesForImageIdentifier:(id)a0;
- (id)imageResourceForGalleryItem:(id)a0;
- (id)taggedEquivalentOfImageResource:(id)a0;
- (id)imageResourceForImageComponent:(id)a0;
- (id)imageResourceForIdentifier:(id)a0;
- (id)imageResourcesForComponent:(id)a0;
- (id)imageResourceForAudioComponent:(id)a0;
- (void)determineOptimalImagesForComponentStyles:(id)a0;
- (void)determineOptimalImagesForMetadata;
- (id)imageResourcesForGalleryComponent:(id)a0;
- (id)imageResourceForDataTableComponent:(id)a0;
- (id)imageResourcesForComponentStyle:(id)a0;
- (id)imageResourceForImageIdentifier:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageResourceForVideoComponent:(id)a0;
- (void)determineOptimalImagesForComponents:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeConstraintForComponent:(id)a0;
- (id)imageResourceForVideoFill:(id)a0;
- (id)Image2ResourcesForImageIdentifier:(id)a0;
- (id)allImageResources;
- (id)imageResourceForRepeatableImageFill:(id)a0;
- (id)imageResourceForScalableImageComponent:(id)a0;
- (id)largestImageResourceForImageIdentifier:(id)a0;
- (id)initWithDocumentController:(id)a0 columnCalculator:(id)a1;

@end

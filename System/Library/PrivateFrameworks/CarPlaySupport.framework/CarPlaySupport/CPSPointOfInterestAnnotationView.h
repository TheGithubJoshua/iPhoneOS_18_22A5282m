@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView

@property (retain, nonatomic) CPImageSet *imageSet;
@property (retain, nonatomic) CPImageSet *selectedImageSet;

+ (struct CGPath { } *)_createPathForBalloonRadius:(double)a0 tailLength:(double)a1;
+ (id)balloonWithText:(id)a0 traitCollection:(id)a1;

- (void)_configure;
- (void)setSelected:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateImage;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (id)_defaultPOI;

@end

@class NSArray, PXZoomablePhotosLayoutSpec;
@protocol PXZoomablePhotosUserDefaults;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (retain, nonatomic) id<PXZoomablePhotosUserDefaults> userDefaults;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) BOOL forceSaliency;

- (void).cxx_destruct;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (Class)specClass;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;

@end

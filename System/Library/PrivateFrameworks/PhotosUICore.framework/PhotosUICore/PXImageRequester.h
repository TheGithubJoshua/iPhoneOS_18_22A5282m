@class NSString, UIImage, PXImageRequest, NSError;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXImageRequester : PXObservable <PXMutableImageRequester> {
    struct { BOOL targetSize; BOOL imageRequest; BOOL isInCloud; } _needsUpdateFlags;
}

@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage;
@property (retain, nonatomic, setter=_setCurrentImageSourceAsset:) id<PXDisplayAsset> _currentImageSourceAsset;
@property (nonatomic, setter=_setHasFullQuality:) BOOL hasFullQuality;
@property (nonatomic, setter=_setIsInCloud:) BOOL isInCloud;
@property (retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest;
@property (nonatomic, setter=_setTargetSize:) struct CGSize { double width; double height; } _targetSize;
@property (nonatomic, setter=_setLoadingProgress:) double loadingProgress;
@property (retain, nonatomic) NSError *loadingError;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumRequestSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredContentsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) long long downloadIntent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOptions;

- (void)_updateTargetSizeIfNeeded;
- (void)_invalidateTargetSize;
- (void)setMediaProvider:(id)a0;
- (void)_updateIfNeeded;
- (id)init;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)setScale:(double)a0;
- (id)mutableChangeObject;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAsset:(id)a0;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateImageRequest;
- (void)setDownloadIntent:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePreloadedImage:(id)a0;
- (void)_cancelRequests;
- (void)_handleProgressForImageRequest:(id)a0 progress:(double)a1;
- (void)_handleResultOfImageRequest:(id)a0 image:(id)a1 info:(id)a2;
- (void)_invalidateIsInCloud;
- (void)_updateImageRequestIfNeeded;
- (void)_updateIsInCloudIfNeeded;
- (void)handlePreloadedImageRequester:(id)a0;
- (id)initWithMediaProvider:(id)a0 asset:(id)a1;
- (void)setDesiredContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaximumRequestSize:(struct CGSize { double x0; double x1; })a0;
- (void)setViewportSize:(struct CGSize { double x0; double x1; })a0;

@end

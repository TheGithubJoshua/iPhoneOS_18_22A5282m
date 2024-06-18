@class NSString, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImage;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImageThumbnail;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    _Atomic long long _prefetchingCoalescingDelay;
    double _prefetchedImageLuminance;
    NSURL *_imageURL;
    long long _appearance;
    NSMutableDictionary *_backgroundImageIdentifierToImage;
    NSMutableDictionary *_backgroundImageIdentifierToLuminance;
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *m_ptr; } image;
@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *x0; } prefetchedImageThumbnail;
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ciColorKernel;
+ (void)warmUp;

- (id)ciContext;
- (long long)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (struct RetainPtr<CGImage *> { void *x0; })normalizeImage:(struct RetainPtr<CGImage *> { void *x0; })a0 imageSource:(struct RetainPtr<CGImageSource> { void *x0; })a1 properties:(id)a2;
- (long long)appearanceIfImageExists:(BOOL)a0;
- (struct RetainPtr<CGImage *> { void *x0; })thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1 forIdentifier:(id)a2;
- (void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> { void *x0; })a0 forImageIdentifier:(id)a1 isNonGlobalBackgroundImage:(BOOL)a2;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (struct RetainPtr<CGImage *> { void *x0; })imageForIdentifier:(id)a0;
- (void)_setExtendedAttributesOnBackgroundImage;
- (void)commitPrefetchedImageWithLuminance:(double)a0 forIdentifier:(id)a1;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)clearPrefetchedImage;
- (BOOL)hasTabGroupSpecificBackgroundImage:(id)a0;
- (void)_deleteImageWithIdentifier:(id)a0;
- (long long)appearanceForImageWithIdentifier:(id)a0;
- (void)loadImageFromDiskForIdentifier:(id)a0;
- (void)processImageForIdentifier:(id)a0;
- (void)clearImage;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (long long)appearanceForLuminance:(double)a0;
- (void)_clearPrefetchedImage;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)a0;
- (void)clearImageWithIdentifier:(id)a0;
- (void)_processImageForIdentifier:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 getAppearance:(long long *)a3 luminance:(double *)a4;
- (void)_updateThumbnailIfNeeded;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(long long)a1 luminance:(double)a2 forIdentifier:(id)a3;
- (id)initWithImageURL:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })assignImage:(struct RetainPtr<CGImage *> { void *x0; })a0 oldImage:(struct RetainPtr<CGImage *> { void *x0; })a1;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(long long)a1 luminance:(double)a2 forIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)a0;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1 forIdentifier:(id)a2;

@end

@class PFVideoAdjustments, NSSet, NSString, NSData, UIColor, NSDate, NSNumber;
@protocol PXDisplayAsset;

@interface PXSyntheticAsset : NSObject <PXStoryDisplayAssetResource, PXMutableSyntheticAsset, PXDisplayAsset, NSSecureCoding, PXLayoutItemInput>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<PXDisplayAsset> px_storyResourceDisplayAsset;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } px_storyResourceFetchBestPlaybackRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } px_storyResourceFetchBestPlaybackRect;
@property (readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property (readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property (readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property (readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property (readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bestPlaybackRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceAreaRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } preferredCropAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } acceptableCropAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bestPlaybackAssetRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceAreaAssetRect;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) NSString *serializableDescription;
@property (readonly, copy, nonatomic) NSSet *sceneClassifications;
@property (readonly, nonatomic) double curationScore;
@property (readonly, nonatomic) long long faceCount;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *localizedGeoDescription;
@property (copy, nonatomic) NSDate *localCreationDate;
@property (nonatomic) float audioScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, nonatomic) long long originalFileSize;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } livePhotoVideoDuration;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) unsigned long long thumbnailVersion;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) unsigned long long burstSelectionTypes;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } positionOffset;

+ (id)syntheticAssetWithSerializableDescription:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)photoLibrary;
- (id)init;
- (void)setTintColor:(id)a0;
- (BOOL)hasAdjustments;
- (void)setPreferredCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfiguration:(id /* block */)a0;
- (void)setLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAcceptableCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)localIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)weightUsingCriterion:(long long)a0;
- (void)setCurationScore:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatio:(double)a0 verticalContentMode:(long long)a1 cropMode:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestCropRectForAspectRatioV2:(double)a0 verticalContentMode:(long long)a1 cropMode:(long long)a2;
- (long long)isContentEqualTo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0 withFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })suggestedCropForTargetSize:(struct CGSize { double x0; double x1; })a0 withOcclusionRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOutputCropScore:(double *)a2;
- (void)setFaceCount:(long long)a0;
- (void)setMediaSubtypes:(unsigned long long)a0;
- (void)setPlaybackStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropAssetRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRectFromCropAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAcceptableCropAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBestPlaybackAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBestPlaybackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFaceAreaAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFaceAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPreferredCropAssetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSceneClassifications:(id)a0;
- (id)vcp_fingerprint:(id)a0;

@end
@class UTType, NSString, NSURL, NSDate, NSArray, NSData, NSDictionary, PFTimeZoneLookup, NSTimeZone, CLLocation, NSNumber, PFMetadataCore;

@interface PFMetadata : NSObject <PFMetadata> {
    PFMetadataCore *_internalMetadata;
}

@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup;
@property (readonly, nonatomic) unsigned char detail;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *originalFileName;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *fileCreationDate;
@property (readonly, nonatomic) NSDate *fileModificationDate;
@property (readonly, nonatomic) UTType *contentType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } exifPixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientedPixelSize;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) NSDictionary *fileSystemProperties;
@property (readonly, nonatomic) NSDate *utcCreationDate;
@property (readonly, nonatomic) long long creationDateSource;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *creationDateString;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) NSNumber *timeZoneOffset;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *captionAbstract;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *spatialOverCaptureIdentifier;
@property (readonly, nonatomic) BOOL isSpatialOverCapture;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, nonatomic) NSString *renderOriginatingAssetIdentifier;
@property (readonly, nonatomic) CLLocation *gpsLocation;
@property (readonly, nonatomic) NSNumber *latitude;
@property (readonly, nonatomic) NSNumber *longitude;
@property (readonly, nonatomic) NSString *artworkContentDescription;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSDictionary *syndicationProperties;
@property (readonly, nonatomic) BOOL isSyndicationOriginated;
@property (readonly, nonatomic) BOOL isMonoskiMedia;
@property (readonly, nonatomic) NSNumber *playbackVariation;
@property (readonly, nonatomic) NSDictionary *cgImageProperties;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGImageSource { } *imageSource;
@property (readonly, nonatomic) struct CGImageMetadata { } *cgImageMetadata;
@property (readonly, nonatomic) NSNumber *altitude;
@property (readonly, nonatomic) NSNumber *speed;
@property (readonly, nonatomic) NSString *speedRef;
@property (readonly, nonatomic) NSNumber *gpsHPositioningError;
@property (readonly, nonatomic) NSNumber *imageDirection;
@property (readonly, nonatomic) NSString *imageDirectionRef;
@property (readonly, nonatomic) NSDate *gpsDateTime;
@property (readonly, nonatomic) BOOL isDeferredPhotoProxy;
@property (readonly, nonatomic) BOOL hasCustomRendered;
@property (readonly, nonatomic) long long customRendered;
@property (readonly, nonatomic) BOOL isPortrait;
@property (readonly, nonatomic) NSArray *focusPoints;
@property (readonly, nonatomic) NSNumber *focusMode;
@property (readonly, nonatomic) NSNumber *focusDistance;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly, nonatomic) NSNumber *flashValue;
@property (readonly, nonatomic) NSNumber *flashCompensation;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSNumber *exposureTime;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *whiteBalanceIndex;
@property (readonly, nonatomic) NSNumber *lightSource;
@property (readonly, nonatomic) NSNumber *fNumber;
@property (readonly, nonatomic) NSNumber *brightness;
@property (readonly, nonatomic) NSNumber *colorSpace;
@property (readonly, nonatomic) NSString *lensMake;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *lensMinimumMM;
@property (readonly, nonatomic) NSNumber *lensMaximumMM;
@property (readonly, nonatomic) NSString *cameraSerialNumber;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *firmware;
@property (readonly, nonatomic) NSString *burstUuid;
@property (readonly, nonatomic) NSString *groupingUuid;
@property (readonly, nonatomic) NSString *deferredPhotoProcessingIdentifier;
@property (readonly, nonatomic) NSString *imageCaptureRequestIdentifier;
@property (readonly, nonatomic) NSString *photoProcessingIdentifier;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) id hdrGainMap;
@property (readonly, nonatomic) BOOL hasHDRGainMap;
@property (readonly, nonatomic) NSNumber *hdrGainMapPercentageValue;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) NSString *profileName;
@property (readonly, nonatomic) NSNumber *GIFDelayTime;
@property (readonly, nonatomic) unsigned long long photoProcessingFlags;
@property (readonly, nonatomic) NSString *portraitInLandscapeCamera;
@property (readonly, nonatomic) BOOL isPhotoBooth;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) NSString *userComment;
@property (readonly, nonatomic) NSString *defaultProfileName;
@property (readonly, nonatomic) NSNumber *semanticStyleToneBias;
@property (readonly, nonatomic) NSNumber *semanticStyleWarmthBias;
@property (readonly, nonatomic) NSNumber *semanticStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *semanticStylePreset;
@property (readonly, nonatomic) BOOL isFrontFacingCamera;
@property (readonly, nonatomic) BOOL isAutoloop;
@property (readonly, nonatomic) BOOL isMirror;
@property (readonly, nonatomic) BOOL isLongExposure;
@property (readonly, nonatomic) BOOL isAutoLivePhoto;
@property (readonly, nonatomic) float livePhotoVitalityScore;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSNumber *durationTimeInterval;
@property (readonly, nonatomic) NSNumber *nominalFrameRate;
@property (readonly, nonatomic) NSNumber *videoDataRate;
@property (readonly, nonatomic) NSNumber *audioDataRate;
@property (readonly, nonatomic) NSNumber *audioSampleRate;
@property (readonly, nonatomic) NSNumber *audioTrackFormat;
@property (readonly, nonatomic) NSNumber *audioTrackFormatFlags;
@property (readonly, nonatomic) NSString *codecFourCharCode;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSString *videoCodecName;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *captureMode;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) BOOL isActionCam;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isProRes;
@property (readonly, nonatomic) NSString *montageString;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } stillImageDisplayTime;
@property (readonly, nonatomic) NSNumber *livePhotoMinimumClientVersion;
@property (readonly, nonatomic) BOOL isCinematicVideo;
@property (readonly, nonatomic) UTType *contentTypeFromFastModernizeVideoMedia;

+ (BOOL)parseISO6709String:(id)a0 outLatitude:(double *)a1 outLongitude:(double *)a2;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescriptionForAsset:(id)a0;
+ (struct opaqueCMFormatDescription { } *)formatDescriptionForAsset:(id)a0;
+ (id)exifTimezoneOffsetFromDateString:(id)a0 offsetInSeconds:(long long *)a1;
+ (id)primaryVideoTrackForAsset:(id)a0;
+ (id)primaryAudioTrackForAsset:(id)a0;
+ (id)defaultOptionsForCGImageSource;

- (id)sourceTypeName;
- (void)setKeysAndValues:(id)a0 inDictionary:(id)a1;
- (id)initWithAVAsset:(id)a0 detail:(unsigned char)a1 timeZoneLookup:(id)a2;
- (id)initWithAVURL:(id)a0 detail:(unsigned char)a1 timeZoneLookup:(id)a2;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)makerCanonDictionary;
- (BOOL)_respondsToSelector:(SEL)a0;
- (id)jsonFormattedDescriptionWithError:(id *)a0;
- (id)tiffDictionary;
- (id)iptcDictionary;
- (id)exifDictionary;
- (id)initWithEncodedImagePropertyData:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)plistForEncoding;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)jsonDictionary;
- (id)initWithMediaURL:(id)a0 detail:(unsigned char)a1 timeZoneLookup:(id)a2 shouldCache:(BOOL)a3;
- (void).cxx_destruct;
- (id)initForLimitedPropertiesWithPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)exifAuxDictionary;
- (id)initWithImageURL:(id)a0 contentType:(id)a1 options:(id)a2 detail:(unsigned char)a3 timeZoneLookup:(id)a4 cacheImageSource:(BOOL)a5 cacheImageData:(BOOL)a6;
- (id)makerNikonDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fixupGPSWithDate:(id)a0 time:(id)a1;
- (id)propertyListRepresentationData;
- (id)initWithImageData:(id)a0 contentType:(id)a1 options:(id)a2 detail:(unsigned char)a3 timeZoneLookup:(id)a4 cacheImageSource:(BOOL)a5 cacheImageData:(BOOL)a6;
- (id)initWithImageSource:(struct CGImageSource { } *)a0 contentType:(id)a1 options:(id)a2 detail:(unsigned char)a3 timeZoneLookup:(id)a4 cacheImageSource:(BOOL)a5;
- (id)gpsDictionary;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithSyndicationProperties:(id)a0;
- (void)setFileSystemProperties:(id)a0;
- (id)initWithImageProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)initWithPropertyListRepresentationData:(id)a0 timeZoneLookup:(id)a1;
- (id)makerAppleDictionary;

@end
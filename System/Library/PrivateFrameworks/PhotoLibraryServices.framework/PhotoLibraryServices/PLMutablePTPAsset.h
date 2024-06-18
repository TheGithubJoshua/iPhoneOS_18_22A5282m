@class NSString, PLPTPAssetHandle, NSData, UTType, NSNumber;

@interface PLMutablePTPAsset : PLPTPAsset

@property (copy, nonatomic) NSData *event;
@property (copy, nonatomic) PLPTPAssetHandle *assetHandle;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *createdFilename;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *fullDirectoryPath;
@property (nonatomic, getter=isExifAvailable) BOOL exifAvailable;
@property (copy, nonatomic) NSNumber *objectCompressedSize;
@property (copy, nonatomic) NSString *fingerprint;
@property (copy, nonatomic) NSString *originatingAssetID;
@property (copy, nonatomic) NSNumber *thumbOffset;
@property (copy, nonatomic) NSNumber *thumbCompressedSize;
@property (nonatomic) struct CGSize { double x0; double x1; } imagePixSize;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbPixSize;
@property (nonatomic) long long desiredOrientation;
@property (copy, nonatomic) NSString *modificationDateString;
@property (copy, nonatomic) NSString *captureDateString;
@property (copy, nonatomic) NSString *durationString;
@property (copy, nonatomic) NSString *locationString;
@property (copy, nonatomic) NSString *groupUUID;
@property (copy, nonatomic) NSString *spatialOverCaptureGroupIdentifier;
@property (copy, nonatomic) NSString *burstUUID;
@property (nonatomic, getter=isBurstPicked) BOOL burstPicked;
@property (nonatomic, getter=isBurstFavorite) BOOL burstFavorite;
@property (nonatomic, getter=isBurstFirstPicked) BOOL burstFirstPicked;
@property (nonatomic, getter=isHighFrameRateVideo) BOOL highFrameRateVideo;
@property (nonatomic, getter=isTimeLapseVideo) BOOL timeLapseVideo;
@property (copy, nonatomic) NSString *relatedUUID;
@property (nonatomic) long long conversionGroup;
@property (nonatomic) unsigned int videoCodec;
@property (retain, nonatomic) UTType *contentType;

- (void)setFingerprint:(id)a0;
- (void)setDeleted:(BOOL)a0;
- (void)setContentType:(id)a0;
- (void)setFilename:(id)a0;
- (void)setEvent:(id)a0;
- (void)setVideoCodec:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGroupUUID:(id)a0;
- (void)setLocationString:(id)a0;
- (void)setOriginalFilename:(id)a0;
- (void)setAssetHandle:(id)a0;
- (void)setThumbOffset:(id)a0;
- (void)setBurstPicked:(BOOL)a0;
- (void)setRelatedUUID:(id)a0;
- (void)setBurstFavorite:(BOOL)a0;
- (void)setBurstFirstPicked:(BOOL)a0;
- (void)setBurstUUID:(id)a0;
- (void)setCaptureDateString:(id)a0;
- (void)setConversionGroup:(long long)a0;
- (void)setCreatedFilename:(id)a0;
- (void)setDesiredOrientation:(long long)a0;
- (void)setDurationString:(id)a0;
- (void)setExifAvailable:(BOOL)a0;
- (void)setFullDirectoryPath:(id)a0;
- (void)setHighFrameRateVideo:(BOOL)a0;
- (void)setImagePixSize:(struct CGSize { double x0; double x1; })a0;
- (void)setModificationDateString:(id)a0;
- (void)setObjectCompressedSize:(id)a0;
- (void)setOriginatingAssetID:(id)a0;
- (void)setSpatialOverCaptureGroupIdentifier:(id)a0;
- (void)setThumbCompressedSize:(id)a0;
- (void)setThumbPixSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTimeLapseVideo:(BOOL)a0;

@end
@class NSURL, NSMutableDictionary, NSNumber, NSDate, NSObject, NSDictionary, NSTimeZone, NSMutableArray, NSString, NSSet, PHImportAssetFilePresenter, PFMetadata, AVAssetImageGenerator, NSData, NSArray, UTType, PHImportSource;
@protocol OS_dispatch_queue;

@interface PHImportAsset : NSObject <PHImportDuplicateCheckerItem> {
    PHImportSource *_strongSource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metadataLock;
    NSDictionary *_userMetadata;
    NSDictionary *_userInfo;
    NSString *_basenameForOriginalAdjustment;
}

@property (nonatomic) BOOL treatAsUnsupportedRAW;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (retain, nonatomic) PFMetadata *metadata;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadSidecars;
@property (nonatomic) BOOL sidecarsLoaded;
@property (retain, nonatomic) NSString *importIdentifier;
@property (retain, nonatomic) PHImportAssetFilePresenter *filePresenter;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *parentFolderPath;
@property (retain, nonatomic) UTType *contentType;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *createdFileName;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSDate *fileCreationDate;
@property (retain, nonatomic) NSDate *fileModificationDate;
@property (retain, nonatomic) NSString *fileExtension;
@property (nonatomic) unsigned long long copyMethod;
@property (retain, nonatomic) NSData *fileData;
@property (nonatomic) unsigned char fileLocation;
@property (readonly, weak, nonatomic) PHImportSource *source;
@property (nonatomic) long long resourceType;
@property (nonatomic) unsigned long long resourceSubType;
@property (retain, nonatomic) NSMutableDictionary *sidecarAssetsByType;
@property (retain, nonatomic) NSMutableArray *relatedBurstAssets;
@property (retain, nonatomic) PHImportAsset *burstPick;
@property (readonly, nonatomic) NSArray *sidecarAssets;
@property (retain, nonatomic) NSDictionary *customAssetProperties;
@property (readonly, nonatomic) NSObject *redactedFileNameDescription;
@property (readonly, nonatomic) id representedObject;
@property (readonly, nonatomic) unsigned long long approximateBytesRequiredToImport;
@property (readonly, nonatomic) NSSet *duplicateAssets;
@property (retain, nonatomic) PHImportAsset *rawAsset;
@property (retain, nonatomic) PHImportAsset *videoComplement;
@property (retain, nonatomic) PHImportAsset *largeRender;
@property (retain, nonatomic) PHImportAsset *largeMovieRender;
@property (retain, nonatomic) PHImportAsset *spatialOverCapture;
@property (retain, nonatomic) PHImportAsset *base;
@property (retain, nonatomic) PHImportAsset *thumbnailRender;
@property (retain, nonatomic) PHImportAsset *miniRender;
@property (retain, nonatomic) PHImportAsset *audioAsset;
@property (readonly, nonatomic) unsigned long long assetSizeIncludingRelatedAssets;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } exifPixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientedPixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } transformedPixelSize;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) NSString *burstUUID;
@property (readonly, nonatomic) NSNumber *durationTimeInterval;
@property (readonly, nonatomic) NSString *cameraMake;
@property (readonly, nonatomic) NSString *cameraModel;
@property (readonly, nonatomic) NSString *formattedCameraModel;
@property (readonly, nonatomic) NSString *lensModel;
@property (readonly, nonatomic) NSNumber *flashFired;
@property (readonly, nonatomic) NSNumber *whiteBalance;
@property (readonly, nonatomic) NSNumber *meteringMode;
@property (readonly, nonatomic) NSNumber *iso;
@property (readonly, nonatomic) NSNumber *focalLength;
@property (readonly, nonatomic) NSNumber *focalLengthIn35mm;
@property (readonly, nonatomic) NSNumber *digitalZoomRatio;
@property (readonly, nonatomic) NSNumber *exposureBias;
@property (readonly, nonatomic) NSNumber *fNumber;
@property (readonly, nonatomic) NSNumber *exposureTime;
@property (readonly, nonatomic) NSString *codec;
@property (readonly, nonatomic) NSNumber *fps;
@property (readonly, nonatomic) NSNumber *sampleRate;
@property (readonly, nonatomic) NSNumber *bitrate;
@property (readonly, nonatomic) NSNumber *trackFormat;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSSet *keywordTitles;
@property (readonly, nonatomic) NSString *assetDescription;
@property (readonly, nonatomic) NSString *accessibilityDescription;
@property (readonly, nonatomic) BOOL isViewable;
@property (readonly, nonatomic) BOOL isTagged;
@property (readonly, nonatomic) BOOL canReference;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL hasAudioAttachment;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isSloMo;
@property (readonly, nonatomic) BOOL isAudio;
@property (readonly, nonatomic) BOOL isJPEG;
@property (readonly, nonatomic) BOOL isJPEG2000;
@property (readonly, nonatomic) BOOL isRAW;
@property (readonly, nonatomic) BOOL isJpegPlusRAW;
@property (readonly, nonatomic) BOOL isTIFF;
@property (readonly, nonatomic) BOOL isHEIF;
@property (readonly, nonatomic) BOOL isGIF;
@property (readonly, nonatomic) BOOL isPNG;
@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPSD;
@property (readonly, nonatomic) BOOL isAVCHD;
@property (readonly, nonatomic) BOOL isSidecar;
@property (readonly, nonatomic) BOOL isTimelapse;
@property (readonly, nonatomic) BOOL isHDR;
@property (readonly, nonatomic) BOOL isSDOF;
@property (readonly, nonatomic) BOOL isBurst;
@property (readonly, nonatomic) BOOL isGrouped;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (readonly) id avchdAssetId;
@property (readonly) id originatingAssetID;
@property (readonly) id fingerprint;
@property (readonly) id nameKey;
@property (readonly) id sizeKey;
@property (readonly) NSDate *dateKey;
@property BOOL isDuplicate;
@property (retain) NSDate *lastDuplicateCheck;
@property (retain) NSMutableDictionary *duplicates;
@property unsigned char duplicateStateConfidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetFileForURL:(id)a0 source:(id)a1;
+ (id)assetFileForURL:(id)a0 source:(id)a1 withUuid:(id)a2;
+ (void)determineIfTIFFIsRAW:(id)a0 url:(id)a1;
+ (BOOL)directoryExists:(id)a0;
+ (BOOL)fileExists:(id)a0;
+ (BOOL)isOriginalAdjustmentData:(id)a0;
+ (BOOL)isValidAsSidecar:(id)a0;
+ (id)loadDatesForAssetSequence:(id)a0 atEnd:(id /* block */)a1;
+ (id)loadDatesForAssets:(id)a0 atEnd:(id /* block */)a1;
+ (void)logImageDateFileDateDifferencesForAsset:(id)a0;

- (BOOL)isPrimary;
- (id)initWithSource:(id)a0;
- (BOOL)hasAdjustments;
- (void)setUserInfo:(id)a0;
- (id)livePhotoPairingIdentifier;
- (id)spatialOverCaptureIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setMetadata:(id)a0;
- (BOOL)isSpatialOverCapture;
- (id)userInfo;
- (struct CGSize { double x0; double x1; })cropEXIFThumbSize:(struct CGSize { double x0; double x1; })a0 originalSize:(struct CGSize { double x0; double x1; })a1;
- (void)_accessMetadata:(id /* block */)a0;
- (void)_addRelatedRecordsToRecord:(id)a0 primaryRecord:(id)a1;
- (BOOL)_loadMetadataIfNecessaryForURL:(id)a0 detail:(unsigned char)a1;
- (void)_loadSidecarFiles;
- (void)addBurstAsset:(id)a0;
- (void)addSidecarAsset:(id)a0;
- (id)adjustmentSidecar;
- (struct CGImage { } *)avThumbnailOfSize:(unsigned long long)a0 canceler:(id)a1 error:(id *)a2;
- (id)basenameForOriginalAdjustmentData;
- (int)burstPickType;
- (BOOL)canPreserveFolderStructure;
- (struct CGSize { double x0; double x1; })cgImageSize;
- (id)checkForSidecarWithExtension:(id)a0;
- (void)configureSidecarTypeForExtension:(id)a0;
- (BOOL)configureWithContentType:(id)a0 supportedMediaType:(unsigned char)a1;
- (id)copyFromURL:(id)a0 toURL:(id)a1;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)descriptionWithPrefix:(id)a0;
- (id)duplicateAssetsForLibrary:(id)a0;
- (id)groupingUUID;
- (BOOL)hasOriginalResourceType;
- (struct CGImage { } *)imageThumbnailOfSize:(unsigned long long)a0 canceler:(id)a1 error:(id *)a2;
- (id)importRecordForPrimaryAsset;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (BOOL)isAppropriateForUI;
- (BOOL)isBase;
- (BOOL)isEqualToImportAsset:(id)a0;
- (BOOL)isOriginalAdjustmentData;
- (BOOL)isRender;
- (BOOL)isRepresentation;
- (BOOL)isValidForReference;
- (BOOL)isVideoComplementOf:(id)a0;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)loadMetadataSync;
- (void)loadSidecarFiles;
- (id)makeImportIdentifier;
- (id)originalAdjustmentSidecar;
- (BOOL)performAdditionalLivePhotoChecksOnImageAsset:(id)a0;
- (id)relatedAssets;
- (unsigned long long)relatedBytes;
- (struct CGImage { } *)removeBlackBarsFromExifThumbnail:(struct CGImage { } *)a0 fullSize:(struct CGSize { double x0; double x1; })a1;
- (void)removeSidecarAsset:(id)a0;
- (id)resourceTypes;
- (void)setDuplicates:(id)a0 forLibrary:(id)a1;
- (void)setUserMetadata:(id)a0;
- (BOOL)shouldPreserveUUID;
- (unsigned long long)sidecarAssetBytes;
- (id)sidecarInfoDictionaries;
- (id)sidecarInfoDictionary;
- (id)slmSidecar;
- (id)stripMarkerFromName:(id)a0 markerLocation:(unsigned long long)a1;
- (void)takeAsVideoComplement:(id)a0;
- (id)thumbnailForSize:(unsigned long long)a0 atEnd:(id /* block */)a1;
- (id)thumbnailForSize:(unsigned long long)a0 priority:(unsigned char)a1 atEnd:(id /* block */)a2;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (void)updateIsRAW:(BOOL)a0 contentType:(id)a1;
- (id)userMetadata;
- (id)validateMetadataForImportRecord:(id)a0;
- (id)xmpSidecar;

@end
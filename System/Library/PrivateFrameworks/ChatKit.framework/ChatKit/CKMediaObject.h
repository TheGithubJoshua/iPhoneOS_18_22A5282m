@class NSData, NSString, NSURL, UITraitCollection, CKMessageContext, NSDate, NSDictionary, NSObject;
@protocol CKFileTransfer, OS_dispatch_group;

@interface CKMediaObject : NSObject <QLPreviewItem>

@property (readonly, copy, nonatomic) NSString *previewFilenameExtension;
@property (readonly, copy, nonatomic) id previewMetadata;
@property (retain, nonatomic) id<CKFileTransfer> transfer;
@property (retain, nonatomic) NSURL *cachedHighQualityFileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *highQualityFetchInProgressGroup;
@property (copy, nonatomic) CKMessageContext *messageContext;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (nonatomic) BOOL cachedValidPreviewExists;
@property (copy, nonatomic) NSURL *alternateShareURL;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL forceInlinePreviewGeneration;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *UTIType;
@property (readonly, nonatomic) int mediaType;
@property (readonly, nonatomic) BOOL canShareItem;
@property (readonly, nonatomic) BOOL needsAnimation;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSString *metricsCollectorMediaType;
@property (readonly, nonatomic) long long commSafetySensitive;
@property (readonly, nonatomic) BOOL generatePreviewOutOfProcess;
@property (readonly, nonatomic) BOOL validatePreviewFormat;
@property (readonly, nonatomic) BOOL isPhotosCompatible;
@property (retain, nonatomic) UITraitCollection *transcriptTraitCollection;
@property (retain, nonatomic) NSDate *time;
@property (readonly, nonatomic) BOOL shouldSuppressPreview;
@property (readonly, nonatomic) BOOL supportsUnknownSenderPreview;
@property (readonly, nonatomic) NSString *syndicationIdentifier;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconCache;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (BOOL)canGeneratePreviewInMVSHostProcess;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)mediaClasses;
+ (BOOL)shouldScaleUpPreview;
+ (BOOL)shouldShadePreview;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (id)icon;
- (BOOL)isDirectory;
- (id)location;
- (id)subtitle;
- (id)fileManager;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)title;
- (id)_transcodeControllerSharedInstance;
- (BOOL)canExport;
- (id)ASTCDataFromImage:(id)a0;
- (id)JPEGDataFromImage:(id)a0;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (id)_balloonViewForClassWithWidth:(double)a0 orientation:(char)a1;
- (id)_composeImageForBalloonView:(id)a0 colorType:(char)a1 traitCollection:(id)a2;
- (id)_generateIconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })_previewConstraintsForWidth:(double)a0;
- (id)_qlThumbnailGeneratorSharedGenerator;
- (void)_sampleImageEdges:(id)a0 usingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forMostlyWhitePixels:(unsigned long long *)a2 otherPixels:(unsigned long long *)a3;
- (BOOL)_shouldDenyUTITypeFromRichIcon;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })bbSize;
- (void)cacheAndPersistPreview:(id)a0 orientation:(char)a1;
- (BOOL)canPerformQuickAction;
- (id)composeImagesForEntryContentViewWidth:(double)a0 traitCollection:(id)a1;
- (double)defaultPreviewWidth;
- (void)fetchHighQualityFile:(id /* block */)a0;
- (id)fileSizeString;
- (void)generateOOPPreviewForWidth:(double)a0 orientation:(char)a1;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)image:(id)a0 withBackgroundColor:(id)a1;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;
- (Class)inlineStickerBalloonViewClass;
- (id)invisibleInkEffectImageWithPreview:(id)a0;
- (BOOL)isPreviewable;
- (BOOL)isPromisedItem;
- (id)pasteboardItemProvider;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (id)previewCachesFileURLWithOrientation:(char)a0 extension:(id)a1 generateIntermediaries:(BOOL)a2;
- (id)previewDispatchCache;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (void)prewarmPreviewForWidth:(double)a0 orientation:(char)a1;
- (id)richIcon;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)savePreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;
- (struct CGSize { double x0; double x1; })transcoderGeneratedSizeForConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a0;
- (BOOL)transcoderPreviewGenerationFailed;
- (struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })transcodingPreviewConstraints;
- (struct CGSize { double x0; double x1; })transcodingPreviewPxSize;
- (BOOL)validPreviewExistsAtURL:(id)a0;

@end
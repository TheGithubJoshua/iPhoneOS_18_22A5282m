@class NSString, TSDInfoGeometry, TSDMediaStyle, TSDMaskInfo, TSDBezierPath, NSObject, TSDImageAdjustments, TSPData, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo> {
    BOOL mInterpretsUntaggedImageDataAsGeneric;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDBezierPath *mTracedPath;
    struct CGSize { double width; double height; } mNaturalSize;
}

@property (retain, nonatomic) TSPData *imageData;
@property (retain, nonatomic) TSPData *thumbnailImageData;
@property (retain, nonatomic) TSPData *originalImageData;
@property (nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (readonly, nonatomic) TSDMediaStyle *imageStyle;
@property (retain, nonatomic) TSDMaskInfo *maskInfo;
@property (retain, nonatomic) TSDBezierPath *instantAlphaPath;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments;
@property (retain, nonatomic) TSPData *adjustedImageData;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData;
@property (retain, nonatomic) TSPData *enhancedImageData;
@property (readonly, nonatomic) TSDBezierPath *tracedPath;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;

+ (void)adjustIncomingImageGeometry:(id)a0 maskGeometry:(id)a1 forImageData:(id)a2 maskedWithInstantAlphaPath:(id)a3 withNaturalSize:(struct CGSize { double x0; double x1; })a4 forTargetImageGeometry:(id)a5 withTargetMaskGeometry:(id)a6;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2 reservedCount:(unsigned long long)a3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)a0 inTheme:(id)a1 alternate:(int)a2;
+ (id)presetKinds;

- (id)objectForProperty:(int)a0;
- (void)setStyle:(id)a0;
- (struct CGSize { double x0; double x1; })originalSize;
- (BOOL)isValid;
- (void)acceptVisitor:(id)a0;
- (Class)layoutClass;
- (void)dealloc;
- (id)style;
- (id)mediaFileType;
- (BOOL)isOpaque;
- (BOOL)isPDF;
- (id)copyWithContext:(id)a0;
- (BOOL)isMasked;
- (id)childInfos;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (Class)repClass;
- (void)setExteriorTextWrap:(id)a0;
- (id)defaultMaskInfo;
- (struct CGPoint { double x0; double x1; })centerForReplacingWithNewMedia;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeFullTransform;
- (id)copyWithContext:(id)a0 style:(id)a1;
- (id)defaultMaskInfoWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })defaultOriginalSize;
- (id)geometryWithMask;
- (id)i_thumbnailForImageData:(id)a0;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 imageData:(id)a3 originalImageData:(id)a4;
- (BOOL)maskCanBeReset;
- (id)mediaDisplayName;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (long long)mixingTypeWithObject:(id)a0;
- (id)presetKind;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (Class)styleClass;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)updateGeometryToReplaceMediaInfo:(id)a0;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint { double x0; double x1; })a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;

@end

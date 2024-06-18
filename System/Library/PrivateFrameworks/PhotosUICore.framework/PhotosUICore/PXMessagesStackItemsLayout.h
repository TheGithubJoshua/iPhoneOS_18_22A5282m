@class NSArray, PXMessagesStackItemsLayoutHelper;
@protocol PXMessagesStackItemsLayoutDelegate, PXMessagesStackItemsLayoutPrimaryItemDelegate;

@interface PXMessagesStackItemsLayout : PXGItemsLayout <PXGItemsGeometry> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _preItemLoadingFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXMessagesStackItemsLayoutHelper *_layoutHelper;
    unsigned long long _primaryItemIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _leadingItemsRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trailingItemsRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trailingHiddenItemsRange;
    long long _firstTrailingHiddenItemWithTapback;
    long long _secondTrailingHiddenItemWithTapback;
    double _pageFocus;
    unsigned long long _archSide;
    BOOL _signalDelegateForPrimaryItemChange;
    BOOL _scrollToBeginning;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _desiredVisibleRect;
    unsigned long long _decorationInfoBySpriteIndexSize;
    struct { double x0; } *_decorationInfoBySpriteIndex;
    BOOL _higherPageDirectionTolerance;
    unsigned short _accessorySpriteMediaVersion;
}

@property (readonly, nonatomic) long long numberOfPages;
@property (weak, nonatomic) id<PXMessagesStackItemsLayoutDelegate> delegate;
@property (weak, nonatomic) id<PXMessagesStackItemsLayoutPrimaryItemDelegate> primaryItemDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredLayoutRect;
@property (nonatomic) double normalizedPageWidth;
@property (nonatomic) unsigned long long stackedItemsCount;
@property (nonatomic) double normalizedStackSizeTransform;
@property (copy, nonatomic) NSArray *normalizedStackHorizontalOffsets;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic) double normalizedContentInsets;
@property (nonatomic) double rotationAngle;
@property (nonatomic) int presentationType;
@property (nonatomic) int mediaKind;
@property (nonatomic) int accessoryPresentationType;
@property (nonatomic) int accessoryMediaKind;
@property (nonatomic) BOOL isSettling;
@property (readonly, nonatomic) long long primaryItemIndex;
@property (readonly, nonatomic) double primaryItemFocus;
@property (readonly, nonatomic) double horizontalContentMargin;
@property (nonatomic) double leftEdgeInternalHorizontalAlignment;
@property (nonatomic) double rightEdgeInternalHorizontalAlignment;

+ (id)_sharedTemplateLayoutHelper;

- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (id)init;
- (void)_updateContentSize;
- (void)loadedItemsDidChange;
- (void)referenceSizeDidChange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })itemsToLoad;
- (void)userInterfaceDirectionDidChange;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (void)accessoryItemsDidChange;
- (void)_updateVisibleRect;
- (void)willUpdate;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)_invalidateContentSize;
- (void)_updateSprites;
- (void)visibleRectDidChange;
- (void)contentSizeDidChange;
- (id)itemsGeometry;
- (long long)scrollableAxis;
- (void)dealloc;
- (void)didUpdate;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)screenScaleDidChange;
- (void)numberOfAccessoryItemsDidChange;
- (void)update;
- (void)setNumberOfItems:(long long)a0 withChangeDetails:(id)a1 changeMediaVersionHandler:(id /* block */)a2;
- (double)horizontalContentMarginForSize:(struct CGSize { double x0; double x1; })a0 normalizedVerticalContentInsets:(double)a1;
- (void)_clearLayoutProperties;
- (void)_getItemsForXOffset:(double)a0 leadingItems:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 primaryItemIndex:(unsigned long long *)a2 trailingItems:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 trailingHiddenItems:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 pageFocus:(double *)a5;
- (void)_invalidateLayoutHelper;
- (void)_invalidateSprites;
- (void)_invalidateVisibleRect;
- (void)_signalDelegatePostUpdate;
- (void)_syncPropertiesToLayoutHelper:(id)a0;
- (void)_updateLayoutHelper;
- (void)_updateLayoutProperties;
- (double)closestPageOffsetForHorizontalOffset:(double)a0;
- (BOOL)getHorizontalOffsetForObjectReference:(id)a0 outOffset:(double *)a1;
- (double)overlayAlphaForSpriteIndex:(unsigned int)a0;
- (double)pageOffsetGreaterThanOffset:(double)a0;
- (double)pageOffsetLessThanOffset:(double)a0;
- (void)reloadAccessoryItems;
- (void)scrollToBeginning;
- (double)selectionOverlayAlphaForSpriteIndex:(unsigned int)a0;
- (BOOL)shouldDecorateUndefinedMediaKind;
- (struct { double x0; double x1; struct CGPoint { double x0; double x1; } x2; })tapbackConfigurationForProposedConfiguration:(struct { double x0; double x1; struct CGPoint { double x0; double x1; } x2; })a0 spriteIndex:(unsigned int)a1;

@end
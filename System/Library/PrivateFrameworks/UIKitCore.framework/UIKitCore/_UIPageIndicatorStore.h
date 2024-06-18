@class UIImage, NSMutableArray, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

@interface _UIPageIndicatorStore : NSObject {
    struct { unsigned char dirty : 1; double fittingLength; struct CGSize { double width; double height; } maximumSize; } _fittingSizeCache;
    struct { unsigned char dirty : 1; double fittingLength; long long startIndex; long long numberOfIndicators; } _indicatorCountCache;
    struct { unsigned char dirty : 1; double numberOfPages; struct CGSize { double width; double height; } contentSize; } _contentSizeCache;
    struct { unsigned char dirty : 1; struct _NSRange { unsigned long long location; unsigned long long length; } range; struct CGSize { double width; double height; } contentSize; } _contentSizeInRangeCache;
    UIImage *_defaultImage;
    _UIPageIndicatorStoreObject *_defaultObject;
}

@property (retain, nonatomic) NSMutableArray *store;
@property (weak, nonatomic) id<_UIPageIndicatorStoreDelegate> delegate;
@property (retain, nonatomic) UIImage *preferredImage;
@property (retain, nonatomic) UIImage *preferredActiveImage;
@property (nonatomic) double indicatorSpacing;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) UIImage *indicatorImage;
@property (readonly, nonatomic) long long numberOfPages;

- (id)customActiveIndicatorImageForPage:(long long)a0;
- (double)indicatorPositionForContinuousPage:(double)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })_indicatorSizeForObject:(id)a0;
- (void)invalidateLayoutCache;
- (struct CGSize { double x0; double x1; })_sizeForMaximumContentSizeFittingLength:(double)a0;
- (struct CGSize { double x0; double x1; })_contentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateActiveImage:(id)a0 forPage:(long long)a1;
- (void)updateStoreForNumberOfPages:(long long)a0;
- (struct CGSize { double x0; double x1; })minimumContentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)a0 fittingLength:(double)a1;
- (id)customIndicatorImageForPage:(long long)a0;
- (long long)objectIndexForPage:(long long)a0;
- (void)_removeImageForPage:(long long)a0 active:(BOOL)a1;
- (id)indicatorImageForPage:(long long)a0;
- (struct CGSize { double x0; double x1; })resolvedIndicatorLayoutSizeForPage:(long long)a0;
- (void).cxx_destruct;
- (void)_updateImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (struct CGSize { double x0; double x1; })indicatorSizeForPage:(long long)a0;
- (void)validateDataStore;
- (void)updateImage:(id)a0 forPage:(long long)a1;
- (id)_defaultIndicatorImage;
- (id)activeIndicatorImageForPage:(long long)a0;
- (long long)_objectIndexForPage:(long long)a0 lower:(long long)a1 upper:(long long)a2;
- (struct CGSize { double x0; double x1; })sizeForMaximumContentSizeFittingLength:(double)a0;
- (struct CGSize { double x0; double x1; })defaultIndicatorSize;
- (void)_resetStore;
- (void)_insertImage:(id)a0 forPage:(long long)a1 active:(BOOL)a2;
- (struct CGSize { double x0; double x1; })contentSizeForNumberOfPages:(long long)a0;

@end

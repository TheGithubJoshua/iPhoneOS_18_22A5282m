@class NSString;

@interface _SBDisplayItemSingleSizeGrid : NSObject <_SBDisplayItemGridProvider> {
    struct CGSize { double width; double height; } _size;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)allHeights;
- (id)allWidths;
- (struct CGSize { double x0; double x1; })nearestGridSizeForSize:(struct CGSize { double x0; double x1; })a0 countOnStage:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })sizeAtIndexFromFullWidthForBounds:(unsigned long long)a0;

@end

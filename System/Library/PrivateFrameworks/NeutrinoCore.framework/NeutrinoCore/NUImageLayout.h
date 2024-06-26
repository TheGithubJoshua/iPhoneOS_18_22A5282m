@interface NUImageLayout : NSObject

@property (readonly, nonatomic) struct { long long width; long long height; } imageSize;
@property (readonly, nonatomic) long long tileCount;

+ (id)contiguousLayoutForImageSize:(struct { long long x0; long long x1; })a0;
+ (id)overlappingTiledLayoutForImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2;
+ (id)stripLayoutForImageSize:(struct { long long x0; long long x1; })a0 stripHeight:(long long)a1;
+ (id)tiledLayoutForImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct { long long x0; long long x1; })tileSize;
- (struct { long long x0; long long x1; })borderSize;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })contentRectForTileAtIndex:(long long)a0;
- (void)enumerateTilesForReadingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateTilesForWritingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })frameRectForTileAtIndex:(long long)a0;
- (id)initWithImageSize:(struct { long long x0; long long x1; })a0;
- (BOOL)isEqualToLayout:(id)a0;
- (struct { long long x0; long long x1; })tileCounts;
- (long long)tileIndexAtPoint:(struct { long long x0; long long x1; })a0;
- (id)tileInfoAtIndex:(long long)a0;

@end

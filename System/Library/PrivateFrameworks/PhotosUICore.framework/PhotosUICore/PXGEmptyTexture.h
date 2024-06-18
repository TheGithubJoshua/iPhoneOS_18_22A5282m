@interface PXGEmptyTexture : PXGBaseTexture

- (int)presentationType;
- (long long)estimatedByteSize;
- (struct CGImage { } *)imageRepresentation;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;

@end

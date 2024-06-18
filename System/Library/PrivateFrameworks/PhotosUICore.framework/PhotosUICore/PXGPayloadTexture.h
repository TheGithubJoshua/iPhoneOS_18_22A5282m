@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture {
    int _presentationType;
}

@property (readonly, copy, nonatomic) id<NSCopying> payload;
@property (readonly, nonatomic) int presentationType;

- (id)init;
- (id)initWithPayload:(id)a0 presentationType:(int)a1;
- (long long)estimatedByteSize;
- (void).cxx_destruct;
- (struct CGImage { } *)imageRepresentation;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;

@end

@class NSString, NSData;

@interface RBArchiveDelegateImpl : NSObject <RBEncoderDelegate, RBDecoderDelegate> {
    unsigned int _flags;
    struct objc_ptr<NSData *> { NSData *_p; } _metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGFont { } *)decodedCGFontWithData:(id)a0 error:(id *)a1;
- (const void *)decodedImageContentsWithData:(id)a0 type:(int *)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)encodedImageData:(struct { int x0; void *x1; })a0 error:(id *)a1;
- (id)initWithFlags:(unsigned int)a0;
- (id)encodedCGFontData:(struct CGFont { } *)a0 error:(id *)a1;
- (id)encodedMetadata;
- (void)decodedMetadata:(id)a0;

@end

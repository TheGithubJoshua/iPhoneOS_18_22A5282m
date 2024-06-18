@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (id)init;
- (void *)internalRepresentation;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)initWithInternalTask:(void *)a0;

@end

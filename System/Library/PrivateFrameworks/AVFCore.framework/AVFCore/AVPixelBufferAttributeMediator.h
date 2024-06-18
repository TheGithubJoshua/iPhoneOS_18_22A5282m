@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (id)init;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (id)mediatedPixelBufferAttributes;
- (void)dealloc;

@end

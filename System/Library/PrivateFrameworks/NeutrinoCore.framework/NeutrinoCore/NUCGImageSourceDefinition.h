@interface NUCGImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) struct CGImageSource { } *imageSource;

- (id)init;
- (long long)mediaType;
- (void)dealloc;
- (id)generateSourceNodeWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithCGImageSource:(struct CGImageSource { } *)a0;

@end

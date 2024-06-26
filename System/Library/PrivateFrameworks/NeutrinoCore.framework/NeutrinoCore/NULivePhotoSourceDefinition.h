@class NUSourceDefinition;

@interface NULivePhotoSourceDefinition : NUSourceDefinition

@property (readonly) NUSourceDefinition *image;
@property (readonly) NUSourceDefinition *video;

- (id)init;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImageSourceDefinition:(id)a0 videoSourceDefinition:(id)a1;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end

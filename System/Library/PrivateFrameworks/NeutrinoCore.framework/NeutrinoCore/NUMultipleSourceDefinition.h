@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions;

- (id)init;
- (long long)mediaType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceDefinitions:(id)a0;
- (id)sourceContainerNodeWithIdentifier:(id)a0 error:(out id *)a1;

@end

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceDefinition:(out id *)a0;

@end

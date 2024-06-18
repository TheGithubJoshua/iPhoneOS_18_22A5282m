@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)allDomains;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;

@end

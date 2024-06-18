@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)init;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (BOOL)addDomain:(id)a0;
- (void)_decrementCountAndMaybePruneItems:(id)a0;
- (id)allDomains;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (BOOL)_addDomainsFrom:(id)a0;
- (BOOL)isEmpty;
- (BOOL)addDomainsFromArray:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (BOOL)addDomainsFromSelection:(id)a0;
- (void)dealloc;
- (unsigned long long)count;

@end

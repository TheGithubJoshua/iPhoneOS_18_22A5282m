@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)a0;

- (id)subpredicates;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)a0;
- (id)personContextNonePredicates;
- (id)initWithFetchOptions:(id)a0;
- (id)personContextPeopleHomePredicate;
- (id)_verifiedPredicate;
- (void).cxx_destruct;
- (id)personContextOneUpPredicate;
- (id)personContextDetailPredicate;
- (id)_verifiedVisiblePredicate;
- (id)personContextAdditionalPredicate;
- (id)_notVerifiedPredicate;
- (id)_notHiddenTypePredicate;

@end

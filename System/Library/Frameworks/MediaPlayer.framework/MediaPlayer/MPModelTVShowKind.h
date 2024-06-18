@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind

@property (readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithSeasonKind:(id)a0;
+ (id)identityKind;

- (id)humanDescription;
- (id)initWithCoder:(id)a0;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView *x0; struct __shared_weak_count *x1; })a0 withContext:(id)a1;
- (unsigned long long)hash;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate *x0; struct __shared_weak_count *x1; })representedSearchScopePredicate;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

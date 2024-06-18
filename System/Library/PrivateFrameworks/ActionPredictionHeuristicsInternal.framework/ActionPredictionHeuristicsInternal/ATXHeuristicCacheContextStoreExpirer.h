@class _CDContextualChangeRegistration, _CDContextualPredicate, _CDContextualKeyPath;

@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    _CDContextualKeyPath *_contextKeyPath;
    _CDContextualPredicate *_predicate;
    _CDContextualChangeRegistration *_registration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)_stop;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCDContextualKeyPath:(id)a0;

@end

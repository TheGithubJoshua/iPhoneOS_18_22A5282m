@class NSArray;

@interface HDInsertCodableContributorsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *contributors;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) long long syncIdentity;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithContributors:(id)a0 provenance:(long long)a1 syncIdentity:(long long)a2;

@end

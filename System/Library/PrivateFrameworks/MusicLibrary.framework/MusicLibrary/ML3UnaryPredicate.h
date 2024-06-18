@class ML3Predicate;

@interface ML3UnaryPredicate : ML3Predicate

@property (retain, nonatomic) ML3Predicate *predicate;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPredicate:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)SQLJoinClausesForClass:(Class)a0;
- (id)databaseStatementParameters;
- (unsigned long long)hash;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

@class NSSet, HDDatabaseTransactionContextStatistics, NSMutableSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (readonly, nonatomic) BOOL skipJournalMerge;
@property (readonly, nonatomic) BOOL skipTransactionStartTasks;
@property (readonly, nonatomic) BOOL requiresNewDatabaseConnection;
@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long journalType;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL requiresWrite;
@property (readonly, nonatomic) BOOL requiresProtectedData;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForReading;
+ (id)contextForWriting;
+ (id)highPriorityContext;
+ (id)contextForReadingProtectedData;
+ (id)contextForWritingProtectedData;
+ (id)contextForAccessibilityAssertion:(id)a0;

- (id)init;
- (id)copyForReadingProtectedData;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithOptions:(unsigned long long)a0;
- (id)copyForWritingProtectedData;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (BOOL)containsContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyForWriting;

@end

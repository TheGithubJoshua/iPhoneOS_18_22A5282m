@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) BOOL syncChangeMarker;
@property (nonatomic) int changeSource;
@property (nonatomic) BOOL nonCoalescing;
@property (readonly, nonatomic) BOOL isSyncable;

+ (id)transactionAuthorFromChangeSource:(int)a0;
+ (id)transactionModifiersFromTransactionAuthor:(id)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1 nonCoalescing:(BOOL)a2;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;

- (id)init;
- (id)encodeAsTransactionAuthor;
- (BOOL)updateFromTransactionAuthor:(id)a0;
- (id)initWithChangeSource:(int)a0 syncChangeMarker:(BOOL)a1 nonCoalescing:(BOOL)a2;
- (id)description;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;
- (id)_descriptionWithBuilder:(id)a0;
- (BOOL)isNonCoalescing;

@end

@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject

@property (retain, nonatomic) NSMutableDictionary *lookupValues;

+ (id)emptyPropertyMapper;

- (void)registerColumnName:(id)a0 table:(id)a1 lookupKeys:(id)a2 forClass:(Class)a3 property:(SEL)a4;
- (id)init;
- (id)valueForLookupKey:(id)a0 protocol:(id)a1 property:(SEL)a2;
- (id)qualifiedColumnExpressionForClass:(Class)a0 property:(SEL)a1 availableTables:(id)a2;
- (void)_registerQualifiedColumns:(id)a0 lookupKeys:(id)a1 forClass:(Class)a2 property:(SEL)a3;
- (id)columnNameForLookupKey:(id)a0 value:(id)a1;
- (void)registerColumnName:(id)a0 table:(id)a1 lookupKeys:(id)a2;
- (id)columnNameForProtocol:(id)a0 property:(SEL)a1;
- (id)columnNameForClass:(Class)a0 property:(SEL)a1;
- (void)registerColumnNames:(id)a0 table:(id)a1 forClass:(Class)a2 property:(SEL)a3;
- (id)qualifiedColumnNamesForClass:(Class)a0 property:(SEL)a1 availableTables:(id)a2;
- (void).cxx_destruct;
- (BOOL)hasLookupKey:(id)a0 class:(Class)a1 property:(SEL)a2;
- (id)valueForLookupKey:(id)a0 class:(Class)a1 property:(SEL)a2;
- (void)registerColumn:(id)a0 forClass:(Class)a1 property:(SEL)a2 lookupKeys:(id)a3;
- (id)merge:(id)a0;
- (id)columnForClass:(Class)a0 property:(SEL)a1;
- (id)qualifiedColumnExpressionForLookupKey:(id)a0 value:(id)a1 availableTables:(id)a2;
- (id)columnForProtocol:(id)a0 property:(SEL)a1;
- (void)registerColumn:(id)a0 forProtocol:(id)a1 property:(SEL)a2 lookupKeys:(id)a3;
- (id)qualifiedColumnExpressionsForClass:(Class)a0 property:(SEL)a1 availableTables:(id)a2;
- (id)_findAllProtocolsOfClass:(Class)a0 withProperty:(SEL)a1;
- (id)columnForLookupKey:(id)a0 value:(id)a1;
- (id)_qualifiedColumnExpressionsForColumn:(id)a0 availableTables:(id)a1 replaceNULL:(BOOL)a2;

@end

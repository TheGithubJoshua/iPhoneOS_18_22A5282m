@class NSURL;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate;

@interface MCMSQLiteDB : NSObject

@property (weak, nonatomic) id<MCMSQLiteDBCodeSigningPeerageDelegate> peerageDelegate;
@property (nonatomic) struct sqlite3 { } *db;
@property (retain, nonatomic) NSURL *url;

+ (struct sqlite3 { } *)openDBWithURL:(id)a0 error:(id *)a1;
+ (BOOL)moveDBWithURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (id)parentIdentifierForChildIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteCodeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_performSingleParameterQuery:(const char *)a0 withTextInput:(id)a1 expectedChanges:(int)a2 error:(id *)a3;
- (BOOL)_sqliteExec:(id)a0 error:(id *)a1;
- (BOOL)_insertCodeSigningInfo:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (id)_selectCodeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)invalidateCodeSigningForIdentifierAndAllChildren:(id)a0 error:(id *)a1;
- (id)childIdentifiersForParentIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_deleteCodeSigningWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)a0;
- (BOOL)addCodeSigningEntry:(id)a0 withIdentifier:(id)a1 error:(id *)a2;
- (id)codeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (id)identifiersWithError:(id *)a0;
- (BOOL)_insertChildIdentifier:(id)a0 forParentIdentifier:(id)a1 error:(id *)a2;
- (BOOL)invalidateCodeSigningWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_performInsertOrUpdateQuery:(const char *)a0 withCodeSigningEntry:(id)a1 forIdentifier:(id)a2 isUpdate:(BOOL)a3 error:(id *)a4;
- (BOOL)_performSingleParameterQuery:(const char *)a0 withTextInput:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)_insertCodeSigningData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (void)dealloc;
- (id)childParentMapWithError:(id *)a0;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(id /* block */)a0;
- (BOOL)_performTwoParameterQuery:(const char *)a0 withTextInputOne:(id)a1 andTextInputTwo:(id)a2 expectedChanges:(int)a3 error:(id *)a4;
- (void)closeDB;

@end

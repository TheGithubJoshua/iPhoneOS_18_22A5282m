@class SSXPCConnection, SSKeyValueStoreDatabase;

@interface SSKeyValueStore : NSObject {
    SSXPCConnection *_connection;
    SSKeyValueStoreDatabase *_database;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}

@property (readonly, getter=isLocalReadable) BOOL localReadable;
@property (readonly, getter=isLocalWritable) BOOL localWritable;

+ (BOOL)isLocalReadable;

- (id)copyAccounts;
- (id)init;
- (void)removeAllValuesWithCompletionBlock:(id /* block */)a0;
- (void)modifyUsingTransactionBlock:(id /* block */)a0;
- (void)removeAllValuesForDomain:(id)a0;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (void)_loadDatabaseIfNecessary;
- (void)setValue:(id)a0 forDomain:(id)a1 key:(id)a2 completionBlock:(id /* block */)a3;
- (id)accountDictionaries;
- (void)removeAccountFromDomain:(id)a0;
- (id)iTunesValueForKey:(id)a0 usedDomain:(id *)a1;
- (void)getValuesForDomain:(id)a0 keys:(const id *)a1 count:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)setValuesWithDictionary:(id)a0 forDomain:(id)a1;
- (void)dealloc;
- (void)removeAllValuesForDomain:(id)a0 completionBlock:(id /* block */)a1;
- (void)readUsingSessionBlock:(id /* block */)a0;
- (void)getValueForDomain:(id)a0 key:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeAccountDictionaries;
- (void)setValuesWithDictionary:(id)a0 forDomain:(id)a1 completionBlock:(id /* block */)a2;

@end

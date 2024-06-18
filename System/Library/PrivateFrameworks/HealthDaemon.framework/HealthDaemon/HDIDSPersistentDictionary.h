@class NSURL, HDSQLiteDatabase;

@interface HDIDSPersistentDictionary : NSObject {
    Class _objectClass;
    NSURL *_databaseURL;
    HDSQLiteDatabase *_database;
}

- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)a0;
- (void)didFinishSending:(id)a0;
- (void)didReceiveError:(id)a0 forMessageID:(id)a1;
- (void)obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1;
- (void)didReceiveResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (id)objectForKey:(id)a0;
- (void)didSendRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)removeAllObjects;
- (void)didSendResponse:(id)a0 toRequest:(id)a1 deviceID:(id)a2 type:(int)a3 length:(long long)a4;
- (void)didReceiveRequest:(id)a0 deviceID:(id)a1 type:(int)a2 length:(long long)a3;
- (void)removeObjectForKey:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 objectClass:(Class)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1 expires:(double)a2;
- (id)messageIDsForPendingOutgoingMessagesWithType:(int)a0 deviceID:(id)a1;
- (void)didCancel:(id)a0;

@end

@class NSNumber, NSArray;

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
}

@property (readonly, nonatomic) NSNumber *sessionID;

- (id)certificates;
- (void)terminate;
- (id)identities;
- (id)keys;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)advertisedItems;
- (id)itemsOfClass:(id)a0;
- (void)dealloc;
- (BOOL)isValidWithError:(id *)a0;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;

@end

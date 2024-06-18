@class NSXPCConnection, NSObject;
@protocol OS_os_transaction;

@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver>

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSXPCConnection *connection;

- (unsigned long long)hash;
- (void)query:(id)a0 resultDidUpdate:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWitConnection:(id)a0;

@end

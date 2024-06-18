@class NSObject, NSXPCConnection;
@protocol OS_os_transaction;

@interface COClientObserver : NSObject <NSCopying>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) id cluster;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConnection:(id)a0 cluster:(id)a1;

@end

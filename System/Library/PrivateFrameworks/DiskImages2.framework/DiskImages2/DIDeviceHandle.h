@class NSString, NSXPCListenerEndpoint, DIClient2IODaemonXPCHandler;

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DIClient2IODaemonXPCHandler *client2IOhandler;
@property (nonatomic) BOOL handleRefCount;
@property (readonly, nonatomic) unsigned long long regEntryID;
@property (copy) NSString *BSDName;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRegEntryID:(unsigned long long)a0 xpcEndpoint:(id)a1;
- (BOOL)addToRefCountWithError:(id *)a0;
- (id)initWithRegEntryID:(unsigned long long)a0;
- (BOOL)updateBSDNameWithBlockDevice:(id)a0 error:(id *)a1;
- (BOOL)waitForDeviceWithError:(id *)a0;
- (BOOL)waitForQuietWithService:(unsigned int)a0 error:(id *)a1;

@end

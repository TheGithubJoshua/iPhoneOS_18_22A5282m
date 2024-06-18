@class NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NWPrivilegedHelper : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (retain) NSMutableDictionary *handlers;
@property (retain) NSMutableSet *allKnownEntitlementSet;
@property (retain) NSMutableArray *allKnownEntitlementGroup;

- (void)startThrottlePolicyEventListener;
- (void)handleRequest:(id)a0 onConnection:(id)a1;
- (void)registerHelperFunctions;
- (void).cxx_destruct;
- (void)registerHandlerFunction:(void /* function */ *)a0 type:(int)a1 allowedEntitlementGroup:(id)a2;
- (BOOL)startXPCListener;
- (id)initWithQueue:(id)a0;

@end

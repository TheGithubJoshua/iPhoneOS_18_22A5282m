@class NSUUID, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NWNetworkAgent;

@interface NWNetworkAgentRegistration : NSObject

@property Class networkAgentClass;
@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (readonly, nonatomic, getter=isRegistered) BOOL registered;
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)a0;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)a0;
+ (int)newRegistrationFileDescriptor;
+ (BOOL)useNetworkAgent:(id)a0 returnUseCount:(unsigned long long *)a1;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (BOOL)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;
- (BOOL)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (BOOL)updateNetworkAgent:(id)a0;
- (BOOL)unregisterNetworkAgent;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)a0;
- (BOOL)setLowWaterMark:(unsigned int)a0;
- (BOOL)addToken:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)resetError;
- (BOOL)registerNetworkAgent:(id)a0;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (id)initWithNetworkAgentClass:(Class)a0;
- (BOOL)flushTokens;
- (BOOL)assignNexusData:(id)a0 toClient:(id)a1;
- (int)dupRegistrationFileDescriptor;
- (BOOL)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (void)dealloc;
- (void)handleMessageFromAgent;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)a0;
- (BOOL)createReadSourceWithRegistrationSocket:(int)a0;
- (BOOL)assignResolvedEndpoints:(id)a0 toClient:(id)a1;

@end

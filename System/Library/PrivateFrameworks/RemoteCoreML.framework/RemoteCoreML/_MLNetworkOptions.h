@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject

@property (readonly, nonatomic) NSMutableDictionary *networkOptions;
@property (readonly, nonatomic) long long receiveTimeout;

- (BOOL)useAWDL;
- (unsigned long long)family;
- (const char *)port;
- (void).cxx_destruct;
- (const char *)localPort;
- (id)initWithOptions:(id)a0;
- (const char *)psk;
- (BOOL)useTLS;
- (const char *)localAddr;
- (const char *)networkNameIdentifier;
- (long long)receiveTimeoutValue;
- (BOOL)useBonjour;
- (BOOL)useUDP;

@end

@class NSXPCConnection;
@protocol OTATaskingAgent;

@interface OTATaskingAgentClient : NSObject {
    NSXPCConnection *_connection;
    id<OTATaskingAgent> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (id)awdKey;
- (unsigned int)uidForUser:(id)a0;
- (id)crashreporterKey;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;

@end

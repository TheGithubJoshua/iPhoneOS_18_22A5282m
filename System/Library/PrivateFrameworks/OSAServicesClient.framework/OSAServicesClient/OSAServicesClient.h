@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)queryKey:(struct __CFString { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (id)awdKey;
- (void)dealloc;
- (unsigned int)uidForUser:(id)a0;
- (id)crashreporterKey;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;

@end

@class NSString, KVDonateVersionLog;

@interface KVDonateXPCClientFactory : NSObject <KVDonateServiceProvider> {
    KVDonateVersionLog *_versionLog;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)versionLog;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)makeConnection:(id)a0;
- (void)terminateConnection:(id)a0;

@end

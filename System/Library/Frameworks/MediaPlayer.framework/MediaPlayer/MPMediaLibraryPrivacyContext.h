@class PAAccessInterval, PAApplication;

@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication *_clientApplication;
    PAAccessInterval *_privacyAccessInterval;
}

+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (void)initialize;
+ (id)sharedContextForCurrentProcess;
+ (id)contextForDefaultClient;

- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)endAccessInterval;
- (id)initWithClientIdentity:(id)a0;
- (void)logPrivacyAccess;
- (id)initWithPAApplication:(id)a0;
- (void).cxx_destruct;
- (void)beginAccessInterval;

@end

@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

@interface CKDGlobalConfigurationOperation : CKDOperation

@property (retain, nonatomic) CKDServerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup;

- (void)main;
- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void).cxx_destruct;

@end

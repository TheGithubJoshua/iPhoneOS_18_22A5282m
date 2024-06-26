@class NSString, HKElectrocardiogramSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface> {
    HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    long long _sessionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)configurationClass;

- (void)connectionInterrupted;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)remote_abortWithCompletion:(id /* block */)a0;
- (void)remote_startWithCompletion:(id /* block */)a0;

@end

@class NSString;

@interface HDMedicalIDSetupStatusTaskServer : HDStandardTaskServer <HKMedicalIDSetupStatusServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (void)remote_medicalIDSetUpStatusWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (id)exportedInterface;

@end

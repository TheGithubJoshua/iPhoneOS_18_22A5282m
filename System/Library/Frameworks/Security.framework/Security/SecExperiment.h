@class NSString, SecExperimentConfig;

@interface SecExperiment : NSObject

@property (retain) NSString *name;
@property (nonatomic) BOOL samplingDisabled;
@property (retain) SecExperimentConfig *cachedConfig;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRandomExperimentConfigurationFromAsset:(id)a0;
- (id)copyRemoteExperimentAsset;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabled;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)a0;

@end

@class NSString, AFExperimentServerConfigurationInfo, NSURL;

@interface _AFExperimentServerConfigurationInfoMutation : NSObject <AFExperimentServerConfigurationInfoMutating> {
    AFExperimentServerConfigurationInfo *_base;
    NSString *_configurationIdentifier;
    NSURL *_configurationURL;
    double _maxTimeToSync;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasConfigurationIdentifier : 1; unsigned char hasConfigurationURL : 1; unsigned char hasMaxTimeToSync : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getConfigurationIdentifier;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setConfigurationIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setConfigurationURL:(id)a0;
- (id)getConfigurationURL;
- (double)getMaxTimeToSync;
- (void)setMaxTimeToSync:(double)a0;

@end

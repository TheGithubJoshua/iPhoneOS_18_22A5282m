@class NSString, NSArray, AFExperimentGroup, AFExperimentConfiguration;

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating> {
    AFExperimentConfiguration *_base;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasType : 1; unsigned char hasIdentifier : 1; unsigned char hasVersion : 1; unsigned char hasControlGroup : 1; unsigned char hasExperimentGroups : 1; unsigned char hasSalt : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSalt:(id)a0;
- (id)getVersion;
- (void)setIdentifier:(id)a0;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (long long)getType;
- (void)setType:(long long)a0;
- (void)setVersion:(id)a0;
- (void)setControlGroup:(id)a0;
- (id)getSalt;
- (void)setExperimentGroups:(id)a0;
- (id)getIdentifier;
- (void).cxx_destruct;
- (id)getControlGroup;
- (id)getExperimentGroups;

@end

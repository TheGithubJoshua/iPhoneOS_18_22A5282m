@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (id)agentDescription;
- (void).cxx_destruct;
- (id)copyAgentData;

@end

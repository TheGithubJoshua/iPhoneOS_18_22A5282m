@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)init;
- (void).cxx_destruct;
- (id)requestedTemplateTypeParameter;
- (id)privacyDataKeyParameter;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)requestedAdDataParameter;
- (id)frequencyCapDataParameter;
- (id)toroClickCountDataParameter;

@end

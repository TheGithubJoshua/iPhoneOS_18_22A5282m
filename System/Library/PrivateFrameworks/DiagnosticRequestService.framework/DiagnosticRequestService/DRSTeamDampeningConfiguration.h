@class NSDictionary, DRSDampeningConfiguration;

@interface DRSTeamDampeningConfiguration : NSObject

@property (retain, nonatomic) DRSDampeningConfiguration *defaultConfiguration;
@property (retain, nonatomic) NSDictionary *issueCategoryToConfigurationDict;

+ (id)teamIdToTeamDampeningConfigFromPlistDirectoryPath:(id)a0 errorOut:(id *)a1;

- (id)configurationForIssueCategory:(id)a0;
- (id)initWithDefaultConfiguration:(id)a0 issueCategoryToConfigurationDict:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 teamID:(id)a1;
- (id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)a0;
- (void)updateIssueCategoryConfig:(id)a0 newConfig:(id)a1;
- (id)jsonCompatibleDictRepresentation;
- (id)initWithPlistDict:(id)a0;

@end

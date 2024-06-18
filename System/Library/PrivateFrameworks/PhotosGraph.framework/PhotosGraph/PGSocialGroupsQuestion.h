@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)state;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)type;
- (id)initWithSocialGroupID:(id)a0 personLocalIdentifiers:(id)a1 personNames:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end

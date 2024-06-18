@class NSDictionary, NSString;

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 location:(id)a1 locationTypeName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end

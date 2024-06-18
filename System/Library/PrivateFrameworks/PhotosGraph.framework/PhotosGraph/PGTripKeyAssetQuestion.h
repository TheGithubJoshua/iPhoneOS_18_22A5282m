@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
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
- (id)initWithKeyAssetUUID:(id)a0 tripName:(id)a1 isLongTrip:(BOOL)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end

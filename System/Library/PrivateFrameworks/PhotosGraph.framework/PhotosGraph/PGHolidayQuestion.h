@class NSDictionary, NSString;

@interface PGHolidayQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 holidayName:(id)a1 localizedHolidayName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end

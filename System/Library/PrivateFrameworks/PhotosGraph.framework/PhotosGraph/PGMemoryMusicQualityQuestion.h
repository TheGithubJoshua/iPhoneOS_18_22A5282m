@class NSDictionary, NSString;

@interface PGMemoryMusicQualityQuestion : PGSurveyQuestion {
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
- (id)initWithMemory:(id)a0 song:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
